// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

#import "IpcMessage.pb.h"
// @@protoc_insertion_point(imports)

@class IpcMessage;
@class IpcMessageBuilder;
@class ResponseLogin;
@class ResponseLoginBuilder;



@interface ResponseLoginRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define ResponseLogin_username @"username"
#define ResponseLogin_status @"status"
@interface ResponseLogin : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasStatus_:1;
  BOOL hasUsername_:1;
  SInt32 status;
  NSString* username;
}
- (BOOL) hasUsername;
- (BOOL) hasStatus;
@property (readonly, strong) NSString* username;
@property (readonly) SInt32 status;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

+ (id<PBExtensionField>) message;
- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ResponseLoginBuilder*) builder;
+ (ResponseLoginBuilder*) builder;
+ (ResponseLoginBuilder*) builderWithPrototype:(ResponseLogin*) prototype;
- (ResponseLoginBuilder*) toBuilder;

+ (ResponseLogin*) parseFromData:(NSData*) data;
+ (ResponseLogin*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ResponseLogin*) parseFromInputStream:(NSInputStream*) input;
+ (ResponseLogin*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ResponseLogin*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ResponseLogin*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ResponseLoginBuilder : PBGeneratedMessageBuilder {
@private
  ResponseLogin* resultResponseLogin;
}

- (ResponseLogin*) defaultInstance;

- (ResponseLoginBuilder*) clear;
- (ResponseLoginBuilder*) clone;

- (ResponseLogin*) build;
- (ResponseLogin*) buildPartial;

- (ResponseLoginBuilder*) mergeFrom:(ResponseLogin*) other;
- (ResponseLoginBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ResponseLoginBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUsername;
- (NSString*) username;
- (ResponseLoginBuilder*) setUsername:(NSString*) value;
- (ResponseLoginBuilder*) clearUsername;

- (BOOL) hasStatus;
- (SInt32) status;
- (ResponseLoginBuilder*) setStatus:(SInt32) value;
- (ResponseLoginBuilder*) clearStatus;
@end


// @@protoc_insertion_point(global_scope)
