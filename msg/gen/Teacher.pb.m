// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "Teacher.pb.h"
// @@protoc_insertion_point(imports)

@implementation TeacherRoot
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [TeacherRoot class]) {
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    [UserRoot registerAllExtensions:registry];
    extensionRegistry = registry;
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
}
@end

@interface Teacher ()
@property (strong) User* userinfo;
@property (strong) NSMutableArray * classidArray;
@property Float64 rate;
@end

@implementation Teacher

- (BOOL) hasUserinfo {
  return !!hasUserinfo_;
}
- (void) setHasUserinfo:(BOOL) _value_ {
  hasUserinfo_ = !!_value_;
}
@synthesize userinfo;
@synthesize classidArray;
@dynamic classid;
- (BOOL) hasRate {
  return !!hasRate_;
}
- (void) setHasRate:(BOOL) _value_ {
  hasRate_ = !!_value_;
}
@synthesize rate;
- (instancetype) init {
  if ((self = [super init])) {
    self.userinfo = [User defaultInstance];
    self.rate = 0;
  }
  return self;
}
static Teacher* defaultTeacherInstance = nil;
+ (void) initialize {
  if (self == [Teacher class]) {
    defaultTeacherInstance = [[Teacher alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultTeacherInstance;
}
- (instancetype) defaultInstance {
  return defaultTeacherInstance;
}
- (NSArray *)classid {
  return classidArray;
}
- (NSString*)classidAtIndex:(NSUInteger)index {
  return [classidArray objectAtIndex:index];
}
- (BOOL) isInitialized {
  if (!self.hasUserinfo) {
    return NO;
  }
  if (!self.userinfo.isInitialized) {
    return NO;
  }
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasUserinfo) {
    [output writeMessage:1 value:self.userinfo];
  }
  [self.classidArray enumerateObjectsUsingBlock:^(NSString *element, NSUInteger idx, BOOL *stop) {
    [output writeString:2 value:element];
  }];
  if (self.hasRate) {
    [output writeDouble:3 value:self.rate];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasUserinfo) {
    size_ += computeMessageSize(1, self.userinfo);
  }
  {
    __block SInt32 dataSize = 0;
    const NSUInteger count = self.classidArray.count;
    [self.classidArray enumerateObjectsUsingBlock:^(NSString *element, NSUInteger idx, BOOL *stop) {
      dataSize += computeStringSizeNoTag(element);
    }];
    size_ += dataSize;
    size_ += (SInt32)(1 * count);
  }
  if (self.hasRate) {
    size_ += computeDoubleSize(3, self.rate);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (Teacher*) parseFromData:(NSData*) data {
  return (Teacher*)[[[Teacher builder] mergeFromData:data] build];
}
+ (Teacher*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (Teacher*)[[[Teacher builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (Teacher*) parseFromInputStream:(NSInputStream*) input {
  return (Teacher*)[[[Teacher builder] mergeFromInputStream:input] build];
}
+ (Teacher*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (Teacher*)[[[Teacher builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (Teacher*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (Teacher*)[[[Teacher builder] mergeFromCodedInputStream:input] build];
}
+ (Teacher*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (Teacher*)[[[Teacher builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (TeacherBuilder*) builder {
  return [[TeacherBuilder alloc] init];
}
+ (TeacherBuilder*) builderWithPrototype:(Teacher*) prototype {
  return [[Teacher builder] mergeFrom:prototype];
}
- (TeacherBuilder*) builder {
  return [Teacher builder];
}
- (TeacherBuilder*) toBuilder {
  return [Teacher builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasUserinfo) {
    [output appendFormat:@"%@%@ {\n", indent, @"userinfo"];
    [self.userinfo writeDescriptionTo:output
                         withIndent:[NSString stringWithFormat:@"%@  ", indent]];
    [output appendFormat:@"%@}\n", indent];
  }
  [self.classidArray enumerateObjectsUsingBlock:^(id obj, NSUInteger idx, BOOL *stop) {
    [output appendFormat:@"%@%@: %@\n", indent, @"classid", obj];
  }];
  if (self.hasRate) {
    [output appendFormat:@"%@%@: %@\n", indent, @"rate", [NSNumber numberWithDouble:self.rate]];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasUserinfo) {
   NSMutableDictionary *messageDictionary = [NSMutableDictionary dictionary]; 
   [self.userinfo storeInDictionary:messageDictionary];
   [dictionary setObject:[NSDictionary dictionaryWithDictionary:messageDictionary] forKey:@"userinfo"];
  }
  [dictionary setObject:self.classid forKey: @"classid"];
  if (self.hasRate) {
    [dictionary setObject: [NSNumber numberWithDouble:self.rate] forKey: @"rate"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[Teacher class]]) {
    return NO;
  }
  Teacher *otherMessage = other;
  return
      self.hasUserinfo == otherMessage.hasUserinfo &&
      (!self.hasUserinfo || [self.userinfo isEqual:otherMessage.userinfo]) &&
      [self.classidArray isEqualToArray:otherMessage.classidArray] &&
      self.hasRate == otherMessage.hasRate &&
      (!self.hasRate || self.rate == otherMessage.rate) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasUserinfo) {
    hashCode = hashCode * 31 + [self.userinfo hash];
  }
  [self.classidArray enumerateObjectsUsingBlock:^(NSString *element, NSUInteger idx, BOOL *stop) {
    hashCode = hashCode * 31 + [element hash];
  }];
  if (self.hasRate) {
    hashCode = hashCode * 31 + [[NSNumber numberWithDouble:self.rate] hash];
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface TeacherBuilder()
@property (strong) Teacher* resultTeacher;
@end

@implementation TeacherBuilder
@synthesize resultTeacher;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultTeacher = [[Teacher alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultTeacher;
}
- (TeacherBuilder*) clear {
  self.resultTeacher = [[Teacher alloc] init];
  return self;
}
- (TeacherBuilder*) clone {
  return [Teacher builderWithPrototype:resultTeacher];
}
- (Teacher*) defaultInstance {
  return [Teacher defaultInstance];
}
- (Teacher*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (Teacher*) buildPartial {
  Teacher* returnMe = resultTeacher;
  self.resultTeacher = nil;
  return returnMe;
}
- (TeacherBuilder*) mergeFrom:(Teacher*) other {
  if (other == [Teacher defaultInstance]) {
    return self;
  }
  if (other.hasUserinfo) {
    [self mergeUserinfo:other.userinfo];
  }
  if (other.classidArray.count > 0) {
    if (resultTeacher.classidArray == nil) {
      resultTeacher.classidArray = [[NSMutableArray alloc] initWithArray:other.classidArray];
    } else {
      [resultTeacher.classidArray addObjectsFromArray:other.classidArray];
    }
  }
  if (other.hasRate) {
    [self setRate:other.rate];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (TeacherBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (TeacherBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  PBUnknownFieldSetBuilder* unknownFields = [PBUnknownFieldSet builderWithUnknownFields:self.unknownFields];
  while (YES) {
    SInt32 tag = [input readTag];
    switch (tag) {
      case 0:
        [self setUnknownFields:[unknownFields build]];
        return self;
      default: {
        if (![self parseUnknownField:input unknownFields:unknownFields extensionRegistry:extensionRegistry tag:tag]) {
          [self setUnknownFields:[unknownFields build]];
          return self;
        }
        break;
      }
      case 10: {
        UserBuilder* subBuilder = [User builder];
        if (self.hasUserinfo) {
          [subBuilder mergeFrom:self.userinfo];
        }
        [input readMessage:subBuilder extensionRegistry:extensionRegistry];
        [self setUserinfo:[subBuilder buildPartial]];
        break;
      }
      case 18: {
        [self addClassid:[input readString]];
        break;
      }
      case 25: {
        [self setRate:[input readDouble]];
        break;
      }
    }
  }
}
- (BOOL) hasUserinfo {
  return resultTeacher.hasUserinfo;
}
- (User*) userinfo {
  return resultTeacher.userinfo;
}
- (TeacherBuilder*) setUserinfo:(User*) value {
  resultTeacher.hasUserinfo = YES;
  resultTeacher.userinfo = value;
  return self;
}
- (TeacherBuilder*) setUserinfoBuilder:(UserBuilder*) builderForValue {
  return [self setUserinfo:[builderForValue build]];
}
- (TeacherBuilder*) mergeUserinfo:(User*) value {
  if (resultTeacher.hasUserinfo &&
      resultTeacher.userinfo != [User defaultInstance]) {
    resultTeacher.userinfo =
      [[[User builderWithPrototype:resultTeacher.userinfo] mergeFrom:value] buildPartial];
  } else {
    resultTeacher.userinfo = value;
  }
  resultTeacher.hasUserinfo = YES;
  return self;
}
- (TeacherBuilder*) clearUserinfo {
  resultTeacher.hasUserinfo = NO;
  resultTeacher.userinfo = [User defaultInstance];
  return self;
}
- (NSMutableArray *)classid {
  return resultTeacher.classidArray;
}
- (NSString*)classidAtIndex:(NSUInteger)index {
  return [resultTeacher classidAtIndex:index];
}
- (TeacherBuilder *)addClassid:(NSString*)value {
  if (resultTeacher.classidArray == nil) {
    resultTeacher.classidArray = [[NSMutableArray alloc]init];
  }
  [resultTeacher.classidArray addObject:value];
  return self;
}
- (TeacherBuilder *)setClassidArray:(NSArray *)array {
  resultTeacher.classidArray = [[NSMutableArray alloc] initWithArray:array];
  return self;
}
- (TeacherBuilder *)clearClassid {
  resultTeacher.classidArray = nil;
  return self;
}
- (BOOL) hasRate {
  return resultTeacher.hasRate;
}
- (Float64) rate {
  return resultTeacher.rate;
}
- (TeacherBuilder*) setRate:(Float64) value {
  resultTeacher.hasRate = YES;
  resultTeacher.rate = value;
  return self;
}
- (TeacherBuilder*) clearRate {
  resultTeacher.hasRate = NO;
  resultTeacher.rate = 0;
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
