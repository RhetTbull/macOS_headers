//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@class TTView;

@interface TTViewAttributedString : NSAttributedString
{
    TTView *_view;
    unsigned long long _cachedLineIndex;
    unsigned long long _cachedLineGeneration;
    NSAttributedString *_cachedLineString;
}

+ (id)attributedStringWithView:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)string;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

