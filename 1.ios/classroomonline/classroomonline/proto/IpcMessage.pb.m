// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "IpcMessage.pb.h"
// @@protoc_insertion_point(imports)

@implementation IpcMessageRoot
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [IpcMessageRoot class]) {
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    extensionRegistry = registry;
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
}
@end

@interface IpcMessage ()
@property SInt32 msgId;
@end

@implementation IpcMessage

- (BOOL) hasMsgId {
  return !!hasMsgId_;
}
- (void) setHasMsgId:(BOOL) _value_ {
  hasMsgId_ = !!_value_;
}
@synthesize msgId;
- (instancetype) init {
  if ((self = [super init])) {
    self.msgId = 0;
  }
  return self;
}
static IpcMessage* defaultIpcMessageInstance = nil;
+ (void) initialize {
  if (self == [IpcMessage class]) {
    defaultIpcMessageInstance = [[IpcMessage alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultIpcMessageInstance;
}
- (instancetype) defaultInstance {
  return defaultIpcMessageInstance;
}
- (BOOL) isInitialized {
  if (!self.hasMsgId) {
    return NO;
  }
  if (!self.extensionsAreInitialized) {
    return NO;
  }
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasMsgId) {
    [output writeInt32:1 value:self.msgId];
  }
  [self writeExtensionsToCodedOutputStream:output
                                      from:100
                                        to:10001];
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasMsgId) {
    size_ += computeInt32Size(1, self.msgId);
  }
  size_ += [self extensionsSerializedSize];
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (IpcMessage*) parseFromData:(NSData*) data {
  return (IpcMessage*)[[[IpcMessage builder] mergeFromData:data] build];
}
+ (IpcMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (IpcMessage*)[[[IpcMessage builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (IpcMessage*) parseFromInputStream:(NSInputStream*) input {
  return (IpcMessage*)[[[IpcMessage builder] mergeFromInputStream:input] build];
}
+ (IpcMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (IpcMessage*)[[[IpcMessage builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (IpcMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (IpcMessage*)[[[IpcMessage builder] mergeFromCodedInputStream:input] build];
}
+ (IpcMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (IpcMessage*)[[[IpcMessage builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (IpcMessageBuilder*) builder {
  return [[IpcMessageBuilder alloc] init];
}
+ (IpcMessageBuilder*) builderWithPrototype:(IpcMessage*) prototype {
  return [[IpcMessage builder] mergeFrom:prototype];
}
- (IpcMessageBuilder*) builder {
  return [IpcMessage builder];
}
- (IpcMessageBuilder*) toBuilder {
  return [IpcMessage builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasMsgId) {
    [output appendFormat:@"%@%@: %@\n", indent, @"msgId", [NSNumber numberWithInteger:self.msgId]];
  }
  [self writeExtensionDescriptionToMutableString:(NSMutableString*)output
                                            from:100
                                              to:10001
                                      withIndent:indent];
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasMsgId) {
    [dictionary setObject: [NSNumber numberWithInteger:self.msgId] forKey: @"msgId"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[IpcMessage class]]) {
    return NO;
  }
  IpcMessage *otherMessage = other;
  return
      self.hasMsgId == otherMessage.hasMsgId &&
      (!self.hasMsgId || self.msgId == otherMessage.msgId) &&
      [self isEqualExtensionsInOther:otherMessage from:100 to:10001] &&

      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasMsgId) {
    hashCode = hashCode * 31 + [[NSNumber numberWithInteger:self.msgId] hash];
  }
  hashCode = hashCode * 31 + [self hashExtensionsFrom:100 to:10001];
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface IpcMessageBuilder()
@property (strong) IpcMessage* resultIpcMessage;
@end

@implementation IpcMessageBuilder
@synthesize resultIpcMessage;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultIpcMessage = [[IpcMessage alloc] init];
  }
  return self;
}
- (PBExtendableMessage*) internalGetResult {
  return resultIpcMessage;
}
- (IpcMessageBuilder*) clear {
  self.resultIpcMessage = [[IpcMessage alloc] init];
  return self;
}
- (IpcMessageBuilder*) clone {
  return [IpcMessage builderWithPrototype:resultIpcMessage];
}
- (IpcMessage*) defaultInstance {
  return [IpcMessage defaultInstance];
}
- (IpcMessage*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (IpcMessage*) buildPartial {
  IpcMessage* returnMe = resultIpcMessage;
  self.resultIpcMessage = nil;
  return returnMe;
}
- (IpcMessageBuilder*) mergeFrom:(IpcMessage*) other {
  if (other == [IpcMessage defaultInstance]) {
    return self;
  }
  if (other.hasMsgId) {
    [self setMsgId:other.msgId];
  }
  [self mergeExtensionFields:other];
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (IpcMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (IpcMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
        [self setMsgId:[input readInt32]];
        break;
      }
    }
  }
}
- (BOOL) hasMsgId {
  return resultIpcMessage.hasMsgId;
}
- (SInt32) msgId {
  return resultIpcMessage.msgId;
}
- (IpcMessageBuilder*) setMsgId:(SInt32) value {
  resultIpcMessage.hasMsgId = YES;
  resultIpcMessage.msgId = value;
  return self;
}
- (IpcMessageBuilder*) clearMsgId {
  resultIpcMessage.hasMsgId = NO;
  resultIpcMessage.msgId = 0;
  return self;
}
@end


// @@protoc_insertion_point(global_scope)