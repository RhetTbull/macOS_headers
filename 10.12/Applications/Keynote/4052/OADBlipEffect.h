//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface OADBlipEffect : NSObject <NSCopying>
{
    int mType;
}

- (id)description;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)setStyleColor:(id)arg1;
- (int)type;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1;

@end

