// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

#import "IpcMessage.pb.h"
// @@protoc_insertion_point(imports)

@class ClassOnlineAction;
@class ClassOnlineActionBuilder;
@class IpcMessage;
@class IpcMessageBuilder;


typedef NS_ENUM(SInt32, ClassOnlineActionActionType) {
  ClassOnlineActionActionTypeOpenClass = 1,
  ClassOnlineActionActionTypeCloseClass = 2,
  ClassOnlineActionActionTypeRequestJoint = 3,
  ClassOnlineActionActionTypeAcceptJoint = 4,
  ClassOnlineActionActionTypeRequestDrawBoard = 5,
  ClassOnlineActionActionTypeAcceptDrawBoard = 6,
};

BOOL ClassOnlineActionActionTypeIsValidValue(ClassOnlineActionActionType value);
NSString *NSStringFromClassOnlineActionActionType(ClassOnlineActionActionType value);


@interface ClassOnlineActionRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define ClassOnlineAction_targetusername @"targetusername"
#define ClassOnlineAction_sourceusername @"sourceusername"
#define ClassOnlineAction_classid @"classid"
#define ClassOnlineAction_actiontype @"actiontype"
@interface ClassOnlineAction : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasTargetusername_:1;
  BOOL hasSourceusername_:1;
  BOOL hasClassid_:1;
  BOOL hasActiontype_:1;
  NSString* targetusername;
  NSString* sourceusername;
  NSString* classid;
  NSString* actiontype;
}
- (BOOL) hasTargetusername;
- (BOOL) hasSourceusername;
- (BOOL) hasClassid;
- (BOOL) hasActiontype;
@property (readonly, strong) NSString* targetusername;
@property (readonly, strong) NSString* sourceusername;
@property (readonly, strong) NSString* classid;
@property (readonly, strong) NSString* actiontype;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

+ (id<PBExtensionField>) message;
- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ClassOnlineActionBuilder*) builder;
+ (ClassOnlineActionBuilder*) builder;
+ (ClassOnlineActionBuilder*) builderWithPrototype:(ClassOnlineAction*) prototype;
- (ClassOnlineActionBuilder*) toBuilder;

+ (ClassOnlineAction*) parseFromData:(NSData*) data;
+ (ClassOnlineAction*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ClassOnlineAction*) parseFromInputStream:(NSInputStream*) input;
+ (ClassOnlineAction*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ClassOnlineAction*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ClassOnlineAction*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ClassOnlineActionBuilder : PBGeneratedMessageBuilder {
@private
  ClassOnlineAction* resultClassOnlineAction;
}

- (ClassOnlineAction*) defaultInstance;

- (ClassOnlineActionBuilder*) clear;
- (ClassOnlineActionBuilder*) clone;

- (ClassOnlineAction*) build;
- (ClassOnlineAction*) buildPartial;

- (ClassOnlineActionBuilder*) mergeFrom:(ClassOnlineAction*) other;
- (ClassOnlineActionBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ClassOnlineActionBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasTargetusername;
- (NSString*) targetusername;
- (ClassOnlineActionBuilder*) setTargetusername:(NSString*) value;
- (ClassOnlineActionBuilder*) clearTargetusername;

- (BOOL) hasSourceusername;
- (NSString*) sourceusername;
- (ClassOnlineActionBuilder*) setSourceusername:(NSString*) value;
- (ClassOnlineActionBuilder*) clearSourceusername;

- (BOOL) hasClassid;
- (NSString*) classid;
- (ClassOnlineActionBuilder*) setClassid:(NSString*) value;
- (ClassOnlineActionBuilder*) clearClassid;

- (BOOL) hasActiontype;
- (NSString*) actiontype;
- (ClassOnlineActionBuilder*) setActiontype:(NSString*) value;
- (ClassOnlineActionBuilder*) clearActiontype;
@end


// @@protoc_insertion_point(global_scope)