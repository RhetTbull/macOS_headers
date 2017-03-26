//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ICMAppTouchBarController.h"

#import "NSTouchBarDelegate-Protocol.h"

@class NSCustomTouchBarItem, NSString, NSTouchBar;

@interface ICMMainWindowTouchBarController : ICMAppTouchBarController <NSTouchBarDelegate>
{
    NSCustomTouchBarItem *_addNoteBarItem;
    NSCustomTouchBarItem *_deleteNoteBarItem;
    NSCustomTouchBarItem *_checklistBarItem;
    NSCustomTouchBarItem *_addFolderBarItem;
    NSTouchBar *_appTouchBar;
}

@property(retain, nonatomic) NSTouchBar *appTouchBar; // @synthesize appTouchBar=_appTouchBar;
@property(retain, nonatomic) NSCustomTouchBarItem *addFolderBarItem; // @synthesize addFolderBarItem=_addFolderBarItem;
@property(retain, nonatomic) NSCustomTouchBarItem *checklistBarItem; // @synthesize checklistBarItem=_checklistBarItem;
@property(retain, nonatomic) NSCustomTouchBarItem *deleteNoteBarItem; // @synthesize deleteNoteBarItem=_deleteNoteBarItem;
@property(retain, nonatomic) NSCustomTouchBarItem *addNoteBarItem; // @synthesize addNoteBarItem=_addNoteBarItem;
- (void).cxx_destruct;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)touchBar;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

