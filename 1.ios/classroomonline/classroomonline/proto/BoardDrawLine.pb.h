// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

#import "MetroPointXY.pb.h"
// @@protoc_insertion_point(imports)

@class BoardDrawLine;
@class BoardDrawLineBuilder;
@class MetroPointXY;
@class MetroPointXYBuilder;



@interface BoardDrawLineRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define BoardDrawLine_lineid @"lineid"
#define BoardDrawLine_points @"points"
#define BoardDrawLine_classid @"classid"
@interface BoardDrawLine : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasLineid_:1;
  BOOL hasClassid_:1;
  SInt32 lineid;
  SInt32 classid;
  NSMutableArray * pointsArray;
}
- (BOOL) hasLineid;
- (BOOL) hasClassid;
@property (readonly) SInt32 lineid;
@property (readonly, strong) NSArray * points;
@property (readonly) SInt32 classid;
- (MetroPointXY*)pointsAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (BoardDrawLineBuilder*) builder;
+ (BoardDrawLineBuilder*) builder;
+ (BoardDrawLineBuilder*) builderWithPrototype:(BoardDrawLine*) prototype;
- (BoardDrawLineBuilder*) toBuilder;

+ (BoardDrawLine*) parseFromData:(NSData*) data;
+ (BoardDrawLine*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (BoardDrawLine*) parseFromInputStream:(NSInputStream*) input;
+ (BoardDrawLine*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (BoardDrawLine*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (BoardDrawLine*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface BoardDrawLineBuilder : PBGeneratedMessageBuilder {
@private
  BoardDrawLine* resultBoardDrawLine;
}

- (BoardDrawLine*) defaultInstance;

- (BoardDrawLineBuilder*) clear;
- (BoardDrawLineBuilder*) clone;

- (BoardDrawLine*) build;
- (BoardDrawLine*) buildPartial;

- (BoardDrawLineBuilder*) mergeFrom:(BoardDrawLine*) other;
- (BoardDrawLineBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (BoardDrawLineBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasLineid;
- (SInt32) lineid;
- (BoardDrawLineBuilder*) setLineid:(SInt32) value;
- (BoardDrawLineBuilder*) clearLineid;

- (NSMutableArray *)points;
- (MetroPointXY*)pointsAtIndex:(NSUInteger)index;
- (BoardDrawLineBuilder *)addPoints:(MetroPointXY*)value;
- (BoardDrawLineBuilder *)setPointsArray:(NSArray *)array;
- (BoardDrawLineBuilder *)clearPoints;

- (BOOL) hasClassid;
- (SInt32) classid;
- (BoardDrawLineBuilder*) setClassid:(SInt32) value;
- (BoardDrawLineBuilder*) clearClassid;
@end


// @@protoc_insertion_point(global_scope)