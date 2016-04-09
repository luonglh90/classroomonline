// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

#import "IpcMessage.pb.h"
#import "Teacher.pb.h"
// @@protoc_insertion_point(imports)

@class ClassroomInfo;
@class ClassroomInfoBuilder;
@class IpcMessage;
@class IpcMessageBuilder;
@class Teacher;
@class TeacherBuilder;
@class User;
@class UserBuilder;



@interface ClassroomInfoRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

#define ClassroomInfo_u_id @"uId"
#define ClassroomInfo_cate_id @"cateId"
#define ClassroomInfo_name @"name"
#define ClassroomInfo_teacher @"teacher"
#define ClassroomInfo_description @"pb_description"
#define ClassroomInfo_imgurl @"imgurl"
@interface ClassroomInfo : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
  BOOL hasUId_:1;
  BOOL hasCateId_:1;
  BOOL hasName_:1;
  BOOL hasDescription_:1;
  BOOL hasImgurl_:1;
  BOOL hasTeacher_:1;
  SInt32 uId;
  SInt32 cateId;
  NSString* name;
  NSString* pb_description;
  NSString* imgurl;
  Teacher* teacher;
}
- (BOOL) hasUId;
- (BOOL) hasCateId;
- (BOOL) hasName;
- (BOOL) hasTeacher;
- (BOOL) hasDescription;
- (BOOL) hasImgurl;
@property (readonly) SInt32 uId;
@property (readonly) SInt32 cateId;
@property (readonly, strong) NSString* name;
@property (readonly, strong) Teacher* teacher;
@property (readonly, strong) NSString* pb_description;
@property (readonly, strong) NSString* imgurl;

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

+ (id<PBExtensionField>) message;
- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (ClassroomInfoBuilder*) builder;
+ (ClassroomInfoBuilder*) builder;
+ (ClassroomInfoBuilder*) builderWithPrototype:(ClassroomInfo*) prototype;
- (ClassroomInfoBuilder*) toBuilder;

+ (ClassroomInfo*) parseFromData:(NSData*) data;
+ (ClassroomInfo*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ClassroomInfo*) parseFromInputStream:(NSInputStream*) input;
+ (ClassroomInfo*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (ClassroomInfo*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (ClassroomInfo*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface ClassroomInfoBuilder : PBGeneratedMessageBuilder {
@private
  ClassroomInfo* resultClassroomInfo;
}

- (ClassroomInfo*) defaultInstance;

- (ClassroomInfoBuilder*) clear;
- (ClassroomInfoBuilder*) clone;

- (ClassroomInfo*) build;
- (ClassroomInfo*) buildPartial;

- (ClassroomInfoBuilder*) mergeFrom:(ClassroomInfo*) other;
- (ClassroomInfoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (ClassroomInfoBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;

- (BOOL) hasUId;
- (SInt32) uId;
- (ClassroomInfoBuilder*) setUId:(SInt32) value;
- (ClassroomInfoBuilder*) clearUId;

- (BOOL) hasCateId;
- (SInt32) cateId;
- (ClassroomInfoBuilder*) setCateId:(SInt32) value;
- (ClassroomInfoBuilder*) clearCateId;

- (BOOL) hasName;
- (NSString*) name;
- (ClassroomInfoBuilder*) setName:(NSString*) value;
- (ClassroomInfoBuilder*) clearName;

- (BOOL) hasTeacher;
- (Teacher*) teacher;
- (ClassroomInfoBuilder*) setTeacher:(Teacher*) value;
- (ClassroomInfoBuilder*) setTeacherBuilder:(TeacherBuilder*) builderForValue;
- (ClassroomInfoBuilder*) mergeTeacher:(Teacher*) value;
- (ClassroomInfoBuilder*) clearTeacher;

- (BOOL) hasDescription;
- (NSString*) pb_description;
- (ClassroomInfoBuilder*) setDescription:(NSString*) value;
- (ClassroomInfoBuilder*) clearDescription;

- (BOOL) hasImgurl;
- (NSString*) imgurl;
- (ClassroomInfoBuilder*) setImgurl:(NSString*) value;
- (ClassroomInfoBuilder*) clearImgurl;
@end


// @@protoc_insertion_point(global_scope)