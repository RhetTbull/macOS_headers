//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CSSValue : NSObject
{
    NSString *string;
    struct _NSRange textStorageRange;
}

+ (id)valueWithString:(id)arg1 textStorageRange:(struct _NSRange)arg2;
+ (void)initialize;
- (struct _NSRange)textStorageRange;
- (id)stringValue;
- (void)setTextStorageRange:(struct _NSRange)arg1;
- (void)setStringValue:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithString:(id)arg1 textStorageRange:(struct _NSRange)arg2;

@end

