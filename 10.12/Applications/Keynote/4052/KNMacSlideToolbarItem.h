//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAToolbarItem.h"

@class KNMacInsertSlidePopoverButton, NSObject;
@protocol KNMacInsertSlidePopoverButtonDelegate;

@interface KNMacSlideToolbarItem : TMAToolbarItem
{
    KNMacInsertSlidePopoverButton *mButton;
}

- (void)p_selectMasterFromMenuItem:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)menuFormRepresentation;
- (void)didReplaceDocumentRoot;
- (void)willReplaceDocumentRoot;
@property(readonly, nonatomic) long long type;
@property(nonatomic) NSObject<KNMacInsertSlidePopoverButtonDelegate> *delegate;
- (void)dealloc;
- (id)initWithItemIdentifier:(id)arg1 title:(id)arg2 image:(id)arg3 type:(long long)arg4;

@end

