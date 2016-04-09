// Generated by the protocol buffer compiler.  DO NOT EDIT!

#import "ClassroomInfoOfCategory.pb.h"
// @@protoc_insertion_point(imports)

@implementation ClassroomInfoOfCategoryRoot
static id<PBExtensionField> ClassroomInfoOfCategory_message = nil;
static PBExtensionRegistry* extensionRegistry = nil;
+ (PBExtensionRegistry*) extensionRegistry {
  return extensionRegistry;
}

+ (void) initialize {
  if (self == [ClassroomInfoOfCategoryRoot class]) {
    ClassroomInfoOfCategory_message =
      [PBConcreteExtensionField extensionWithType:PBExtensionTypeMessage
                                     extendedClass:[IpcMessage class]
                                       fieldNumber:207
                                      defaultValue:[ClassroomInfoOfCategory defaultInstance]
                               messageOrGroupClass:[ClassroomInfoOfCategory class]
                                        isRepeated:NO
                                          isPacked:NO
                            isMessageSetWireFormat:NO];
    PBMutableExtensionRegistry* registry = [PBMutableExtensionRegistry registry];
    [self registerAllExtensions:registry];
    [IpcMessageRoot registerAllExtensions:registry];
    [ClassroomInfoRoot registerAllExtensions:registry];
    extensionRegistry = registry;
  }
}
+ (void) registerAllExtensions:(PBMutableExtensionRegistry*) registry {
  [registry addExtension:ClassroomInfoOfCategory_message];
}
@end

@interface ClassroomInfoOfCategory ()
@property (strong) NSString* cateid;
@property (strong) NSMutableArray * listOfClassesArray;
@end

@implementation ClassroomInfoOfCategory

