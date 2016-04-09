// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ClassCategory.pb.h"
// @@protoc_insertion_point(imports)

@implementation ClassCategoryRoot
static id<PBExtensionField> ClassCategory_message = nil;
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [ClassCategoryRoot class]) {
    ClassCategory_message =
      [PBConcreteExtensionField extensionWithType:PBExtensionTypeMessage
                                     extendedClass:[IpcMessage class]
                                       fieldNumber:201
                                      defaultValue:[ClassCategory defaultInstance]
                               messageOrGroupClass:[ClassCategory class]
                                        isRepeated:NO
                                          isPacked:NO
                            isMessageSetWireFormat:NO];
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    [IpcMessageRoot registerAllExtensions:registry];
    extensionRegistry = registry;
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
  [registry addExtension:ClassCategory_message];
}
@end

@interface ClassCategory ()
@property (strong) NSString* uId;
@property (strong) NSString* name;
@property (strong) NSString* pb_description;
@property (strong) NSString* imgurl;
@end

@implementation ClassCategory

- (BOOL) hasUId {
  return !!hasUId_;
}
- (void) setHasUId:(BOOL) _value_ {
  hasUId_ = !!_value_;
}
@synthesize uId;
- (BOOL) hasName {
  return !!hasName_;
}
- (void) setHasName:(BOOL) _value_ {
  hasName_ = !!_value_;
}
@synthesize name;
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
- (instancetype) init {
  if ((self = [super init])) {
    self.uId = @"";
    self.name = @"";
    self.pb_description = @"";
    self.imgurl = @"";
  }
  return self;
}
+ (id<PBExtensionField>) message {
  return ClassCategory_message;
}
static ClassCategory* defaultClassCategoryInstance = nil;
+ (void) initialize {
  if (self == [ClassCategory class]) {
    defaultClassCategoryInstance = [[ClassCategory alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultClassCategoryInstance;
}
- (instancetype) defaultInstance {
  return defaultClassCategoryInstance;
}
- (BOOL) isInitialized {
  if (!self.hasUId) {
    return NO;
  }
  if (!self.hasName) {
    return NO;
  }
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasUId) {
    [output writeString:1 value:self.uId];
  }
  if (self.hasName) {
    [output writeString:2 value:self.name];
  }
  if (self.hasDescription) {
    [output writeString:3 value:self.pb_description];
  }
  if (self.hasImgurl) {
    [output writeString:4 value:self.imgurl];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasUId) {
    size_ += computeStringSize(1, self.uId);
  }
  if (self.hasName) {
    size_ += computeStringSize(2, self.name);
  }
  if (self.hasDescription) {
    size_ += computeStringSize(3, self.pb_description);
  }
  if (self.hasImgurl) {
    size_ += computeStringSize(4, self.imgurl);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (ClassCategory*) parseFromData:(NSData*) data {
  return (ClassCategory*)[[[ClassCategory builder] mergeFromData:data] build];
}
+ (ClassCategory*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassCategory*)[[[ClassCategory builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (ClassCategory*) parseFromInputStream:(NSInputStream*) input {
  return (ClassCategory*)[[[ClassCategory builder] mergeFromInputStream:input] build];
}
+ (ClassCategory*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassCategory*)[[[ClassCategory builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ClassCategory*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (ClassCategory*)[[[ClassCategory builder] mergeFromCodedInputStream:input] build];
}
+ (ClassCategory*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassCategory*)[[[ClassCategory builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ClassCategoryBuilder*) builder {
  return [[ClassCategoryBuilder alloc] init];
}
+ (ClassCategoryBuilder*) builderWithPrototype:(ClassCategory*) prototype {
  return [[ClassCategory builder] mergeFrom:prototype];
}
- (ClassCategoryBuilder*) builder {
  return [ClassCategory builder];
}
- (ClassCategoryBuilder*) toBuilder {
  return [ClassCategory builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasUId) {
    [output appendFormat:@"%@%@: %@\n", indent, @"uId", self.uId];
  }
  if (self.hasName) {
    [output appendFormat:@"%@%@: %@\n", indent, @"name", self.name];
  }
  if (self.hasDescription) {
    [output appendFormat:@"%@%@: %@\n", indent, @"pb_description", self.pb_description];
  }
  if (self.hasImgurl) {
    [output appendFormat:@"%@%@: %@\n", indent, @"imgurl", self.imgurl];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasUId) {
    [dictionary setObject: self.uId forKey: @"uId"];
  }
  if (self.hasName) {
    [dictionary setObject: self.name forKey: @"name"];
  }
  if (self.hasDescription) {
    [dictionary setObject: self.pb_description forKey: @"pb_description"];
  }
  if (self.hasImgurl) {
    [dictionary setObject: self.imgurl forKey: @"imgurl"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[ClassCategory class]]) {
    return NO;
  }
  ClassCategory *otherMessage = other;
  return
      self.hasUId == otherMessage.hasUId &&
      (!self.hasUId || [self.uId isEqual:otherMessage.uId]) &&
      self.hasName == otherMessage.hasName &&
      (!self.hasName || [self.name isEqual:otherMessage.name]) &&
      self.hasDescription == otherMessage.hasDescription &&
      (!self.hasDescription || [self.pb_description isEqual:otherMessage.pb_description]) &&
      self.hasImgurl == otherMessage.hasImgurl &&
      (!self.hasImgurl || [self.imgurl isEqual:otherMessage.imgurl]) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasUId) {
    hashCode = hashCode * 31 + [self.uId hash];
  }
  if (self.hasName) {
    hashCode = hashCode * 31 + [self.name hash];
  }
  if (self.hasDescription) {
    hashCode = hashCode * 31 + [self.pb_description hash];
  }
  if (self.hasImgurl) {
    hashCode = hashCode * 31 + [self.imgurl hash];
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface ClassCategoryBuilder()
@property (strong) ClassCategory* resultClassCategory;
@end

@implementation ClassCategoryBuilder
@synthesize resultClassCategory;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultClassCategory = [[ClassCategory alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultClassCategory;
}
- (ClassCategoryBuilder*) clear {
  self.resultClassCategory = [[ClassCategory alloc] init];
  return self;
}
- (ClassCategoryBuilder*) clone {
  return [ClassCategory builderWithPrototype:resultClassCategory];
}
- (ClassCategory*) defaultInstance {
  return [ClassCategory defaultInstance];
}
- (ClassCategory*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (ClassCategory*) buildPartial {
  ClassCategory* returnMe = resultClassCategory;
  self.resultClassCategory = nil;
  return returnMe;
}
- (ClassCategoryBuilder*) mergeFrom:(ClassCategory*) other {
  if (other == [ClassCategory defaultInstance]) {
    return self;
  }
  if (other.hasUId) {
    [self setUId:other.uId];
  }
  if (other.hasName) {
    [self setName:other.name];
  }
  if (other.hasDescription) {
    [self setDescription:other.pb_description];
  }
  if (other.hasImgurl) {
    [self setImgurl:other.imgurl];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (ClassCategoryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (ClassCategoryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
        [self setUId:[input readString]];
        break;
      }
      case 18: {
        [self setName:[input readString]];
        break;
      }
      case 26: {
        [self setDescription:[input readString]];
        break;
      }
      case 34: {
        [self setImgurl:[input readString]];
        break;
      }
    }
  }
}
- (BOOL) hasUId {
  return resultClassCategory.hasUId;
}
- (NSString*) uId {
  return resultClassCategory.uId;
}
- (ClassCategoryBuilder*) setUId:(NSString*) value {
  resultClassCategory.hasUId = YES;
  resultClassCategory.uId = value;
  return self;
}
- (ClassCategoryBuilder*) clearUId {
  resultClassCategory.hasUId = NO;
  resultClassCategory.uId = @"";
  return self;
}
- (BOOL) hasName {
  return resultClassCategory.hasName;
}
- (NSString*) name {
  return resultClassCategory.name;
}
- (ClassCategoryBuilder*) setName:(NSString*) value {
  resultClassCategory.hasName = YES;
  resultClassCategory.name = value;
  return self;
}
- (ClassCategoryBuilder*) clearName {
  resultClassCategory.hasName = NO;
  resultClassCategory.name = @"";
  return self;
}
- (BOOL) hasDescription {
  return resultClassCategory.hasDescription;
}
- (NSString*) pb_description {
  return resultClassCategory.pb_description;
}
- (ClassCategoryBuilder*) setDescription:(NSString*) value {
  resultClassCategory.hasDescription = YES;
  resultClassCategory.pb_description = value;
  return self;
}
- (ClassCategoryBuilder*) clearDescription {
  resultClassCategory.hasDescription = NO;
  resultClassCategory.pb_description = @"";
  return self;
}
- (BOOL) hasImgurl {
  return resultClassCategory.hasImgurl;
}
- (NSString*) imgurl {
  return resultClassCategory.imgurl;
}
- (ClassCategoryBuilder*) setImgurl:(NSString*) value {
  resultClassCategory.hasImgurl = YES;
  resultClassCategory.imgurl = value;
  return self;
}
- (ClassCategoryBuilder*) clearImgurl {
  resultClassCategory.hasImgurl = NO;
  resultClassCategory.imgurl = @"";
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
