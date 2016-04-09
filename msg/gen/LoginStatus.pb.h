// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

#import "IpcMessage.pb.h"
// @@protoc_insertion_point(imports)

@class IpcMessage;
@class IpcMessageBuilder;
@class LoginStatus;
@class LoginStatusBuilder;



@interface LoginStatusRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define LoginStatus_name @"name"
#define LoginStatus_stt @"stt"
@interface LoginStatus : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasName_:1;
  BOOL hasStt_:1;
  NSString* name;
  NSString* stt;
}
- (BOOL) hasName;
- (BOOL) hasStt;
@property (readonly, strong) NSString* name;
@property (readonly, strong) NSString* stt;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

+ (id<PBExtensionField>) message;
- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (LoginStatusBuilder*) builder;
+ (LoginStatusBuilder*) builder;
+ (LoginStatusBuilder*) builderWithPrototype:(LoginStatus*) prototype;
- (LoginStatusBuilder*) toBuilder;

+ (LoginStatus*) parseFromData:(NSData*) data;
+ (LoginStatus*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (LoginStatus*) parseFromInputStream:(NSInputStream*) input;
+ (LoginStatus*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (LoginStatus*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (LoginStatus*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface LoginStatusBuilder : PBGeneratedMessageBuilder {
@private
  LoginStatus* resultLoginStatus;
}

- (LoginStatus*) defaultInstance;

- (LoginStatusBuilder*) clear;
- (LoginStatusBuilder*) clone;

- (LoginStatus*) build;
- (LoginStatus*) buildPartial;

- (LoginStatusBuilder*) mergeFrom:(LoginStatus*) other;
- (LoginStatusBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (LoginStatusBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasName;
- (NSString*) name;
- (LoginStatusBuilder*) setName:(NSString*) value;
- (LoginStatusBuilder*) clearName;

- (BOOL) hasStt;
- (NSString*) stt;
- (LoginStatusBuilder*) setStt:(NSString*) value;
- (LoginStatusBuilder*) clearStt;
@end


// @@protoc_insertion_point(global_scope)
