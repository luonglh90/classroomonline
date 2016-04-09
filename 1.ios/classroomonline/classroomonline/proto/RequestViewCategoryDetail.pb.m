// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "RequestViewCategoryDetail.pb.h"
// @@protoc_insertion_point(imports)

@implementation RequestViewCategoryDetailRoot
static id<PBExtensionField> RequestViewCategoryDetail_message = nil;
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [RequestViewCategoryDetailRoot class]) {
    RequestViewCategoryDetail_message =
      [PBConcreteExtensionField extensionWithType:PBExtensionTypeMessage
                                     extendedClass:[IpcMessage class]
                                       fieldNumber:203
                                      defaultValue:[RequestViewCategoryDetail defaultInstance]
                               messageOrGroupClass:[RequestViewCategoryDetail class]
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
  [registry addExtension:RequestViewCategoryDetail_message];
}
@end

@interface RequestViewCategoryDetail ()
@property SInt32 cateId;
@end

@implementation RequestViewCategoryDetail

- (BOOL) hasCateId {
  return !!hasCateId_;
}
- (void) setHasCateId:(BOOL) _value_ {
  hasCateId_ = !!_value_;
}
@synthesize cateId;
- (instancetype) init {
  if ((self = [super init])) {
    self.cateId = 0;
  }
  return self;
}
+ (id<PBExtensionField>) message {
  return RequestViewCategoryDetail_message;
}
static RequestViewCategoryDetail* defaultRequestViewCategoryDetailInstance = nil;
+ (void) initialize {
  if (self == [RequestViewCategoryDetail class]) {
    defaultRequestViewCategoryDetailInstance = [[RequestViewCategoryDetail alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultRequestViewCategoryDetailInstance;
}
- (instancetype) defaultInstance {
  return defaultRequestViewCategoryDetailInstance;
}
- (BOOL) isInitialized {
  if (!self.hasCateId) {
    return NO;
  }
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasCateId) {
    [output writeInt32:1 value:self.cateId];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasCateId) {
    size_ += computeInt32Size(1, self.cateId);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (RequestViewCategoryDetail*) parseFromData:(NSData*) data {
  return (RequestViewCategoryDetail*)[[[RequestViewCategoryDetail builder] mergeFromData:data] build];
}
+ (RequestViewCategoryDetail*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (RequestViewCategoryDetail*)[[[RequestViewCategoryDetail builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (RequestViewCategoryDetail*) parseFromInputStream:(NSInputStream*) input {
  return (RequestViewCategoryDetail*)[[[RequestViewCategoryDetail builder] mergeFromInputStream:input] build];
}
+ (RequestViewCategoryDetail*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (RequestViewCategoryDetail*)[[[RequestViewCategoryDetail builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (RequestViewCategoryDetail*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (RequestViewCategoryDetail*)[[[RequestViewCategoryDetail builder] mergeFromCodedInputStream:input] build];
}
+ (RequestViewCategoryDetail*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (RequestViewCategoryDetail*)[[[RequestViewCategoryDetail builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (RequestViewCategoryDetailBuilder*) builder {
  return [[RequestViewCategoryDetailBuilder alloc] init];
}
+ (RequestViewCategoryDetailBuilder*) builderWithPrototype:(RequestViewCategoryDetail*) prototype {
  return [[RequestViewCategoryDetail builder] mergeFrom:prototype];
}
- (RequestViewCategoryDetailBuilder*) builder {
  return [RequestViewCategoryDetail builder];
}
- (RequestViewCategoryDetailBuilder*) toBuilder {
  return [RequestViewCategoryDetail builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasCateId) {
    [output appendFormat:@"%@%@: %@\n", indent, @"cateId", [NSNumber numberWithInteger:self.cateId]];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasCateId) {
    [dictionary setObject: [NSNumber numberWithInteger:self.cateId] forKey: @"cateId"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[RequestViewCategoryDetail class]]) {
    return NO;
  }
  RequestViewCategoryDetail *otherMessage = other;
  return
      self.hasCateId == otherMessage.hasCateId &&
      (!self.hasCateId || self.cateId == otherMessage.cateId) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasCateId) {
    hashCode = hashCode * 31 + [[NSNumber numberWithInteger:self.cateId] hash];
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface RequestViewCategoryDetailBuilder()
@property (strong) RequestViewCategoryDetail* resultRequestViewCategoryDetail;
@end

@implementation RequestViewCategoryDetailBuilder
@synthesize resultRequestViewCategoryDetail;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultRequestViewCategoryDetail = [[RequestViewCategoryDetail alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultRequestViewCategoryDetail;
}
- (RequestViewCategoryDetailBuilder*) clear {
  self.resultRequestViewCategoryDetail = [[RequestViewCategoryDetail alloc] init];
  return self;
}
- (RequestViewCategoryDetailBuilder*) clone {
  return [RequestViewCategoryDetail builderWithPrototype:resultRequestViewCategoryDetail];
}
- (RequestViewCategoryDetail*) defaultInstance {
  return [RequestViewCategoryDetail defaultInstance];
}
- (RequestViewCategoryDetail*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (RequestViewCategoryDetail*) buildPartial {
  RequestViewCategoryDetail* returnMe = resultRequestViewCategoryDetail;
  self.resultRequestViewCategoryDetail = nil;
  return returnMe;
}
- (RequestViewCategoryDetailBuilder*) mergeFrom:(RequestViewCategoryDetail*) other {
  if (other == [RequestViewCategoryDetail defaultInstance]) {
    return self;
  }
  if (other.hasCateId) {
    [self setCateId:other.cateId];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (RequestViewCategoryDetailBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (RequestViewCategoryDetailBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
      case 8: {
        [self setCateId:[input readInt32]];
        break;
      }
    }
  }
}
- (BOOL) hasCateId {
  return resultRequestViewCategoryDetail.hasCateId;
}
- (SInt32) cateId {
  return resultRequestViewCategoryDetail.cateId;
}
- (RequestViewCategoryDetailBuilder*) setCateId:(SInt32) value {
  resultRequestViewCategoryDetail.hasCateId = YES;
  resultRequestViewCategoryDetail.cateId = value;
  return self;
}
- (RequestViewCategoryDetailBuilder*) clearCateId {
  resultRequestViewCategoryDetail.hasCateId = NO;
  resultRequestViewCategoryDetail.cateId = 0;
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
