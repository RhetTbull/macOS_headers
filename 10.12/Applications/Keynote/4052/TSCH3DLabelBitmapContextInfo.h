//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface TSCH3DLabelBitmapContextInfo : NSObject <NSCopying>
{
    BOOL mIsPrinting;
    BOOL mIsPDF;
    BOOL mHasSuppressedBackgrounds;
}

+ (id)contextInfoWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3;
+ (id)context;
+ (void)setIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3 forScene:(id)arg4;
+ (id)contextInfoForScene:(id)arg1;
@property(readonly, nonatomic) BOOL isPDF; // @synthesize isPDF=mIsPDF;
@property(readonly, nonatomic) BOOL isPrinting; // @synthesize isPrinting=mIsPrinting;
@property(readonly, nonatomic) BOOL hasSuppressedBackgrounds; // @synthesize hasSuppressedBackgrounds=mHasSuppressedBackgrounds;
- (void)setTSDCGContextInfoForCGContext:(struct CGContext *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithIsPrinting:(BOOL)arg1 isPDF:(BOOL)arg2 hasSuppressedBackgrounds:(BOOL)arg3;

@end

