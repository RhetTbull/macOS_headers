//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GHAvatarImageView, GHCommitDetailViewModel, GHIntrinsicallySizedTextView, NSImageView, NSPopUpButton, NSTextView, RACSignal;

@interface GHCommitDetailCellView : NSTableCellView
{
    NSTextView *_commitSummaryView;
    GHAvatarImageView *_avatarImageView;
    GHIntrinsicallySizedTextView *_authorField;
    NSImageView *_SHAIconView;
    GHIntrinsicallySizedTextView *_SHAField;
    NSImageView *_relativeTimeIconView;
    GHIntrinsicallySizedTextView *_relativeTimeField;
    NSPopUpButton *_actionButton;
    RACSignal *_rcl_intrinsicHeightSignal;
}

+ (id)metadataAttributes;
+ (id)attributedStringWithAttributedString:(id)arg1 attributes:(id)arg2;
@property(readonly, nonatomic) RACSignal *rcl_intrinsicHeightSignal; // @synthesize rcl_intrinsicHeightSignal=_rcl_intrinsicHeightSignal;
@property(nonatomic) __weak NSPopUpButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) GHIntrinsicallySizedTextView *relativeTimeField; // @synthesize relativeTimeField=_relativeTimeField;
@property(nonatomic) __weak NSImageView *relativeTimeIconView; // @synthesize relativeTimeIconView=_relativeTimeIconView;
@property(nonatomic) GHIntrinsicallySizedTextView *SHAField; // @synthesize SHAField=_SHAField;
@property(nonatomic) __weak NSImageView *SHAIconView; // @synthesize SHAIconView=_SHAIconView;
@property(nonatomic) GHIntrinsicallySizedTextView *authorField; // @synthesize authorField=_authorField;
@property(nonatomic) __weak GHAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) NSTextView *commitSummaryView; // @synthesize commitSummaryView=_commitSummaryView;
- (void).cxx_destruct;
- (BOOL)validateMenuItem:(id)arg1;
- (void)revertCommit:(id)arg1;
- (void)viewAuthorOnServer:(id)arg1;
- (void)viewOnServer:(id)arg1;
- (void)copySHA:(id)arg1;
- (void)wrapNotificationsAroundSignal:(id)arg1 withMessage:(id)arg2;
- (void)awakeFromNib;
- (id)linkWithTitle:(id)arg1 URL:(id)arg2;

// Remaining properties
@property(retain) GHCommitDetailViewModel *objectValue; // @dynamic objectValue;

@end

