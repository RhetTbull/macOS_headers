//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDEditorProxy.h"

@class NSMapTable, NSOrderedSet;

@interface KNMasterSlideListEditorProxy : TSDEditorProxy
{
    NSMapTable *mSlideNodeProxyForSlideNode;
    NSOrderedSet *mSelectedSlideNodes;
    id mSlideNodeToEdit;
}

- (void)p_editorControllerSelectionDidChange:(id)arg1;
- (id)p_newSlideNodeProxiesForSlideNodes:(id)arg1;
- (id)p_slideNodeProxyForSlideNode:(id)arg1;
- (id)slideNodeToEdit;
- (id)selectedSlideNodes;
- (void)teardown;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 documentRoot:(id)arg2;

@end

