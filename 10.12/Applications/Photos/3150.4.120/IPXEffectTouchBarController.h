//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXEffectTileUpdateDelegate-Protocol.h"
#import "IPXTouchBarProvider-Protocol.h"

@class IPXEffectStackController, IPXEffectTileTouchBarContainerView, NSArray, NSString, NSTouchBarItem;
@protocol IPXEffectTouchBarControllerDelegate;

@interface IPXEffectTouchBarController : NSObject <IPXEffectTileUpdateDelegate, IPXTouchBarProvider>
{
    BOOL _hasValidEffect;
    id <IPXEffectTouchBarControllerDelegate> _delegate;
    IPXEffectStackController *_effectStackController;
    NSArray *_tileTouchBarControllers;
    IPXEffectTileTouchBarContainerView *_containerView;
    NSTouchBarItem *_containerRowItem;
}

@property BOOL hasValidEffect; // @synthesize hasValidEffect=_hasValidEffect;
@property(retain) NSTouchBarItem *containerRowItem; // @synthesize containerRowItem=_containerRowItem;
@property(retain) IPXEffectTileTouchBarContainerView *containerView; // @synthesize containerView=_containerView;
@property(retain) NSArray *tileTouchBarControllers; // @synthesize tileTouchBarControllers=_tileTouchBarControllers;
@property __weak IPXEffectStackController *effectStackController; // @synthesize effectStackController=_effectStackController;
@property __weak id <IPXEffectTouchBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetThumbnailForTileController:(id)arg1;
- (void)effectTileController:(id)arg1 thumbnailUpdated:(id)arg2 isFinal:(BOOL)arg3;
- (void)selectEffect:(id)arg1;
- (void)dumpView;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)touchBarIdentifiers;
- (id)initWithEffectStackController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

