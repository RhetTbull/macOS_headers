//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptionRendererInternal, NSArray;

@interface AVCaptionRenderer : NSObject
{
    AVCaptionRendererInternal *_internal;
}

- (void)renderInContext:(struct CGContext *)arg1 atTime:(CDStruct_1b6d18a9)arg2;
- (void)teardownFigCDS;
- (BOOL)setupFigCDS;
- (int)buildFigCaptionArrayFromAVCaptionArrayAndSubmitToCDSSession;
- (id)captionSceneChangesInRange:(CDStruct_e83c9415)arg1;
- (id)description;
- (void)setDefaultStyles:(id)arg1;
- (id)defaultStyles;
- (BOOL)synchronizeWithCurrentAccessibilityPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) struct CGRect bounds;
@property(copy, nonatomic) NSArray *captions;
- (void)dealloc;
- (id)init;

@end

