// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

#import "IpcMessage.pb.h"
#import "User.pb.h"
// @@protoc_insertion_point(imports)

@class IpcMessage;
@class IpcMessageBuilder;
@class Teacher;
@class TeacherBuilder;
@class User;
@class UserBuilder;



@interface TeacherRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define Teacher_userinfo @"userinfo"
#define Teacher_classid @"classid"
#define Teacher_rate @"rate"
@interface Teacher : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasRate_:1;
  BOOL hasUserinfo_:1;
  Float64 rate;
  User* userinfo;
  NSMutableArray * classidArray;
}
- (BOOL) hasUserinfo;
- (BOOL) hasRate;
@property (readonly, strong) User* userinfo;
@property (readonly, strong) NSArray * classid;
@property (readonly) Float64 rate;
- (NSString*)classidAtIndex:(NSUInteger)index;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

+ (id<PBExtensionField>) message;
- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (TeacherBuilder*) builder;
+ (TeacherBuilder*) builder;
+ (TeacherBuilder*) builderWithPrototype:(Teacher*) prototype;
- (TeacherBuilder*) toBuilder;

+ (Teacher*) parseFromData:(NSData*) data;
+ (Teacher*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Teacher*) parseFromInputStream:(NSInputStream*) input;
+ (Teacher*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Teacher*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Teacher*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface TeacherBuilder : PBGeneratedMessageBuilder {
@private
  Teacher* resultTeacher;
}

- (Teacher*) defaultInstance;

- (TeacherBuilder*) clear;
- (TeacherBuilder*) clone;

- (Teacher*) build;
- (Teacher*) buildPartial;

- (TeacherBuilder*) mergeFrom:(Teacher*) other;
- (TeacherBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (TeacherBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUserinfo;
- (User*) userinfo;
- (TeacherBuilder*) setUserinfo:(User*) value;
- (TeacherBuilder*) setUserinfoBuilder:(UserBuilder*) builderForValue;
- (TeacherBuilder*) mergeUserinfo:(User*) value;
- (TeacherBuilder*) clearUserinfo;

- (NSMutableArray *)classid;
- (NSString*)classidAtIndex:(NSUInteger)index;
- (TeacherBuilder *)addClassid:(NSString*)value;
- (TeacherBuilder *)setClassidArray:(NSArray *)array;
- (TeacherBuilder *)clearClassid;

- (BOOL) hasRate;
- (Float64) rate;
- (TeacherBuilder*) setRate:(Float64) value;
- (TeacherBuilder*) clearRate;
@end


// @@protoc_insertion_point(global_scope)
