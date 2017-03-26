//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class TSUColor;

@interface WDShading : NSObject <NSCopying>
{
    int mStyle;
    TSUColor *mForegroundColor;
    TSUColor *mBackgroundColor;
}

+ (id)autoBackgroundColor;
+ (id)autoForegroundColor;
+ (id)nilShading;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setBackground:(id)arg1;
- (id)background;
- (void)setForeground:(id)arg1;
- (id)foreground;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)setShading:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToShading:(id)arg1;
- (void)dealloc;
- (id)init;

@end

