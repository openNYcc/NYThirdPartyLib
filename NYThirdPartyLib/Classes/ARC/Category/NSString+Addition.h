//
//  NSString+Extension.h
//  Tool
//
//  Created by Lin Feihong on 14-2-3.
//  Copyright (c) 2014年 BD91. All rights reserved.
//

typedef NSString * (^NSStringAppendBlock)(id format, ...);
typedef NSString * (^NSStringReplaceBlock)(NSString *string, NSString *string2);

typedef NSMutableString * (^NSMutableStringAppendBlock)(id format, ...);
typedef NSMutableString * (^NSMutableStringReplaceBlock)(NSString *string, NSString *string2);

@interface NSString (Addition)

@property (nonatomic, readonly) NSStringAppendBlock	APPEND;
@property (nonatomic, readonly) NSStringAppendBlock	LINE;
@property (nonatomic, readonly) NSStringReplaceBlock REPLACE;

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSDate *date;

@property (nonatomic, readonly) NSString *MD5;
@property (nonatomic, readonly) NSString *SHA1;

- (NSArray *)allURLs;

- (NSString *)urlByAppendingDict:(NSDictionary *)params;
- (NSString *)urlByAppendingDict:(NSDictionary *)params encoding:(BOOL)encoding;
- (NSString *)urlByAppendingArray:(NSArray *)params;
- (NSString *)urlByAppendingArray:(NSArray *)params encoding:(BOOL)encoding;
- (NSString *)urlByAppendingKeyValues:(id)first, ...;

+ (NSString *)queryStringFromDictionary:(NSDictionary *)dict;
+ (NSString *)queryStringFromDictionary:(NSDictionary *)dict encoding:(BOOL)encoding;;
+ (NSString *)queryStringFromArray:(NSArray *)array;
+ (NSString *)queryStringFromArray:(NSArray *)array encoding:(BOOL)encoding;;
+ (NSString *)queryStringFromKeyValues:(id)first, ...;

- (NSString *)URLEncoding;
- (NSString *)URLDecoding;

- (NSString *)trim;
- (NSString *)unwrap;
- (NSString *)repeat:(NSUInteger)count;
- (NSString *)normalize;

- (BOOL)match:(NSString *)expression;
- (BOOL)matchAnyOf:(NSArray *)array;

- (BOOL)empty;
- (BOOL)notEmpty;

- (BOOL)eq:(NSString *)other;
- (BOOL)equal:(NSString *)other;

- (BOOL)is:(NSString *)other;
- (BOOL)isNot:(NSString *)other;

- (BOOL)isValueOf:(NSArray *)array;
- (BOOL)isValueOf:(NSArray *)array caseInsens:(BOOL)caseInsens;

- (BOOL)isNormal;
- (BOOL)isTelephone;
- (BOOL)isUserName;
- (BOOL)isChineseUserName;
- (BOOL)isPassword;
- (BOOL)isEmail;
- (BOOL)isUrl;
- (BOOL)isIPAddress;

- (NSString *)substringFromIndex:(NSUInteger)from untilCharset:(NSCharacterSet *)charset;
- (NSString *)substringFromIndex:(NSUInteger)from untilCharset:(NSCharacterSet *)charset endOffset:(NSUInteger *)endOffset;

- (NSUInteger)countFromIndex:(NSUInteger)from inCharset:(NSCharacterSet *)charset;

#if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)
- (CGSize)sizeWithFont:(UIFont *)font byWidth:(CGFloat)width;
- (CGSize)sizeWithFont:(UIFont *)font byHeight:(CGFloat)height;
- (CGRect)boundingRectWithSize:(CGSize)size attributes:(NSDictionary *)attributes;
#endif

+ (NSString *)fromResource:(NSString *)resName;

@end

@interface NSMutableString (BDExtension)

@property (nonatomic, readonly) NSMutableStringAppendBlock APPEND;
@property (nonatomic, readonly) NSMutableStringAppendBlock LINE;
@property (nonatomic, readonly) NSMutableStringReplaceBlock	REPLACE;

@end
