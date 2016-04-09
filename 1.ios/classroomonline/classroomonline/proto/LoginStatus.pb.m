// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "LoginStatus.pb.h"
// @@protoc_insertion_point(imports)

@implementation LoginStatusRoot
static id<PBExtensionField> LoginStatus_message = nil;
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [LoginStatusRoot class]) {
    LoginStatus_message =
      [PBConcreteExtensionField extensionWithType:PBExtensionTypeMessage
                                     extendedClass:[IpcMessage class]
                                       fieldNumber:111
                                      defaultValue:[LoginStatus defaultInstance]
                               messageOrGroupClass:[LoginStatus class]
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
  [registry addExtension:LoginStatus_message];
}
@end

@interface LoginStatus ()
@property (strong) NSString* name;
@property SInt32 stt;
@end

@implementation LoginStatus

- (BOOL) hasName {
  return !!hasName_;
}
- (void) setHasName:(BOOL) _value_ {
  hasName_ = !!_value_;
}
@synthesize name;
- (BOOL) hasStt {
  return !!hasStt_;
}
- (void) setHasStt:(BOOL) _value_ {
  hasStt_ = !!_value_;
}
@synthesize stt;
- (instancetype) init {
  if ((self = [super init])) {
    self.name = @"";
    self.stt = 0;
  }
  return self;
}
+ (id<PBExtensionField>) message {
  return LoginStatus_message;
}
static LoginStatus* defaultLoginStatusInstance = nil;
+ (void) initialize {
  if (self == [LoginStatus class]) {
    defaultLoginStatusInstance = [[LoginStatus alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultLoginStatusInstance;
}
- (instancetype) defaultInstance {
  return defaultLoginStatusInstance;
}
- (BOOL) isInitialized {
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasName) {
    [output writeString:1 value:self.name];
  }
  if (self.hasStt) {
    [output writeInt32:2 value:self.stt];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasName) {
    size_ += computeStringSize(1, self.name);
  }
  if (self.hasStt) {
    size_ += computeInt32Size(2, self.stt);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (LoginStatus*) parseFromData:(NSData*) data {
  return (LoginStatus*)[[[LoginStatus builder] mergeFromData:data] build];
}
+ (LoginStatus*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (LoginStatus*)[[[LoginStatus builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (LoginStatus*) parseFromInputStream:(NSInputStream*) input {
  return (LoginStatus*)[[[LoginStatus builder] mergeFromInputStream:input] build];
}
+ (LoginStatus*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (LoginStatus*)[[[LoginStatus builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (LoginStatus*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (LoginStatus*)[[[LoginStatus builder] mergeFromCodedInputStream:input] build];
}
+ (LoginStatus*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (LoginStatus*)[[[LoginStatus builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (LoginStatusBuilder*) builder {
  return [[LoginStatusBuilder alloc] init];
}
+ (LoginStatusBuilder*) builderWithPrototype:(LoginStatus*) prototype {
  return [[LoginStatus builder] mergeFrom:prototype];
}
- (LoginStatusBuilder*) builder {
  return [LoginStatus builder];
}
- (LoginStatusBuilder*) toBuilder {
  return [LoginStatus builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasName) {
    [output appendFormat:@"%@%@: %@\n", indent, @"name", self.name];
  }
  if (self.hasStt) {
    [output appendFormat:@"%@%@: %@\n", indent, @"stt", [NSNumber numberWithInteger:self.stt]];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasName) {
    [dictionary setObject: self.name forKey: @"name"];
  }
  if (self.hasStt) {
    [dictionary setObject: [NSNumber numberWithInteger:self.stt] forKey: @"stt"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[LoginStatus class]]) {
    return NO;
  }
  LoginStatus *otherMessage = other;
  return
      self.hasName == otherMessage.hasName &&
      (!self.hasName || [self.name isEqual:otherMessage.name]) &&
      self.hasStt == otherMessage.hasStt &&
      (!self.hasStt || self.stt == otherMessage.stt) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasName) {
    hashCode = hashCode * 31 + [self.name hash];
  }
  if (self.hasStt) {
    hashCode = hashCode * 31 + [[NSNumber numberWithInteger:self.stt] hash];
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface LoginStatusBuilder()
@property (strong) LoginStatus* resultLoginStatus;
@end

@implementation LoginStatusBuilder
@synthesize resultLoginStatus;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultLoginStatus = [[LoginStatus alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultLoginStatus;
}
- (LoginStatusBuilder*) clear {
  self.resultLoginStatus = [[LoginStatus alloc] init];
  return self;
}
- (LoginStatusBuilder*) clone {
  return [LoginStatus builderWithPrototype:resultLoginStatus];
}
- (LoginStatus*) defaultInstance {
  return [LoginStatus defaultInstance];
}
- (LoginStatus*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (LoginStatus*) buildPartial {
  LoginStatus* returnMe = resultLoginStatus;
  self.resultLoginStatus = nil;
  return returnMe;
}
- (LoginStatusBuilder*) mergeFrom:(LoginStatus*) other {
  if (other == [LoginStatus defaultInstance]) {
    return self;
  }
  if (other.hasName) {
    [self setName:other.name];
  }
  if (other.hasStt) {
    [self setStt:other.stt];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (LoginStatusBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (LoginStatusBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
        [self setName:[input readString]];
        break;
      }
      case 16: {
        [self setStt:[input readInt32]];
        break;
      }
    }
  }
}
- (BOOL) hasName {
  return resultLoginStatus.hasName;
}
- (NSString*) name {
  return resultLoginStatus.name;
}
- (LoginStatusBuilder*) setName:(NSString*) value {
  resultLoginStatus.hasName = YES;
  resultLoginStatus.name = value;
  return self;
}
- (LoginStatusBuilder*) clearName {
  resultLoginStatus.hasName = NO;
  resultLoginStatus.name = @"";
  return self;
}
- (BOOL) hasStt {
  return resultLoginStatus.hasStt;
}
- (SInt32) stt {
  return resultLoginStatus.stt;
}
- (LoginStatusBuilder*) setStt:(SInt32) value {
  resultLoginStatus.hasStt = YES;
  resultLoginStatus.stt = value;
  return self;
}
- (LoginStatusBuilder*) clearStt {
  resultLoginStatus.hasStt = NO;
  resultLoginStatus.stt = 0;
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
