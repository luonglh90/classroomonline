// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class IpcMessage;
@class IpcMessageBuilder;



@interface IpcMessageRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define IpcMessage_msgId @"msgId"
@interface IpcMessage : PBExtendableMessage<GeneratedMessageProtocol> {
@private
  BOOL hasMsgId_:1;
  SInt32 msgId;
}
- (BOOL) hasMsgId;
@property (readonly) SInt32 msgId;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (IpcMessageBuilder*) builder;
+ (IpcMessageBuilder*) builder;
+ (IpcMessageBuilder*) builderWithPrototype:(IpcMessage*) prototype;
- (IpcMessageBuilder*) toBuilder;

+ (IpcMessage*) parseFromData:(NSData*) data;
+ (IpcMessage*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IpcMessage*) parseFromInputStream:(NSInputStream*) input;
+ (IpcMessage*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (IpcMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (IpcMessage*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface IpcMessageBuilder : PBExtendableMessageBuilder {
@private
  IpcMessage* resultIpcMessage;
}

- (IpcMessage*) defaultInstance;

- (IpcMessageBuilder*) clear;
- (IpcMessageBuilder*) clone;

- (IpcMessage*) build;
- (IpcMessage*) buildPartial;

- (IpcMessageBuilder*) mergeFrom:(IpcMessage*) other;
- (IpcMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (IpcMessageBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasMsgId;
- (SInt32) msgId;
- (IpcMessageBuilder*) setMsgId:(SInt32) value;
- (IpcMessageBuilder*) clearMsgId;
@end


// @@protoc_insertion_point(global_scope)