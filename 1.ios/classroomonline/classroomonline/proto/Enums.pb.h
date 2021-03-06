// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import <ProtocolBuffers/ProtocolBuffers.h>

// @@protoc_insertion_point(imports)

@class Enums;
@class EnumsBuilder;


typedef NS_ENUM(SInt32, EnumsResponseLoginEnums) {
  EnumsResponseLoginEnumsSuccess = 0,
  EnumsResponseLoginEnumsFaildWrongPass = 1,
};

BOOL EnumsResponseLoginEnumsIsValidValue(EnumsResponseLoginEnums value);
NSString *NSStringFromEnumsResponseLoginEnums(EnumsResponseLoginEnums value);


@interface EnumsRoot : NSObject {
}
+ (PBExtensionRegistry*) extensionRegistry;
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry;
@end

@interface Enums : PBGeneratedMessage<GeneratedMessageProtocol> {
@private
}

+ (instancetype) defaultInstance;
- (instancetype) defaultInstance;

- (BOOL) isInitialized;
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output;
- (EnumsBuilder*) builder;
+ (EnumsBuilder*) builder;
+ (EnumsBuilder*) builderWithPrototype:(Enums*) prototype;
- (EnumsBuilder*) toBuilder;

+ (Enums*) parseFromData:(NSData*) data;
+ (Enums*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Enums*) parseFromInputStream:(NSInputStream*) input;
+ (Enums*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
+ (Enums*) parseFromCodedInputStream:(PBCodedInputStream*) input;
+ (Enums*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end

@interface EnumsBuilder : PBGeneratedMessageBuilder {
@private
  Enums* resultEnums;
}

- (Enums*) defaultInstance;

- (EnumsBuilder*) clear;
- (EnumsBuilder*) clone;

- (Enums*) build;
- (Enums*) buildPartial;

- (EnumsBuilder*) mergeFrom:(Enums*) other;
- (EnumsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input;
- (EnumsBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry;
@end


// @@protoc_insertion_point(global_scope)