- (BOOL) hasCateid {
  return !!hasCateid_;
}
- (void) setHasCateid:(BOOL) _value_ {
  hasCateid_ = !!_value_;
}
@synthesize cateid;
@synthesize listOfClassesArray;
@dynamic listOfClasses;
- (instancetype) init {
  if ((self = [super init])) {
    self.cateid = @"";
  }
  return self;
}
+ (id<PBExtensionField>) message {
  return ClassroomInfoOfCategory_message;
}
static ClassroomInfoOfCategory* defaultClassroomInfoOfCategoryInstance = nil;
+ (void) initialize {
  if (self == [ClassroomInfoOfCategory class]) {
    defaultClassroomInfoOfCategoryInstance = [[ClassroomInfoOfCategory alloc] init];
  }
}
+ (instancetype) defaultInstance {
  return defaultClassroomInfoOfCategoryInstance;
}
- (instancetype) defaultInstance {
  return defaultClassroomInfoOfCategoryInstance;
}
- (NSArray *)listOfClasses {
  return listOfClassesArray;
}
- (ClassroomInfo*)listOfClassesAtIndex:(NSUInteger)index {
  return [listOfClassesArray objectAtIndex:index];
}
- (BOOL) isInitialized {
  if (!self.hasCateid) {
    return NO;
  }
  __block BOOL isInitlistOfClasses = YES;
   [self.listOfClasses enumerateObjectsUsingBlock:^(ClassroomInfo *element, NSUInteger idx, BOOL *stop) {
    if (!element.isInitialized) {
      isInitlistOfClasses = NO;
      *stop = YES;
    }
  }];
  if (!isInitlistOfClasses) return isInitlistOfClasses;
  return YES;
}
- (void) writeToCodedOutputStream:(PBCodedOutputStream*) output {
  if (self.hasCateid) {
    [output writeString:1 value:self.cateid];
  }
  [self.listOfClassesArray enumerateObjectsUsingBlock:^(ClassroomInfo *element, NSUInteger idx, BOOL *stop) {
    [output writeMessage:2 value:element];
  }];
  [self.unknownFields writeToCodedOutputStream:output];
}
- (SInt32) serializedSize {
  __block SInt32 size_ = memoizedSerializedSize;
  if (size_ != -1) {
    return size_;
  }

  size_ = 0;
  if (self.hasCateid) {
    size_ += computeStringSize(1, self.cateid);
  }
  [self.listOfClassesArray enumerateObjectsUsingBlock:^(ClassroomInfo *element, NSUInteger idx, BOOL *stop) {
    size_ += computeMessageSize(2, element);
  }];
  size_ += self.unknownFields.serializedSize;
  memoizedSerializedSize = size_;
  return size_;
}
+ (ClassroomInfoOfCategory*) parseFromData:(NSData*) data {
  return (ClassroomInfoOfCategory*)[[[ClassroomInfoOfCategory builder] mergeFromData:data] build];
}
+ (ClassroomInfoOfCategory*) parseFromData:(NSData*) data extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassroomInfoOfCategory*)[[[ClassroomInfoOfCategory builder] mergeFromData:data extensionRegistry:extensionRegistry] build];
}
+ (ClassroomInfoOfCategory*) parseFromInputStream:(NSInputStream*) input {
  return (ClassroomInfoOfCategory*)[[[ClassroomInfoOfCategory builder] mergeFromInputStream:input] build];
}
+ (ClassroomInfoOfCategory*) parseFromInputStream:(NSInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassroomInfoOfCategory*)[[[ClassroomInfoOfCategory builder] mergeFromInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ClassroomInfoOfCategory*) parseFromCodedInputStream:(PBCodedInputStream*) input {
  return (ClassroomInfoOfCategory*)[[[ClassroomInfoOfCategory builder] mergeFromCodedInputStream:input] build];
}
+ (ClassroomInfoOfCategory*) parseFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
  return (ClassroomInfoOfCategory*)[[[ClassroomInfoOfCategory builder] mergeFromCodedInputStream:input extensionRegistry:extensionRegistry] build];
}
+ (ClassroomInfoOfCategoryBuilder*) builder {
  return [[ClassroomInfoOfCategoryBuilder alloc] init];
}
+ (ClassroomInfoOfCategoryBuilder*) builderWithPrototype:(ClassroomInfoOfCategory*) prototype {
  return [[ClassroomInfoOfCategory builder] mergeFrom:prototype];
}
- (ClassroomInfoOfCategoryBuilder*) builder {
  return [ClassroomInfoOfCategory builder];
}
- (ClassroomInfoOfCategoryBuilder*) toBuilder {
  return [ClassroomInfoOfCategory builderWithPrototype:self];
}
- (void) writeDescriptionTo:(NSMutableString*) output withIndent:(NSString*) indent {
  if (self.hasCateid) {
    [output appendFormat:@"%@%@: %@\n", indent, @"cateid", self.cateid];
  }
  [self.listOfClassesArray enumerateObjectsUsingBlock:^(ClassroomInfo *element, NSUInteger idx, BOOL *stop) {
    [output appendFormat:@"%@%@ {\n", indent, @"listOfClasses"];
    [element writeDescriptionTo:output
                     withIndent:[NSString stringWithFormat:@"%@  ", indent]];
    [output appendFormat:@"%@}\n", indent];
  }];
  [self.unknownFields writeDescriptionTo:output withIndent:indent];
}
- (void) storeInDictionary:(NSMutableDictionary *)dictionary {
  if (self.hasCateid) {
    [dictionary setObject: self.cateid forKey: @"cateid"];
  }
  for (ClassroomInfo* element in self.listOfClassesArray) {
    NSMutableDictionary *elementDictionary = [NSMutableDictionary dictionary];
    [element storeInDictionary:elementDictionary];
    [dictionary setObject:[NSDictionary dictionaryWithDictionary:elementDictionary] forKey:@"listOfClasses"];
  }
  [self.unknownFields storeInDictionary:dictionary];
}
- (BOOL) isEqual:(id)other {
  if (other == self) {
    return YES;
  }
  if (![other isKindOfClass:[ClassroomInfoOfCategory class]]) {
    return NO;
  }
  ClassroomInfoOfCategory *otherMessage = other;
  return
      self.hasCateid == otherMessage.hasCateid &&
      (!self.hasCateid || [self.cateid isEqual:otherMessage.cateid]) &&
      [self.listOfClassesArray isEqualToArray:otherMessage.listOfClassesArray] &&
      (self.unknownFields == otherMessage.unknownFields || (self.unknownFields != nil && [self.unknownFields isEqual:otherMessage.unknownFields]));
}
- (NSUInteger) hash {
  __block NSUInteger hashCode = 7;
  if (self.hasCateid) {
    hashCode = hashCode * 31 + [self.cateid hash];
  }
  [self.listOfClassesArray enumerateObjectsUsingBlock:^(ClassroomInfo *element, NSUInteger idx, BOOL *stop) {
    hashCode = hashCode * 31 + [element hash];
  }];
  hashCode = hashCode * 31 + [self.unknownFields hash];
  return hashCode;
}
@end

@interface ClassroomInfoOfCategoryBuilder()
@property (strong) ClassroomInfoOfCategory* resultClassroomInfoOfCategory;
@end

