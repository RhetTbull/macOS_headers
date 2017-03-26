//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICExportable-Protocol.h"

@class GQDSStyle, NSString;

@interface GQDTRow : NSObject <ICExportable>
{
    float mFittingHeight;
    float mHeight;
    float mPreferredHeight;
    BOOL mManuallySized;
    unsigned char mHidingState;
    GQDSStyle *mRowCellStyle;
}

@property(retain, nonatomic) GQDSStyle *rowCellStyle; // @synthesize rowCellStyle=mRowCellStyle;
@property(nonatomic) unsigned char hidingState; // @synthesize hidingState=mHidingState;
@property(nonatomic) BOOL manuallySized; // @synthesize manuallySized=mManuallySized;
@property(nonatomic) float preferredHeight; // @synthesize preferredHeight=mPreferredHeight;
@property(nonatomic) float height; // @synthesize height=mHeight;
@property(nonatomic) float fittingHeight; // @synthesize fittingHeight=mFittingHeight;
- (void)dealloc;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

