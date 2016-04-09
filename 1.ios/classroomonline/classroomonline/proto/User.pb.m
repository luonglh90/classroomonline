// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "User.pb.h"
// @@protoc_insertion_point(imports)

@implementation UserRoot
static id<PBExtensionField> User_message = nil;
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [UserRoot class]) {
    User_message =
      [PBConcreteExtensionField extensionWithType:PBExtensionTypeMessage
                                     extendedClass:[IpcMessage class]
                                       fieldNumber:101
                                      defaultValue:[User defaultInstance]
                               messageOrGroupClass:[User class]
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
  [registry addExtension:User_message];
}
@end

@interface User ()
@property (strong) NSString* username;
@property (strong) NSString* email;
@property (strong) NSString* fullname;
@property SInt32 yearofborn;
@property (strong) NSString* imgurl;
@property (strong) NSString* password;
@end

@implementation User

- (BOOL) hasUsername {
  return !!hasUsername_;
}
- (void) setHasUsername:(BOOL) _value_ {
  hasUsername_ = !!_value_;
}
@synthesize username;
- (BOOL) hasEmail {
  return !!hasEmail_;
}
- (void) setHasEmail:(BOOL) _value_ {
  hasEmail_ = !!_value_;
}
@synthesize email;
- (BOOL) hasFullname {
  return !!hasFullname_;
}
- (void) setHasFullname:(BOOL) _value_ {
  hasFullname_ = !!_value_;
}
@synthesize fullname;
- (BOOL) hasYearofborn {
  return !!hasYearofborn_;
}
- (void) setHasYearofborn:(BOOL) _value_ {
  hasYearofborn_ = !!_value_;
}
@synthesize yearofborn;
- (BOOL) hasImgurl {
  return !!hasImgurl_;
}
- (void) setHasImgurl:(BOOL) _value_ {
  hasImgurl_ = !!_value_;
}
@synthesize imgurl;
- (BOOL) hasPassword {
  return !!hasPassword_;
}
- (void) setHasPassword:(BOOL) _value_ {
  hasPassword_ = !!_value_;
}
@synthesize password;
- (instancetype) init {
  if ((self = [super init])) {
    self.username = @"";
    self.email = @"";
    self.fullname = @"";
    self.yearofborn = 0;
    self.imgurl = @"";
    self.password = @"";
  }
  return self;
}
+ (id<PBExtensionField>) message {
  return User_message;
}
static User* defaultUserInstance = nil;
+ (void) initialize {
  if (self == [User class]) {
    defaultUserInstance = [[User alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultUserInstance;
}
- (instancetype) defaultInstance {
  return defaultUserInstance;
}
- (BOOL) isInitialized {
  if (!self.hasUsername) {
    return NO;
  }
  if (!self.hasEmail) {
    return NO;
  }
  if (!self.hasYearofborn) {
    return NO;
  }
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasUsername) {
    [output writeString:1 value:self.username];
  }
  if (self.hasEmail) {
    [output writeString:2 value:self.email];
  }
  if (self.hasFullname) {
    [output writeString:3 value:self.fullname];
  }
  if (self.hasYearofborn) {
    [output writeInt32:4 value:self.yearofborn];
  }
  if (self.hasImgurl) {
    [output writeString:5 value:self.imgurl];
  }
  if (self.hasPassword) {
    [output writeString:6 value:self.password];
  }
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasUsername) {
    size_ += computeStringSize(1, self.username);
  }
  if (self.hasEmail) {
    size_ += computeStringSize(2, self.email);
  }
  if (self.hasFullname) {
    size_ += computeStringSize(3, self.fullname);
  }
  if (self.hasYearofborn) {
    size_ += computeInt32Size(4, self.yearofborn);
  }
  if (self.hasImgurl) {
    size_ += computeStringSize(5, self.imgurl);
  }
  if (self.hasPassword) {
    size_ += computeStringSize(6, self.password);
  }
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (User*) parseFromData:(NSData*) data {
  return (User*)[[[User builder] mergeFromData:data] build];
}
+ (User*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (User*)[[[User builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (User*) parseFromInputStream:(NSInputStream*) input {
  return (User*)[[[User builder] mergeFromInputStream:input] build];
}
+ (User*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (User*)[[[User builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (User*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (User*)[[[User builder] mergeFromCodedInputStream:input] build];
}
+ (User*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (User*)[[[User builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (UserBuilder*) builder {
  return [[UserBuilder alloc] init];
}
+ (UserBuilder*) builderWithPrototype:(User*) prototype {
  return [[User builder] mergeFrom:prototype];
}
- (UserBuilder*) builder {
  return [User builder];
}
- (UserBuilder*) toBuilder {
  return [User builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasUsername) {
    [output appendFormat:@"%@%@: %@\n", indent, @"username", self.username];
  }
  if (self.hasEmail) {
    [output appendFormat:@"%@%@: %@\n", indent, @"email", self.email];
  }
  if (self.hasFullname) {
    [output appendFormat:@"%@%@: %@\n", indent, @"fullname", self.fullname];
  }
  if (self.hasYearofborn) {
    [output appendFormat:@"%@%@: %@\n", indent, @"yearofborn", [NSNumber numberWithInteger:self.yearofborn]];
  }
  if (self.hasImgurl) {
    [output appendFormat:@"%@%@: %@\n", indent, @"imgurl", self.imgurl];
  }
  if (self.hasPassword) {
    [output appendFormat:@"%@%@: %@\n", indent, @"password", self.password];
  }
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasUsername) {
    [dictionary setObject: self.username forKey: @"username"];
  }
  if (self.hasEmail) {
    [dictionary setObject: self.email forKey: @"email"];
  }
  if (self.hasFullname) {
    [dictionary setObject: self.fullname forKey: @"fullname"];
  }
  if (self.hasYearofborn) {
    [dictionary setObject: [NSNumber numberWithInteger:self.yearofborn] forKey: @"yearofborn"];
  }
  if (self.hasImgurl) {
    [dictionary setObject: self.imgurl forKey: @"imgurl"];
  }
  if (self.hasPassword) {
    [dictionary setObject: self.password forKey: @"password"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[User class]]) {
    return NO;
  }
  User *otherMessage = other;
  return
      self.hasUsername == otherMessage.hasUsername &&
      (!self.hasUsername || [self.username isEqual:otherMessage.username]) &&
      self.hasEmail == otherMessage.hasEmail &&
      (!self.hasEmail || [self.email isEqual:otherMessage.email]) &&
      self.hasFullname == otherMessage.hasFullname &&
      (!self.hasFullname || [self.fullname isEqual:otherMessage.fullname]) &&
      self.hasYearofborn == otherMessage.hasYearofborn &&
      (!self.hasYearofborn || self.yearofborn == otherMessage.yearofborn) &&
      self.hasImgurl == otherMessage.hasImgurl &&
      (!self.hasImgurl || [self.imgurl isEqual:otherMessage.imgurl]) &&
      self.hasPassword == otherMessage.hasPassword &&
      (!self.hasPassword || [self.password isEqual:otherMessage.password]) &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasUsername) {
    hashCode = hashCode * 31 + [self.username hash];
  }
  if (self.hasEmail) {
    hashCode = hashCode * 31 + [self.email hash];
  }
  if (self.hasFullname) {
    hashCode = hashCode * 31 + [self.fullname hash];
  }
  if (self.hasYearofborn) {
    hashCode = hashCode * 31 + [[NSNumber numberWithInteger:self.yearofborn] hash];
  }
  if (self.hasImgurl) {
    hashCode = hashCode * 31 + [self.imgurl hash];
  }
  if (self.hasPassword) {
    hashCode = hashCode * 31 + [self.password hash];
  }
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface UserBuilder()
@property (strong) User* resultUser;
@end

@implementation UserBuilder
@synthesize resultUser;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultUser = [[User alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultUser;
}
- (UserBuilder*) clear {
  self.resultUser = [[User alloc] init];
  return self;
}
- (UserBuilder*) clone {
  return [User builderWithPrototype:resultUser];
}
- (User*) defaultInstance {
  return [User defaultInstance];
}
- (User*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (User*) buildPartial {
  User* returnMe = resultUser;
  self.resultUser = nil;
  return returnMe;
}
- (UserBuilder*) mergeFrom:(User*) other {
  if (other == [User defaultInstance]) {
    return self;
  }
  if (other.hasUsername) {
    [self setUsername:other.username];
  }
  if (other.hasEmail) {
    [self setEmail:other.email];
  }
  if (other.hasFullname) {
    [self setFullname:other.fullname];
  }
  if (other.hasYearofborn) {
    [self setYearofborn:other.yearofborn];
  }
  if (other.hasImgurl) {
    [self setImgurl:other.imgurl];
  }
  if (other.hasPassword) {
    [self setPassword:other.password];
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (UserBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (UserBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
        [self setUsername:[input readString]];
        break;
      }
      case 18: {
        [self setEmail:[input readString]];
        break;
      }
      case 26: {
        [self setFullname:[input readString]];
        break;
      }
      case 32: {
        [self setYearofborn:[input readInt32]];
        break;
      }
      case 42: {
        [self setImgurl:[input readString]];
        break;
      }
      case 50: {
        [self setPassword:[input readString]];
        break;
      }
    }
  }
}
- (BOOL) hasUsername {
  return resultUser.hasUsername;
}
- (NSString*) username {
  return resultUser.username;
}
- (UserBuilder*) setUsername:(NSString*) value {
  resultUser.hasUsername = YES;
  resultUser.username = value;
  return self;
}
- (UserBuilder*) clearUsername {
  resultUser.hasUsername = NO;
  resultUser.username = @"";
  return self;
}
- (BOOL) hasEmail {
  return resultUser.hasEmail;
}
- (NSString*) email {
  return resultUser.email;
}
- (UserBuilder*) setEmail:(NSString*) value {
  resultUser.hasEmail = YES;
  resultUser.email = value;
  return self;
}
- (UserBuilder*) clearEmail {
  resultUser.hasEmail = NO;
  resultUser.email = @"";
  return self;
}
- (BOOL) hasFullname {
  return resultUser.hasFullname;
}
- (NSString*) fullname {
  return resultUser.fullname;
}
- (UserBuilder*) setFullname:(NSString*) value {
  resultUser.hasFullname = YES;
  resultUser.fullname = value;
  return self;
}
- (UserBuilder*) clearFullname {
  resultUser.hasFullname = NO;
  resultUser.fullname = @"";
  return self;
}
- (BOOL) hasYearofborn {
  return resultUser.hasYearofborn;
}
- (SInt32) yearofborn {
  return resultUser.yearofborn;
}
- (UserBuilder*) setYearofborn:(SInt32) value {
  resultUser.hasYearofborn = YES;
  resultUser.yearofborn = value;
  return self;
}
- (UserBuilder*) clearYearofborn {
  resultUser.hasYearofborn = NO;
  resultUser.yearofborn = 0;
  return self;
}
- (BOOL) hasImgurl {
  return resultUser.hasImgurl;
}
- (NSString*) imgurl {
  return resultUser.imgurl;
}
- (UserBuilder*) setImgurl:(NSString*) value {
  resultUser.hasImgurl = YES;
  resultUser.imgurl = value;
  return self;
}
- (UserBuilder*) clearImgurl {
  resultUser.hasImgurl = NO;
  resultUser.imgurl = @"";
  return self;
}
- (BOOL) hasPassword {
  return resultUser.hasPassword;
}
- (NSString*) password {
  return resultUser.password;
}
- (UserBuilder*) setPassword:(NSString*) value {
  resultUser.hasPassword = YES;
  resultUser.password = value;
  return self;
}
- (UserBuilder*) clearPassword {
  resultUser.hasPassword = NO;
  resultUser.password = @"";
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
