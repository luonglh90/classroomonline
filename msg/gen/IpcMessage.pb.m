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
@property SInt64 id;
@property (strong) NSData* payloadData;
@end

@implementation IpcMessage

- (BOOL) hasId {
  return !!hasId_;
}
- (void) setHasId:(BOOL) _value_ {
  hasId_ = !!_value_;
}
@synthesize id;
- (BOOL) hasPayloadData {
  return !!hasPayloadData_;
}
- (void) setHasPayloadData:(BOOL) _value_ {
  hasPayloadData_ = !!_value_;
}
@synthesize payloadData;
- (instancetype) init {
  if ((self = [super init])) {
    self.id = 0L;
    self.payloadData = [NSData data];
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
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasId) {
    [output writeInt64:1 value:self.id];
  }
  if (self.hasPayloadData) {
    [output writeData:2 value:self.payloadData];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasId) {
    size_ += computeInt64Size(1, self.id);
  }
  if (self.hasPayloadData) {
    size_ += computeDataSize(2, self.payloadData);
  }
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
  if (self.hasId) {
    [output appendFormat:@"%@%@: %@\n", indent, @"id", [NSNumber numberWithLongLong:self.id]];
  }
  if (self.hasPayloadData) {
    [output appendFormat:@"%@%@: %@\n", indent, @"payloadData", self.payloadData];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasId) {
    [dictionary setObject: [NSNumber numberWithLongLong:self.id] forKey: @"id"];
  }
  if (self.hasPayloadData) {
    [dictionary setObject: self.payloadData forKey: @"payloadData"];
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
      self.hasId == otherMessage.hasId &&
      (!self.hasId || self.id == otherMessage.id) &&
      self.hasPayloadData == otherMessage.hasPayloadData &&
      (!self.hasPayloadData || [self.payloadData isEqual:otherMessage.payloadData]) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasId) {
    hashCode = hashCode * 31 + [[NSNumber numberWithLongLong:self.id] hash];
  }
  if (self.hasPayloadData) {
    hashCode = hashCode * 31 + [self.payloadData hash];
  }
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
- (PBGeneratedMessage*) internalGetResult {
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
  if (other.hasId) {
    [self setId:other.id];
  }
  if (other.hasPayloadData) {
    [self setPayloadData:other.payloadData];
  }
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
        [self setId:[input readInt64]];
        break;
      }
      case 18: {
        [self setPayloadData:[input readData]];
        break;
      }
    }
  }
}
- (BOOL) hasId {
  return resultIpcMessage.hasId;
}
- (SInt64) id {
  return resultIpcMessage.id;
}
- (IpcMessageBuilder*) setId:(SInt64) value {
  resultIpcMessage.hasId = YES;
  resultIpcMessage.id = value;
  return self;
}
- (IpcMessageBuilder*) clearId {
  resultIpcMessage.hasId = NO;
  resultIpcMessage.id = 0L;
  return self;
}
- (BOOL) hasPayloadData {
  return resultIpcMessage.hasPayloadData;
}
- (NSData*) payloadData {
  return resultIpcMessage.payloadData;
}
- (IpcMessageBuilder*) setPayloadData:(NSData*) value {
  resultIpcMessage.hasPayloadData = YES;
  resultIpcMessage.payloadData = value;
  return self;
}
- (IpcMessageBuilder*) clearPayloadData {
  resultIpcMessage.hasPayloadData = NO;
  resultIpcMessage.payloadData = [NSData data];
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
