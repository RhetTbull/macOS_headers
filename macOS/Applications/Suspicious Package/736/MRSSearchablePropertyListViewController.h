//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MRSModalViewController.h"

@class MRSPropertyListEditorViewController, NSAttributedString, NSSearchField, NSTextField, NSView;

@interface MRSSearchablePropertyListViewController : MRSModalViewController
{
    NSAttributedString *_title;
    MRSPropertyListEditorViewController *_propertyListEditorViewController;
    NSTextField *_titleField;
    NSView *_containerView;
    NSSearchField *_searchField;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSSearchField *searchField; // @synthesize searchField=_searchField;
@property(nonatomic) __weak NSView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak NSTextField *titleField; // @synthesize titleField=_titleField;
@property(readonly, nonatomic) MRSPropertyListEditorViewController *propertyListEditorViewController; // @synthesize propertyListEditorViewController=_propertyListEditorViewController;
- (void)performFind:(id)arg1;
- (void)viewDidAppear;
- (void)viewDidLoad;
- (id)initForPropertyListTree:(id)arg1 title:(id)arg2;

@end

