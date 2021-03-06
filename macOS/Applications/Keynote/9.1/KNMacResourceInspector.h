//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"

@class KNDocumentRoot, KNMacResourceInspectorDocument, NSArray, NSArrayController, NSSearchField, NSSegmentedControl, NSString, NSTabView, NSTableView, NSWindow;

@interface KNMacResourceInspector : NSObject <NSTableViewDelegate, NSTableViewDataSource>
{
    NSArray *_media;
    NSArray *_animations;
    NSArray *_text;
    NSArray *_currentItemArray;
    NSWindow *_window;
    NSTabView *_tabView;
    NSTableView *_tableView;
    NSSegmentedControl *_typeSegmentedControl;
    NSSearchField *_searchField;
    NSArrayController *_mediaArrayController;
    NSArrayController *_animationsArrayController;
    NSArrayController *_textArrayController;
    KNDocumentRoot *_documentRoot;
    KNMacResourceInspectorDocument *_resourceInspectorDocument;
}

+ (id)sharedResourceInspector;
@property(retain, nonatomic) KNMacResourceInspectorDocument *resourceInspectorDocument; // @synthesize resourceInspectorDocument=_resourceInspectorDocument;
@property(retain, nonatomic) KNDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(retain, nonatomic) NSArrayController *textArrayController; // @synthesize textArrayController=_textArrayController;
@property(retain, nonatomic) NSArrayController *animationsArrayController; // @synthesize animationsArrayController=_animationsArrayController;
@property(retain, nonatomic) NSArrayController *mediaArrayController; // @synthesize mediaArrayController=_mediaArrayController;
@property(retain, nonatomic) NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(retain, nonatomic) NSSegmentedControl *typeSegmentedControl; // @synthesize typeSegmentedControl=_typeSegmentedControl;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) NSWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) NSArray *currentItemArray; // @synthesize currentItemArray=_currentItemArray;
@property(copy, nonatomic) NSArray *text; // @synthesize text=_text;
@property(copy, nonatomic) NSArray *animations; // @synthesize animations=_animations;
@property(copy, nonatomic) NSArray *media; // @synthesize media=_media;
- (void).cxx_destruct;
- (void)saveCSV:(id)arg1;
- (void)takeTypeSegmentedControlValueFrom:(id)arg1;
- (void)p_updateViewFromSegmentedControlIndex:(long long)arg1;
- (void)awakeFromNib;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

