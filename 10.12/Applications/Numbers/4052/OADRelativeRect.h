//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface OADRelativeRect : NSObject <NSCopying>
{
    float mLeft;
    float mTop;
    float mRight;
    float mBottom;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setBottom:(float)arg1;
- (float)bottom;
- (void)setRight:(float)arg1;
- (float)right;
- (void)setTop:(float)arg1;
- (float)top;
- (void)setLeft:(float)arg1;
- (float)left;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLeft:(float)arg1 top:(float)arg2 right:(float)arg3 bottom:(float)arg4;
- (id)init;

@end

