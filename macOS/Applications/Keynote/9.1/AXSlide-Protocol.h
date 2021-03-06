//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AXAbstractSlide.h"

@class NSAttributedString;

@protocol AXSlide <AXAbstractSlide>
- (id <AXBuildEvent>)axNewBuildEvent;
- (id <AXBuildEvent>)axGetBuildEvent:(int)arg1;
- (int)axGetBuildEventCount;
- (void)axSetMasterContentIndex:(int)arg1;
- (int)axGetMasterContentIndex;
- (void)axSetDoesAutoBuild:(BOOL)arg1;
- (BOOL)axGetDoesAutoBuild;
- (void)axSetSpeakersNotes:(NSAttributedString *)arg1;
- (NSAttributedString *)axGetSpeakersNotes;
- (void)axClearBackgroundFillStyle;
- (id <AXFillStyle>)axCreateBackgroundFillStyle;
- (id <AXBulletPoint>)axNewBulletPointWithLevel:(int)arg1 atIndex:(int)arg2;
- (id <AXBulletPoint>)axNewBulletPointWithLevel:(int)arg1;
- (id <AXBulletPoint>)axGetBulletPoint:(int)arg1;
- (int)axGetBulletPointCount;
- (void)axSetMaster:(id <AXMasterSlide>)arg1;
- (id <AXMasterSlide>)axGetMaster;
- (void)axSetDepth:(unsigned int)arg1;
- (unsigned int)axGetDepth;
- (void)axSetIsCollapsed:(BOOL)arg1;
- (BOOL)axGetIsCollapsed;
- (void)axSetIsHidden:(BOOL)arg1;
- (BOOL)axGetIsHidden;
@end

