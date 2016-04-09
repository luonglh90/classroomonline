// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ClassOnlineAction.pb.h"
// @@protoc_insertion_point(imports)

@implementation ClassOnlineActionRoot
static id<PBExtensionField> ClassOnlineAction_message = nil;
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [ClassOnlineActionRoot class]) {
    ClassOnlineAction_message =
      [PBConcreteExtensionField extensionWithType:PBExtensionTypeMessage
                                     extendedClass:[IpcMessage class]
                                       fieldNumber:303
                                      defaultValue:[ClassOnlineAction defaultInstance]
                               messageOrGroupClass:[ClassOnlineAction class]
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
  [registry addExtension:ClassOnlineAction_message];
}
@end

@interface ClassOnlineAction ()
@property (strong) NSString* targetusername;
@property (strong) NSString* sourceusername;
@property (strong) NSString* classid;
@property (strong) NSString* actiontype;
@end

@implementation ClassOnlineAction

- (BOOL) hasTargetusername {
  return !!hasTargetusername_;
}
- (void) setHasTargetusername:(BOOL) _value_ {
  hasTargetusername_ = !!_value_;
}
@synthesize targetusername;
- (BOOL) hasSourceusername {
  return !!hasSourceusername_;
}
- (void) setHasSourceusername:(BOOL) _value_ {
  hasSourceusername_ = !!_value_;
}
@synthesize sourceusername;
- (BOOL) hasClassid {
  return !!hasClassid_;
}
- (void) setHasClassid:(BOOL) _value_ {
  hasClassid_ = !!_value_;
}
@synthesize classid;
- (BOOL) hasActiontype {
  return !!hasActiontype_;
}
- (void) setHasActiontype:(BOOL) _value_ {
  hasActiontype_ = !!_value_;
}
@synthesize actiontype;
- (instancetype) init {
  if ((self = [super init])) {
    self.targetusername = @"";
    self.sourceusername = @"";
    self.classid = @"";
    self.actiontype = @"";
  }
  return self;
}
+ (id<PBExtensionField>) message {
  return ClassOnlineAction_message;
}
static ClassOnlineAction* defaultClassOnlineActionInstance = nil;
+ (void) initialize {
  if (self == [ClassOnlineAction class]) {
    defaultClassOnlineActionInstance = [[ClassOnlineAction alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultClassOnlineActionInstance;
}
- (instancetype) defaultInstance {
  return defaultClassOnlineActionInstance;
}
- (BOOL) isInitialized {
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasTargetusername) {
    [output writeString:1 value:self.targetusername];
  }
  if (self.hasClassid) {
    [output writeString:2 value:self.classid];
  }
  if (self.hasActiontype) {
    [output writeString:3 value:self.actiontype];
  }
  if (self.hasSourceusername) {
    [output writeString:4 value:self.sourceusername];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasTargetusername) {
    size_ += computeStringSize(1, self.targetusername);
  }
  if (self.hasClassid) {
    size_ += computeStringSize(2, self.classid);
  }
  if (self.hasActiontype) {
    size_ += computeStringSize(3, self.actiontype);
  }
  if (self.hasSourceusername) {
    size_ += computeStringSize(4, self.sourceusername);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (ClassOnlineAction*) parseFromData:(NSData*) data {
  return (ClassOnlineAction*)[[[ClassOnlineAction builder] mergeFromData:data] build];
}
+ (ClassOnlineAction*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassOnlineAction*)[[[ClassOnlineAction builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (ClassOnlineAction*) parseFromInputStream:(NSInputStream*) input {
  return (ClassOnlineAction*)[[[ClassOnlineAction builder] mergeFromInputStream:input] build];
}
+ (ClassOnlineAction*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassOnlineAction*)[[[ClassOnlineAction builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ClassOnlineAction*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (ClassOnlineAction*)[[[ClassOnlineAction builder] mergeFromCodedInputStream:input] build];
}
+ (ClassOnlineAction*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassOnlineAction*)[[[ClassOnlineAction builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ClassOnlineActionBuilder*) builder {
  return [[ClassOnlineActionBuilder alloc] init];
}
+ (ClassOnlineActionBuilder*) builderWithPrototype:(ClassOnlineAction*) prototype {
  return [[ClassOnlineAction builder] mergeFrom:prototype];
}
- (ClassOnlineActionBuilder*) builder {
  return [ClassOnlineAction builder];
}
- (ClassOnlineActionBuilder*) toBuilder {
  return [ClassOnlineAction builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasTargetusername) {
    [output appendFormat:@"%@%@: %@\n", indent, @"targetusername", self.targetusername];
  }
  if (self.hasClassid) {
    [output appendFormat:@"%@%@: %@\n", indent, @"classid", self.classid];
  }
  if (self.hasActiontype) {
    [output appendFormat:@"%@%@: %@\n", indent, @"actiontype", self.actiontype];
  }
  if (self.hasSourceusername) {
    [output appendFormat:@"%@%@: %@\n", indent, @"sourceusername", self.sourceusername];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasTargetusername) {
    [dictionary setObject: self.targetusername forKey: @"targetusername"];
  }
  if (self.hasClassid) {
    [dictionary setObject: self.classid forKey: @"classid"];
  }
  if (self.hasActiontype) {
    [dictionary setObject: self.actiontype forKey: @"actiontype"];
  }
  if (self.hasSourceusername) {
    [dictionary setObject: self.sourceusername forKey: @"sourceusername"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[ClassOnlineAction class]]) {
    return NO;
  }
  ClassOnlineAction *otherMessage = other;
  return
      self.hasTargetusername == otherMessage.hasTargetusername &&
      (!self.hasTargetusername || [self.targetusername isEqual:otherMessage.targetusername]) &&
      self.hasClassid == otherMessage.hasClassid &&
      (!self.hasClassid || [self.classid isEqual:otherMessage.classid]) &&
      self.hasActiontype == otherMessage.hasActiontype &&
      (!self.hasActiontype || [self.actiontype isEqual:otherMessage.actiontype]) &&
      self.hasSourceusername == otherMessage.hasSourceusername &&
      (!self.hasSourceusername || [self.sourceusername isEqual:otherMessage.sourceusername]) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasTargetusername) {
    hashCode = hashCode * 31 + [self.targetusername hash];
  }
  if (self.hasClassid) {
    hashCode = hashCode * 31 + [self.classid hash];
  }
  if (self.hasActiontype) {
    hashCode = hashCode * 31 + [self.actiontype hash];
  }
  if (self.hasSourceusername) {
    hashCode = hashCode * 31 + [self.sourceusername hash];
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

BOOL ClassOnlineActionActionTypeIsValidValue(ClassOnlineActionActionType value) {
  switch (value) {
    case ClassOnlineActionActionTypeOpenClass:
    case ClassOnlineActionActionTypeCloseClass:
    case ClassOnlineActionActionTypeRequestJoint:
    case ClassOnlineActionActionTypeAcceptJoint:
    case ClassOnlineActionActionTypeRequestDrawBoard:
    case ClassOnlineActionActionTypeAcceptDrawBoard:
      return YES;
    default:
      return NO;
  }
}
NSString *NSStringFromClassOnlineActionActionType(ClassOnlineActionActionType value) {
  switch (value) {
    case ClassOnlineActionActionTypeOpenClass:
      return @"ClassOnlineActionActionTypeOpenClass";
    case ClassOnlineActionActionTypeCloseClass:
      return @"ClassOnlineActionActionTypeCloseClass";
    case ClassOnlineActionActionTypeRequestJoint:
      return @"ClassOnlineActionActionTypeRequestJoint";
    case ClassOnlineActionActionTypeAcceptJoint:
      return @"ClassOnlineActionActionTypeAcceptJoint";
    case ClassOnlineActionActionTypeRequestDrawBoard:
      return @"ClassOnlineActionActionTypeRequestDrawBoard";
    case ClassOnlineActionActionTypeAcceptDrawBoard:
      return @"ClassOnlineActionActionTypeAcceptDrawBoard";
    default:
      return nil;
  }
}

@interface ClassOnlineActionBuilder()
@property (strong) ClassOnlineAction* resultClassOnlineAction;
@end

@implementation ClassOnlineActionBuilder
@synthesize resultClassOnlineAction;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultClassOnlineAction = [[ClassOnlineAction alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultClassOnlineAction;
}
- (ClassOnlineActionBuilder*) clear {
  self.resultClassOnlineAction = [[ClassOnlineAction alloc] init];
  return self;
}
- (ClassOnlineActionBuilder*) clone {
  return [ClassOnlineAction builderWithPrototype:resultClassOnlineAction];
}
- (ClassOnlineAction*) defaultInstance {
  return [ClassOnlineAction defaultInstance];
}
- (ClassOnlineAction*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (ClassOnlineAction*) buildPartial {
  ClassOnlineAction* returnMe = resultClassOnlineAction;
  self.resultClassOnlineAction = nil;
  return returnMe;
}
- (ClassOnlineActionBuilder*) mergeFrom:(ClassOnlineAction*) other {
  if (other == [ClassOnlineAction defaultInstance]) {
    return self;
  }
  if (other.hasTargetusername) {
    [self setTargetusername:other.targetusername];
  }
  if (other.hasSourceusername) {
    [self setSourceusername:other.sourceusername];
  }
  if (other.hasClassid) {
    [self setClassid:other.classid];
  }
  if (other.hasActiontype) {
    [self setActiontype:other.actiontype];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (ClassOnlineActionBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (ClassOnlineActionBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
        [self setTargetusername:[input readString]];
        break;
      }
      case 18: {
        [self setClassid:[input readString]];
        break;
      }
      case 26: {
        [self setActiontype:[input readString]];
        break;
      }
      case 34: {
        [self setSourceusername:[input readString]];
        break;
      }
    }
  }
}
- (BOOL) hasTargetusername {
  return resultClassOnlineAction.hasTargetusername;
}
- (NSString*) targetusername {
  return resultClassOnlineAction.targetusername;
}
- (ClassOnlineActionBuilder*) setTargetusername:(NSString*) value {
  resultClassOnlineAction.hasTargetusername = YES;
  resultClassOnlineAction.targetusername = value;
  return self;
}
- (ClassOnlineActionBuilder*) clearTargetusername {
  resultClassOnlineAction.hasTargetusername = NO;
  resultClassOnlineAction.targetusername = @"";
  return self;
}
- (BOOL) hasSourceusername {
  return resultClassOnlineAction.hasSourceusername;
}
- (NSString*) sourceusername {
  return resultClassOnlineAction.sourceusername;
}
- (ClassOnlineActionBuilder*) setSourceusername:(NSString*) value {
  resultClassOnlineAction.hasSourceusername = YES;
  resultClassOnlineAction.sourceusername = value;
  return self;
}
- (ClassOnlineActionBuilder*) clearSourceusername {
  resultClassOnlineAction.hasSourceusername = NO;
  resultClassOnlineAction.sourceusername = @"";
  return self;
}
- (BOOL) hasClassid {
  return resultClassOnlineAction.hasClassid;
}
- (NSString*) classid {
  return resultClassOnlineAction.classid;
}
- (ClassOnlineActionBuilder*) setClassid:(NSString*) value {
  resultClassOnlineAction.hasClassid = YES;
  resultClassOnlineAction.classid = value;
  return self;
}
- (ClassOnlineActionBuilder*) clearClassid {
  resultClassOnlineAction.hasClassid = NO;
  resultClassOnlineAction.classid = @"";
  return self;
}
- (BOOL) hasActiontype {
  return resultClassOnlineAction.hasActiontype;
}
- (NSString*) actiontype {
  return resultClassOnlineAction.actiontype;
}
- (ClassOnlineActionBuilder*) setActiontype:(NSString*) value {
  resultClassOnlineAction.hasActiontype = YES;
  resultClassOnlineAction.actiontype = value;
  return self;
}
- (ClassOnlineActionBuilder*) clearActiontype {
  resultClassOnlineAction.hasActiontype = NO;
  resultClassOnlineAction.actiontype = @"";
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
