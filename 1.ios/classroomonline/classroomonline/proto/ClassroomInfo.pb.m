// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ClassroomInfo.pb.h"
// @@protoc_insertion_point(imports)

@implementation ClassroomInfoRoot
static id<PBExtensionField> ClassroomInfo_message = nil;
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [ClassroomInfoRoot class]) {
    ClassroomInfo_message =
      [PBConcreteExtensionField extensionWithType:PBExtensionTypeMessage
                                     extendedClass:[IpcMessage class]
                                       fieldNumber:203
                                      defaultValue:[ClassroomInfo defaultInstance]
                               messageOrGroupClass:[ClassroomInfo class]
                                        isRepeated:NO
                                          isPacked:NO
                            isMessageSetWireFormat:NO];
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    [IpcMessageRoot registerAllExtensions:registry];
    [UserRoot registerAllExtensions:registry];
    extensionRegistry = registry;
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
  [registry addExtension:ClassroomInfo_message];
}
@end

@interface ClassroomInfo ()
@property (strong) NSString* uid;
@property (strong) NSString* cateid;
@property (strong) NSString* name;
@property (strong) User* teacher;
@property (strong) NSString* pb_description;
@property (strong) NSString* imgurl;
@property (strong) NSString* timeopen;
@property (strong) NSString* timeclose;
@end

@implementation ClassroomInfo

