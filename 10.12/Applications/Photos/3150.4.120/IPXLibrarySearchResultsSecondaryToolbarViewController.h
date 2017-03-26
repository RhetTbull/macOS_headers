//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXViewController.h"

@class NSString, NSTextField;
@protocol IPXLibrarySearchResultsSecondaryToolbarDelegate;

@interface IPXLibrarySearchResultsSecondaryToolbarViewController : IPXViewController
{
    NSString *_searchTitleString;
    NSString *_origSearchTitleString;
    NSTextField *_titleLabel;
    NSTextField *_countLabel;
    id <IPXLibrarySearchResultsSecondaryToolbarDelegate> _delegate;
}

@property __weak id <IPXLibrarySearchResultsSecondaryToolbarDelegate> delegate; // @synthesize delegate=_delegate;
@property __weak NSTextField *countLabel; // @synthesize countLabel=_countLabel;
@property __weak NSTextField *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)a_toggleFindMore:(id)arg1;
- (void)setSearchTitle:(id)arg1;
- (void)resetSearchTitle;
- (void)updateLabels;
- (void)viewDidLoad;
- (void)a_cancelSearch:(id)arg1;

@end

