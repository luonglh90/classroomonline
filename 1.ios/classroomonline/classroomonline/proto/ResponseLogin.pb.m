// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ResponseLogin.pb.h"
// @@protoc_insertion_point(imports)

@implementation ResponseLoginRoot
static id<PBExtensionField> ResponseLogin_message = nil;
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [ResponseLoginRoot class]) {
    ResponseLogin_message =
      [PBConcreteExtensionField extensionWithType:PBExtensionTypeMessage
                                     extendedClass:[IpcMessage class]
                                       fieldNumber:104
                                      defaultValue:[ResponseLogin defaultInstance]
                               messageOrGroupClass:[ResponseLogin class]
                                        isRepeated:NO
                                          isPacked:NO
                            isMessageSetWireFormat:NO];
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    [IpcMessageRoot registerAllExtensions:registry];
    [EnumsRoot registerAllExtensions:registry];
    extensionRegistry = registry;
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
  [registry addExtension:ResponseLogin_message];
}
@end

@interface ResponseLogin ()
@property (strong) NSString* username;
@property EnumsResponseLoginEnums status;
@end

@implementation ResponseLogin

- (BOOL) hasUsername {
  return !!hasUsername_;
}
- (void) setHasUsername:(BOOL) _value_ {
  hasUsername_ = !!_value_;
}
@synthesize username;
- (BOOL) hasStatus {
  return !!hasStatus_;
}
- (void) setHasStatus:(BOOL) _value_ {
  hasStatus_ = !!_value_;
}
@synthesize status;
- (instancetype) init {
  if ((self = [super init])) {
    self.username = @"";
    self.status = EnumsResponseLoginEnumsSuccess;
  }
  return self;
}
+ (id<PBExtensionField>) message {
  return ResponseLogin_message;
}
static ResponseLogin* defaultResponseLoginInstance = nil;
+ (void) initialize {
  if (self == [ResponseLogin class]) {
    defaultResponseLoginInstance = [[ResponseLogin alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultResponseLoginInstance;
}
- (instancetype) defaultInstance {
  return defaultResponseLoginInstance;
}
- (BOOL) isInitialized {
  if (!self.hasUsername) {
    return NO;
  }
  if (!self.hasStatus) {
    return NO;
  }
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasUsername) {
    [output writeString:1 value:self.username];
  }
  if (self.hasStatus) {
    [output writeEnum:2 value:self.status];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasUsername) {
    size_ += computeStringSize(1, self.username);
  }
  if (self.hasStatus) {
    size_ += computeEnumSize(2, self.status);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (ResponseLogin*) parseFromData:(NSData*) data {
  return (ResponseLogin*)[[[ResponseLogin builder] mergeFromData:data] build];
}
+ (ResponseLogin*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ResponseLogin*)[[[ResponseLogin builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (ResponseLogin*) parseFromInputStream:(NSInputStream*) input {
  return (ResponseLogin*)[[[ResponseLogin builder] mergeFromInputStream:input] build];
}
+ (ResponseLogin*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ResponseLogin*)[[[ResponseLogin builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ResponseLogin*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (ResponseLogin*)[[[ResponseLogin builder] mergeFromCodedInputStream:input] build];
}
+ (ResponseLogin*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ResponseLogin*)[[[ResponseLogin builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ResponseLoginBuilder*) builder {
  return [[ResponseLoginBuilder alloc] init];
}
+ (ResponseLoginBuilder*) builderWithPrototype:(ResponseLogin*) prototype {
  return [[ResponseLogin builder] mergeFrom:prototype];
}
- (ResponseLoginBuilder*) builder {
  return [ResponseLogin builder];
}
- (ResponseLoginBuilder*) toBuilder {
  return [ResponseLogin builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasUsername) {
    [output appendFormat:@"%@%@: %@\n", indent, @"username", self.username];
  }
  if (self.hasStatus) {
    [output appendFormat:@"%@%@: %@\n", indent, @"status", NSStringFromEnumsResponseLoginEnums(self.status)];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasUsername) {
    [dictionary setObject: self.username forKey: @"username"];
  }
  if (self.hasStatus) {
    [dictionary setObject: @(self.status) forKey: @"status"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[ResponseLogin class]]) {
    return NO;
  }
  ResponseLogin *otherMessage = other;
  return
      self.hasUsername == otherMessage.hasUsername &&
      (!self.hasUsername || [self.username isEqual:otherMessage.username]) &&
      self.hasStatus == otherMessage.hasStatus &&
      (!self.hasStatus || self.status == otherMessage.status) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasUsername) {
    hashCode = hashCode * 31 + [self.username hash];
  }
  if (self.hasStatus) {
    hashCode = hashCode * 31 + self.status;
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface ResponseLoginBuilder()
@property (strong) ResponseLogin* resultResponseLogin;
@end

@implementation ResponseLoginBuilder
@synthesize resultResponseLogin;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultResponseLogin = [[ResponseLogin alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultResponseLogin;
}
- (ResponseLoginBuilder*) clear {
  self.resultResponseLogin = [[ResponseLogin alloc] init];
  return self;
}
- (ResponseLoginBuilder*) clone {
  return [ResponseLogin builderWithPrototype:resultResponseLogin];
}
- (ResponseLogin*) defaultInstance {
  return [ResponseLogin defaultInstance];
}
- (ResponseLogin*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (ResponseLogin*) buildPartial {
  ResponseLogin* returnMe = resultResponseLogin;
  self.resultResponseLogin = nil;
  return returnMe;
}
- (ResponseLoginBuilder*) mergeFrom:(ResponseLogin*) other {
  if (other == [ResponseLogin defaultInstance]) {
    return self;
  }
  if (other.hasUsername) {
    [self setUsername:other.username];
  }
  if (other.hasStatus) {
    [self setStatus:other.status];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (ResponseLoginBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (ResponseLoginBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
        [self setUsername:[input readString]];
        break;
      }
      case 16: {
        EnumsResponseLoginEnums value = (EnumsResponseLoginEnums)[input readEnum];
        if (EnumsResponseLoginEnumsIsValidValue(value)) {
          [self setStatus:value];
        } else {
          [unknownFields mergeVarintField:2 value:value];
        }
        break;
      }
    }
  }
}
- (BOOL) hasUsername {
  return resultResponseLogin.hasUsername;
}
- (NSString*) username {
  return resultResponseLogin.username;
}
- (ResponseLoginBuilder*) setUsername:(NSString*) value {
  resultResponseLogin.hasUsername = YES;
  resultResponseLogin.username = value;
  return self;
}
- (ResponseLoginBuilder*) clearUsername {
  resultResponseLogin.hasUsername = NO;
  resultResponseLogin.username = @"";
  return self;
}
- (BOOL) hasStatus {
  return resultResponseLogin.hasStatus;
}
- (EnumsResponseLoginEnums) status {
  return resultResponseLogin.status;
}
- (ResponseLoginBuilder*) setStatus:(EnumsResponseLoginEnums) value {
  resultResponseLogin.hasStatus = YES;
  resultResponseLogin.status = value;
  return self;
}
- (ResponseLoginBuilder*) clearStatus {
  resultResponseLogin.hasStatus = NO;
  resultResponseLogin.status = EnumsResponseLoginEnumsSuccess;
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