- (BOOL) hasUid {
  return !!hasUid_;
}
- (void) setHasUid:(BOOL) _value_ {
  hasUid_ = !!_value_;
}
@synthesize uid;
- (BOOL) hasCateid {
  return !!hasCateid_;
}
- (void) setHasCateid:(BOOL) _value_ {
  hasCateid_ = !!_value_;
}
@synthesize cateid;
- (BOOL) hasName {
  return !!hasName_;
}
- (void) setHasName:(BOOL) _value_ {
  hasName_ = !!_value_;
}
@synthesize name;
- (BOOL) hasTeacher {
  return !!hasTeacher_;
}
- (void) setHasTeacher:(BOOL) _value_ {
  hasTeacher_ = !!_value_;
}
@synthesize teacher;
- (BOOL) hasDescription {
  return !!hasDescription_;
}
- (void) setHasDescription:(BOOL) _value_ {
  hasDescription_ = !!_value_;
}
@synthesize pb_description;
- (BOOL) hasImgurl {
  return !!hasImgurl_;
}
- (void) setHasImgurl:(BOOL) _value_ {
  hasImgurl_ = !!_value_;
}
@synthesize imgurl;
- (BOOL) hasTimeopen {
  return !!hasTimeopen_;
}
- (void) setHasTimeopen:(BOOL) _value_ {
  hasTimeopen_ = !!_value_;
}
@synthesize timeopen;
- (BOOL) hasTimeclose {
  return !!hasTimeclose_;
}
- (void) setHasTimeclose:(BOOL) _value_ {
  hasTimeclose_ = !!_value_;
}
@synthesize timeclose;
- (instancetype) init {
  if ((self = [super init])) {
    self.uid = @"";
    self.cateid = @"";
    self.name = @"";
    self.teacher = [User defaultInstance];
    self.pb_description = @"";
    self.imgurl = @"";
    self.timeopen = @"";
    self.timeclose = @"";
  }
  return self;
}
+ (id<PBExtensionField>) message {
  return ClassroomInfo_message;
}
static ClassroomInfo* defaultClassroomInfoInstance = nil;
+ (void) initialize {
  if (self == [ClassroomInfo class]) {
    defaultClassroomInfoInstance = [[ClassroomInfo alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultClassroomInfoInstance;
}
- (instancetype) defaultInstance {
  return defaultClassroomInfoInstance;
}
- (BOOL) isInitialized {
  if (!self.hasUid) {
    return NO;
  }
  if (!self.hasCateid) {
    return NO;
  }
  if (!self.hasName) {
    return NO;
  }
  if (!self.hasTeacher) {
    return NO;
  }
  if (!self.teacher.isInitialized) {
    return NO;
  }
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasUid) {
    [output writeString:1 value:self.uid];
  }
  if (self.hasCateid) {
    [output writeString:2 value:self.cateid];
  }
  if (self.hasName) {
    [output writeString:3 value:self.name];
  }
  if (self.hasTeacher) {
    [output writeMessage:4 value:self.teacher];
  }
  if (self.hasDescription) {
    [output writeString:5 value:self.pb_description];
  }
  if (self.hasImgurl) {
    [output writeString:6 value:self.imgurl];
  }
  if (self.hasTimeopen) {
    [output writeString:7 value:self.timeopen];
  }
  if (self.hasTimeclose) {
    [output writeString:8 value:self.timeclose];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasUid) {
    size_ += computeStringSize(1, self.uid);
  }
  if (self.hasCateid) {
    size_ += computeStringSize(2, self.cateid);
  }
  if (self.hasName) {
    size_ += computeStringSize(3, self.name);
  }
  if (self.hasTeacher) {
    size_ += computeMessageSize(4, self.teacher);
  }
  if (self.hasDescription) {
    size_ += computeStringSize(5, self.pb_description);
  }
  if (self.hasImgurl) {
    size_ += computeStringSize(6, self.imgurl);
  }
  if (self.hasTimeopen) {
    size_ += computeStringSize(7, self.timeopen);
  }
  if (self.hasTimeclose) {
    size_ += computeStringSize(8, self.timeclose);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (ClassroomInfo*) parseFromData:(NSData*) data {
  return (ClassroomInfo*)[[[ClassroomInfo builder] mergeFromData:data] build];
}
+ (ClassroomInfo*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassroomInfo*)[[[ClassroomInfo builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (ClassroomInfo*) parseFromInputStream:(NSInputStream*) input {
  return (ClassroomInfo*)[[[ClassroomInfo builder] mergeFromInputStream:input] build];
}
+ (ClassroomInfo*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassroomInfo*)[[[ClassroomInfo builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ClassroomInfo*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (ClassroomInfo*)[[[ClassroomInfo builder] mergeFromCodedInputStream:input] build];
}
+ (ClassroomInfo*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassroomInfo*)[[[ClassroomInfo builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ClassroomInfoBuilder*) builder {
  return [[ClassroomInfoBuilder alloc] init];
}
+ (ClassroomInfoBuilder*) builderWithPrototype:(ClassroomInfo*) prototype {
  return [[ClassroomInfo builder] mergeFrom:prototype];
}
- (ClassroomInfoBuilder*) builder {
  return [ClassroomInfo builder];
}
- (ClassroomInfoBuilder*) toBuilder {
  return [ClassroomInfo builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasUid) {
    [output appendFormat:@"%@%@: %@\n", indent, @"uid", self.uid];
  }
  if (self.hasCateid) {
    [output appendFormat:@"%@%@: %@\n", indent, @"cateid", self.cateid];
  }
  if (self.hasName) {
    [output appendFormat:@"%@%@: %@\n", indent, @"name", self.name];
  }
  if (self.hasTeacher) {
    [output appendFormat:@"%@%@ {\n", indent, @"teacher"];
    [self.teacher writeDescriptionTo:output
                         withIndent:[NSString stringWithFormat:@"%@  ", indent]];
    [output appendFormat:@"%@}\n", indent];
  }
  if (self.hasDescription) {
    [output appendFormat:@"%@%@: %@\n", indent, @"pb_description", self.pb_description];
  }
  if (self.hasImgurl) {
    [output appendFormat:@"%@%@: %@\n", indent, @"imgurl", self.imgurl];
  }
  if (self.hasTimeopen) {
    [output appendFormat:@"%@%@: %@\n", indent, @"timeopen", self.timeopen];
  }
  if (self.hasTimeclose) {
    [output appendFormat:@"%@%@: %@\n", indent, @"timeclose", self.timeclose];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasUid) {
    [dictionary setObject: self.uid forKey: @"uid"];
  }
  if (self.hasCateid) {
    [dictionary setObject: self.cateid forKey: @"cateid"];
  }
  if (self.hasName) {
    [dictionary setObject: self.name forKey: @"name"];
  }
  if (self.hasTeacher) {
   NSMutableDictionary *messageDictionary = [NSMutableDictionary dictionary]; 
   [self.teacher storeInDictionary:messageDictionary];
   [dictionary setObject:[NSDictionary dictionaryWithDictionary:messageDictionary] forKey:@"teacher"];
  }
  if (self.hasDescription) {
    [dictionary setObject: self.pb_description forKey: @"pb_description"];
  }
  if (self.hasImgurl) {
    [dictionary setObject: self.imgurl forKey: @"imgurl"];
  }
  if (self.hasTimeopen) {
    [dictionary setObject: self.timeopen forKey: @"timeopen"];
  }
  if (self.hasTimeclose) {
    [dictionary setObject: self.timeclose forKey: @"timeclose"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[ClassroomInfo class]]) {
    return NO;
  }
  ClassroomInfo *otherMessage = other;
  return
      self.hasUid == otherMessage.hasUid &&
      (!self.hasUid || [self.uid isEqual:otherMessage.uid]) &&
      self.hasCateid == otherMessage.hasCateid &&
      (!self.hasCateid || [self.cateid isEqual:otherMessage.cateid]) &&
      self.hasName == otherMessage.hasName &&
      (!self.hasName || [self.name isEqual:otherMessage.name]) &&
      self.hasTeacher == otherMessage.hasTeacher &&
      (!self.hasTeacher || [self.teacher isEqual:otherMessage.teacher]) &&
      self.hasDescription == otherMessage.hasDescription &&
      (!self.hasDescription || [self.pb_description isEqual:otherMessage.pb_description]) &&
      self.hasImgurl == otherMessage.hasImgurl &&
      (!self.hasImgurl || [self.imgurl isEqual:otherMessage.imgurl]) &&
      self.hasTimeopen == otherMessage.hasTimeopen &&
      (!self.hasTimeopen || [self.timeopen isEqual:otherMessage.timeopen]) &&
      self.hasTimeclose == otherMessage.hasTimeclose &&
      (!self.hasTimeclose || [self.timeclose isEqual:otherMessage.timeclose]) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasUid) {
    hashCode = hashCode * 31 + [self.uid hash];
  }
  if (self.hasCateid) {
    hashCode = hashCode * 31 + [self.cateid hash];
  }
  if (self.hasName) {
    hashCode = hashCode * 31 + [self.name hash];
  }
  if (self.hasTeacher) {
    hashCode = hashCode * 31 + [self.teacher hash];
  }
  if (self.hasDescription) {
    hashCode = hashCode * 31 + [self.pb_description hash];
  }
  if (self.hasImgurl) {
    hashCode = hashCode * 31 + [self.imgurl hash];
  }
  if (self.hasTimeopen) {
    hashCode = hashCode * 31 + [self.timeopen hash];
  }
  if (self.hasTimeclose) {
    hashCode = hashCode * 31 + [self.timeclose hash];
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface ClassroomInfoBuilder()
@property (strong) ClassroomInfo* resultClassroomInfo;
@end

@implementation ClassroomInfoBuilder
@synthesize resultClassroomInfo;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultClassroomInfo = [[ClassroomInfo alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultClassroomInfo;
}
- (ClassroomInfoBuilder*) clear {
  self.resultClassroomInfo = [[ClassroomInfo alloc] init];
  return self;
}
- (ClassroomInfoBuilder*) clone {
  return [ClassroomInfo builderWithPrototype:resultClassroomInfo];
}
- (ClassroomInfo*) defaultInstance {
  return [ClassroomInfo defaultInstance];
}
- (ClassroomInfo*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (ClassroomInfo*) buildPartial {
  ClassroomInfo* returnMe = resultClassroomInfo;
  self.resultClassroomInfo = nil;
  return returnMe;
}
- (ClassroomInfoBuilder*) mergeFrom:(ClassroomInfo*) other {
  if (other == [ClassroomInfo defaultInstance]) {
    return self;
  }
  if (other.hasUid) {
    [self setUid:other.uid];
  }
  if (other.hasCateid) {
    [self setCateid:other.cateid];
  }
  if (other.hasName) {
    [self setName:other.name];
  }
  if (other.hasTeacher) {
    [self mergeTeacher:other.teacher];
  }
  if (other.hasDescription) {
    [self setDescription:other.pb_description];
  }
  if (other.hasImgurl) {
    [self setImgurl:other.imgurl];
  }
  if (other.hasTimeopen) {
    [self setTimeopen:other.timeopen];
  }
  if (other.hasTimeclose) {
    [self setTimeclose:other.timeclose];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (ClassroomInfoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (ClassroomInfoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
        [self setUid:[input readString]];
        break;
      }
      case 18: {
        [self setCateid:[input readString]];
        break;
      }
      case 26: {
        [self setName:[input readString]];
        break;
      }
      case 34: {
        UserBuilder* subBuilder = [User builder];
        if (self.hasTeacher) {
          [subBuilder mergeFrom:self.teacher];
        }
        [input readMessage:subBuilder extensionRegistry:extensionRegistry];
        [self setTeacher:[subBuilder buildPartial]];
        break;
      }
      case 42: {
        [self setDescription:[input readString]];
        break;
      }
      case 50: {
        [self setImgurl:[input readString]];
        break;
      }
      case 58: {
        [self setTimeopen:[input readString]];
        break;
      }
      case 66: {
        [self setTimeclose:[input readString]];
        break;
      }
    }
  }
}
- (BOOL) hasUid {
  return resultClassroomInfo.hasUid;
}
- (NSString*) uid {
  return resultClassroomInfo.uid;
}
- (ClassroomInfoBuilder*) setUid:(NSString*) value {
  resultClassroomInfo.hasUid = YES;
  resultClassroomInfo.uid = value;
  return self;
}
- (ClassroomInfoBuilder*) clearUid {
  resultClassroomInfo.hasUid = NO;
  resultClassroomInfo.uid = @"";
  return self;
}
- (BOOL) hasCateid {
  return resultClassroomInfo.hasCateid;
}
- (NSString*) cateid {
  return resultClassroomInfo.cateid;
}
- (ClassroomInfoBuilder*) setCateid:(NSString*) value {
  resultClassroomInfo.hasCateid = YES;
  resultClassroomInfo.cateid = value;
  return self;
}
- (ClassroomInfoBuilder*) clearCateid {
  resultClassroomInfo.hasCateid = NO;
  resultClassroomInfo.cateid = @"";
  return self;
}
- (BOOL) hasName {
  return resultClassroomInfo.hasName;
}
- (NSString*) name {
  return resultClassroomInfo.name;
}
- (ClassroomInfoBuilder*) setName:(NSString*) value {
  resultClassroomInfo.hasName = YES;
  resultClassroomInfo.name = value;
  return self;
}
- (ClassroomInfoBuilder*) clearName {
  resultClassroomInfo.hasName = NO;
  resultClassroomInfo.name = @"";
  return self;
}
- (BOOL) hasTeacher {
  return resultClassroomInfo.hasTeacher;
}
- (User*) teacher {
  return resultClassroomInfo.teacher;
}
- (ClassroomInfoBuilder*) setTeacher:(User*) value {
  resultClassroomInfo.hasTeacher = YES;
  resultClassroomInfo.teacher = value;
  return self;
}
- (ClassroomInfoBuilder*) setTeacherBuilder:(UserBuilder*) builderForValue {
  return [self setTeacher:[builderForValue build]];
}
- (ClassroomInfoBuilder*) mergeTeacher:(User*) value {
  if (resultClassroomInfo.hasTeacher &&
      resultClassroomInfo.teacher != [User defaultInstance]) {
    resultClassroomInfo.teacher =
      [[[User builderWithPrototype:resultClassroomInfo.teacher] mergeFrom:value] buildPartial];
  } else {
    resultClassroomInfo.teacher = value;
  }
  resultClassroomInfo.hasTeacher = YES;
  return self;
}
- (ClassroomInfoBuilder*) clearTeacher {
  resultClassroomInfo.hasTeacher = NO;
  resultClassroomInfo.teacher = [User defaultInstance];
  return self;
}
- (BOOL) hasDescription {
  return resultClassroomInfo.hasDescription;
}
- (NSString*) pb_description {
  return resultClassroomInfo.pb_description;
}
- (ClassroomInfoBuilder*) setDescription:(NSString*) value {
  resultClassroomInfo.hasDescription = YES;
  resultClassroomInfo.pb_description = value;
  return self;
}
- (ClassroomInfoBuilder*) clearDescription {
  resultClassroomInfo.hasDescription = NO;
  resultClassroomInfo.pb_description = @"";
  return self;
}
- (BOOL) hasImgurl {
  return resultClassroomInfo.hasImgurl;
}
- (NSString*) imgurl {
  return resultClassroomInfo.imgurl;
}
- (ClassroomInfoBuilder*) setImgurl:(NSString*) value {
  resultClassroomInfo.hasImgurl = YES;
  resultClassroomInfo.imgurl = value;
  return self;
}
- (ClassroomInfoBuilder*) clearImgurl {
  resultClassroomInfo.hasImgurl = NO;
  resultClassroomInfo.imgurl = @"";
  return self;
}
- (BOOL) hasTimeopen {
  return resultClassroomInfo.hasTimeopen;
}
- (NSString*) timeopen {
  return resultClassroomInfo.timeopen;
}
- (ClassroomInfoBuilder*) setTimeopen:(NSString*) value {
  resultClassroomInfo.hasTimeopen = YES;
  resultClassroomInfo.timeopen = value;
  return self;
}
- (ClassroomInfoBuilder*) clearTimeopen {
  resultClassroomInfo.hasTimeopen = NO;
  resultClassroomInfo.timeopen = @"";
  return self;
}
- (BOOL) hasTimeclose {
  return resultClassroomInfo.hasTimeclose;
}
- (NSString*) timeclose {
  return resultClassroomInfo.timeclose;
}
- (ClassroomInfoBuilder*) setTimeclose:(NSString*) value {
  resultClassroomInfo.hasTimeclose = YES;
  resultClassroomInfo.timeclose = value;
  return self;
}
- (ClassroomInfoBuilder*) clearTimeclose {
  resultClassroomInfo.hasTimeclose = NO;
  resultClassroomInfo.timeclose = @"";
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
