#import "SmoothedBIView.h"
#import "CROLine.h"
#import "ROSession.h"
#import "MetroPointXY.pb.h"
#import "Rpc.h"

@implementation SmoothedBIView
{
    UIBezierPath *path;
    UIImage *incrementalImage;
    CGPoint pts[5]; // we now need to keep track of the four points of a Bezier segment and the first control point of the next segment
    uint ctr;
    CROLine *currentLine;
}

- (id)initWithCoder:(NSCoder *)aDecoder
{
    if (self = [super initWithCoder:aDecoder])
    {
        [self setMultipleTouchEnabled:NO];
        path = [UIBezierPath bezierPath];
        [path setLineWidth:2.0];
        self.arrayLines = [[NSMutableArray alloc] init];
    }
    return self;
    
}
- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self setMultipleTouchEnabled:NO];
        path = [UIBezierPath bezierPath];
        [path setLineWidth:2.0];
        self.arrayLines = [[NSMutableArray alloc] init];
    }
    return self;
}


// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    [incrementalImage drawInRect:rect];
    [path stroke];
}

- (void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event
{
    if (![ROSession instance].isDrawable) {
        return;
    }
    ctr = 0;
    UITouch *touch = [touches anyObject];
    pts[0] = [touch locationInView:self];
    
    // Clear and add first node to array
    currentLine = nil;
    currentLine = [[CROLine alloc] init];
    [currentLine.points addObject:[[[[MetroPointXY builder] setX:pts[0].x] setY:pts[0].y] build]];
}

- (void)touchesMoved:(NSSet *)touches withEvent:(UIEvent *)event
{
    if (![ROSession instance].isDrawable) {
        return;
    }
    UITouch *touch = [touches anyObject];
    CGPoint p = [touch locationInView:self];
    [currentLine.points addObject:[[[[MetroPointXY builder] setX:p.x] setY:p.y] build]];
    ctr++;
    pts[ctr] = p;
    if (ctr == 4) 
    {
        pts[3] = CGPointMake((pts[2].x + pts[4].x)/2.0, (pts[2].y + pts[4].y)/2.0); // move the endpoint to the middle of the line joining the second control point of the first Bezier segment and the first control point of the second Bezier segment 
        
        [path moveToPoint:pts[0]];
        [path addCurveToPoint:pts[3] controlPoint1:pts[1] controlPoint2:pts[2]];
        
        [self setNeedsDisplay];
        // replace points and get ready to handle the next segment
        pts[0] = pts[3]; 
        pts[1] = pts[4];
        ctr = 1;
    }
}

- (void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event
{
    if (![ROSession instance].isDrawable) {
        return;
    }
    //[self drawBitmap];
    [self setNeedsDisplay];
    //[path removeAllPoints];
    ctr = 0;
    [self.arrayLines addObject:currentLine];
    // Send line
    [[Rpc instance] requestClass:[ROSession instance].currentClassId drawLineId:[ROSession instance].currentLineId points:currentLine.points];
    [ROSession instance].currentLineId++;
}

- (void)touchesCancelled:(NSSet *)touches withEvent:(UIEvent *)event
{
    [self touchesEnded:touches withEvent:event];
}

- (void)drawBitmap
{
    UIGraphicsBeginImageContextWithOptions(self.bounds.size, YES, 0.0);
    if (!incrementalImage) // first time; paint background white
    {
        UIBezierPath *rectpath = [UIBezierPath bezierPathWithRect:self.bounds];
        [[UIColor whiteColor] setFill];
        [rectpath fill];
    }
    [incrementalImage drawAtPoint:CGPointZero];
    [[UIColor blackColor] setStroke];
    [path stroke];
    incrementalImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
}

- (void)drawListPoints:(NSArray*)points{
    ctr = 0;
    for (MetroPointXY *xy in points) {
        ctr++;
        pts[ctr] = CGPointMake(xy.x, xy.y);
        if (ctr == 4)
        {
            pts[3] = CGPointMake((pts[2].x + pts[4].x)/2.0, (pts[2].y + pts[4].y)/2.0); // move the endpoint to the middle of the line joining the second control point of the first Bezier segment and the first control point of the second Bezier segment
            
            [path moveToPoint:pts[0]];
            [path addCurveToPoint:pts[3] controlPoint1:pts[1] controlPoint2:pts[2]];
            
            [self setNeedsDisplay];
            // replace points and get ready to handle the next segment
            pts[0] = pts[3];
            pts[1] = pts[4];
            ctr = 1;
        }
    }
    [self setNeedsDisplay];
}


@end


