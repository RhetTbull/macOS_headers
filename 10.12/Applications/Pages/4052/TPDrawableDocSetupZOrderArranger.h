//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDDrawableZOrderArranger.h"

@protocol TPMasterDrawableProvider;

@interface TPDrawableDocSetupZOrderArranger : TSDDrawableZOrderArranger
{
    id <TPMasterDrawableProvider> _masterDrawableProvider;
}

- (BOOL)isZOrderChangeRecord:(id)arg1;
- (void)unregisterTargetForChanges:(id)arg1;
- (void)registerTargetForChanges:(id)arg1;
- (BOOL)shouldShowWrapOptionsForSelectedDrawables;
- (BOOL)shouldShowZOrderOptionsForSelectedDrawables;
- (id)commandToSetZOrderOfInfos:(id)arg1 toIndexes:(id)arg2 coalesceable:(BOOL)arg3;
- (id)topLevelZOrderedSiblingsOfInfos:(id)arg1;
- (void)dealloc;
- (id)initWithCanvasEditor:(id)arg1 masterDrawableProvider:(id)arg2;

@end

