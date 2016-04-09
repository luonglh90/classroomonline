// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class TeacherOpenClass;
@class TeacherOpenClassBuilder;



@interface TeacherOpenClassRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define TeacherOpenClass_username @"username"
#define TeacherOpenClass_classid @"classid"
@interface TeacherOpenClass : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasUsername_:1;
  BOOL hasClassid_:1;
  NSString* username;
  NSString* classid;
}
- (BOOL) hasUsername;
- (BOOL) hasClassid;
@property (readonly, strong) NSString* username;
@property (readonly, strong) NSString* classid;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TeacherOpenClassBuilder*) builder;
+ (TeacherOpenClassBuilder*) builder;
+ (TeacherOpenClassBuilder*) builderWithPrototype:(TeacherOpenClass*) prototype;
- (TeacherOpenClassBuilder*) toBuilder;

+ (TeacherOpenClass*) parseFromData:(NSData*) data;
+ (TeacherOpenClass*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TeacherOpenClass*) parseFromInputStream:(NSInputStream*) input;
+ (TeacherOpenClass*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (TeacherOpenClass*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (TeacherOpenClass*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TeacherOpenClassBuilder : PBGeneratedMessageBuilder {
@private
  TeacherOpenClass* resultTeacherOpenClass;
}

- (TeacherOpenClass*) defaultInstance;

- (TeacherOpenClassBuilder*) clear;
- (TeacherOpenClassBuilder*) clone;

- (TeacherOpenClass*) build;
- (TeacherOpenClass*) buildPartial;

- (TeacherOpenClassBuilder*) mergeFrom:(TeacherOpenClass*) other;
- (TeacherOpenClassBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TeacherOpenClassBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUsername;
- (NSString*) username;
- (TeacherOpenClassBuilder*) setUsername:(NSString*) value;
- (TeacherOpenClassBuilder*) clearUsername;

- (BOOL) hasClassid;
- (NSString*) classid;
- (TeacherOpenClassBuilder*) setClassid:(NSString*) value;
- (TeacherOpenClassBuilder*) clearClassid;
@end


// @@protoc_insertion_point(global_scope)