@implementation ClassroomInfoOfCategoryBuilder
@synthesize resultClassroomInfoOfCategory;
- (instancetype) init {
  if ((self = [super init])) {
    self.resultClassroomInfoOfCategory = [[ClassroomInfoOfCategory alloc] init];
  }
  return self;
}
- (PBGeneratedMessage*) internalGetResult {
  return resultClassroomInfoOfCategory;
}
- (ClassroomInfoOfCategoryBuilder*) clear {
  self.resultClassroomInfoOfCategory = [[ClassroomInfoOfCategory alloc] init];
  return self;
}
- (ClassroomInfoOfCategoryBuilder*) clone {
  return [ClassroomInfoOfCategory builderWithPrototype:resultClassroomInfoOfCategory];
}
- (ClassroomInfoOfCategory*) defaultInstance {
  return [ClassroomInfoOfCategory defaultInstance];
}
- (ClassroomInfoOfCategory*) build {
  [self checkInitialized];
  return [self buildPartial];
}
- (ClassroomInfoOfCategory*) buildPartial {
  ClassroomInfoOfCategory* returnMe = resultClassroomInfoOfCategory;
  self.resultClassroomInfoOfCategory = nil;
  return returnMe;
}
- (ClassroomInfoOfCategoryBuilder*) mergeFrom:(ClassroomInfoOfCategory*) other {
  if (other == [ClassroomInfoOfCategory defaultInstance]) {
    return self;
  }
  if (other.hasCateid) {
    [self setCateid:other.cateid];
  }
  if (other.listOfClassesArray.count > 0) {
    if (resultClassroomInfoOfCategory.listOfClassesArray == nil) {
      resultClassroomInfoOfCategory.listOfClassesArray = [[NSMutableArray alloc] initWithArray:other.listOfClassesArray];
    } else {
      [resultClassroomInfoOfCategory.listOfClassesArray addObjectsFromArray:other.listOfClassesArray];
    }
  }
  [self mergeUnknownFields:other.unknownFields];
  return self;
}
- (ClassroomInfoOfCategoryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input {
  return [self mergeFromCodedInputStream:input extensionRegistry:[PBExtensionRegistry emptyRegistry]];
}
- (ClassroomInfoOfCategoryBuilder*) mergeFromCodedInputStream:(PBCodedInputStream*) input extensionRegistry:(PBExtensionRegistry*) extensionRegistry {
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
        [self setCateid:[input readString]];
        break;
      }
      case 18: {
        ClassroomInfoBuilder* subBuilder = [ClassroomInfo builder];
        [input readMessage:subBuilder extensionRegistry:extensionRegistry];
        [self addListOfClasses:[subBuilder buildPartial]];
        break;
      }
    }
  }
}
- (BOOL) hasCateid {
  return resultClassroomInfoOfCategory.hasCateid;
}
- (NSString*) cateid {
  return resultClassroomInfoOfCategory.cateid;
}
- (ClassroomInfoOfCategoryBuilder*) setCateid:(NSString*) value {
  resultClassroomInfoOfCategory.hasCateid = YES;
  resultClassroomInfoOfCategory.cateid = value;
  return self;
}
- (ClassroomInfoOfCategoryBuilder*) clearCateid {
  resultClassroomInfoOfCategory.hasCateid = NO;
  resultClassroomInfoOfCategory.cateid = @"";
  return self;
}
- (NSMutableArray *)listOfClasses {
  return resultClassroomInfoOfCategory.listOfClassesArray;
}
- (ClassroomInfo*)listOfClassesAtIndex:(NSUInteger)index {
  return [resultClassroomInfoOfCategory listOfClassesAtIndex:index];
}
- (ClassroomInfoOfCategoryBuilder *)addListOfClasses:(ClassroomInfo*)value {
  if (resultClassroomInfoOfCategory.listOfClassesArray == nil) {
    resultClassroomInfoOfCategory.listOfClassesArray = [[NSMutableArray alloc]init];
  }
  [resultClassroomInfoOfCategory.listOfClassesArray addObject:value];
  return self;
}
- (ClassroomInfoOfCategoryBuilder *)setListOfClassesArray:(NSArray *)array {
  resultClassroomInfoOfCategory.listOfClassesArray = [[NSMutableArray alloc]initWithArray:array];
  return self;
}
- (ClassroomInfoOfCategoryBuilder *)clearListOfClasses {
  resultClassroomInfoOfCategory.listOfClassesArray = nil;
  return self;
}
@end


// @@protoc_insertion_point(global_scope)
