//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSTableViewDataSource-Protocol.h"
#import "NSTableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSScrollView, NSSegmentedControl, NSString, NSTableView;

__attribute__((visibility("hidden")))
@interface PrefEditorTableView : NSView <NSTableViewDataSource, NSTableViewDelegate>
{
    CDUnknownBlockType _onChange;
    NSScrollView *_scrollView;
    NSTableView *_tableView;
    NSMutableArray *_mutableObjects;
    NSSegmentedControl *_plusMinusRow;
}

@property(retain, nonatomic) NSSegmentedControl *plusMinusRow; // @synthesize plusMinusRow=_plusMinusRow;
@property(retain, nonatomic) NSMutableArray *mutableObjects; // @synthesize mutableObjects=_mutableObjects;
@property(retain, nonatomic) NSTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
- (void).cxx_destruct;
- (void)changed;
- (void)addOrRemoveClicked:(id)arg1;
- (void)layout;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
@property(retain, nonatomic) NSArray *objects;
- (id)initWithOptions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

