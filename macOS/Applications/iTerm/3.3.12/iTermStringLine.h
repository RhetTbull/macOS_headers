//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface iTermStringLine : NSObject
{
    unsigned short *_backingStore;
    int *_deltas;
    int _length;
    NSString *_stringValue;
}

+ (id)stringLineWithString:(id)arg1;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (struct _NSRange)rangeOfScreenCharsForRangeInString:(struct _NSRange)arg1;
- (void)dealloc;
- (id)initWithScreenChars:(struct screen_char_t *)arg1 length:(long long)arg2;

@end

