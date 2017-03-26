//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EPXSerializableStyleProperty-Protocol.h"

@class EPXBorder;

@interface EPXBoxModelStyle : NSObject <EPXSerializableStyleProperty>
{
    EPXBorder *mFullBorder;
    EPXBorder *mTopBorder;
    EPXBorder *mBottomBorder;
    EPXBorder *mLeftBorder;
    EPXBorder *mRightBorder;
}

- (void)serializeToDictionary:(id)arg1;
- (BOOL)isRightBorderOverridden;
- (id)rightBorder;
- (BOOL)isLeftBorderOverridden;
- (id)leftBorder;
- (BOOL)isBottomBorderOverridden;
- (id)bottomBorder;
- (BOOL)isTopBorderOverridden;
- (id)topBorder;
- (BOOL)isFullBorderOverridden;
- (id)fullBorder;
- (void)dealloc;

@end

