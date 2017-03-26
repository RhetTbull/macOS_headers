//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

#import "IPXMetadataEditorViewController-Protocol.h"

@class IPXMetadataInfoViewController, NSArray, NSButton, NSString, NSView;

@interface IPXImageInfoDebugViewController : IPXViewController <IPXMetadataEditorViewController>
{
    NSArray *_selectedVersions;
    IPXMetadataInfoViewController *_contentController;
    NSButton *_deleteKeywordButton;
}

+ (id)newImageInfoDebugViewController;
@property(nonatomic) __weak NSButton *deleteKeywordButton; // @synthesize deleteKeywordButton=_deleteKeywordButton;
@property(nonatomic) __weak IPXMetadataInfoViewController *contentController; // @synthesize contentController=_contentController;
- (void).cxx_destruct;
- (void)a_deleteKeyword:(id)arg1;
- (void)a_addKeyword:(id)arg1;
- (void)a_setDescription:(id)arg1;
- (void)a_touchDate:(id)arg1;
- (void)a_setTitle:(id)arg1;
- (BOOL)metadataViewIsVisible;
- (void)selectedVersions:(id)arg1;
- (void)propertiesHaveChanged:(id)arg1 forSelectedVersions:(id)arg2;
- (id)propertiesForTable:(id)arg1;
- (id)tableClasses;
- (id)editorIdentifier;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSView *finalFirstResponder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSView *initialFirstResponder;
@property(readonly) Class superclass;

@end

