//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class GHGraphicalDiffstatView, GHWorkingDirectoryFileViewModel;

@interface GHChangedFileDiffstatCellView : NSTableCellView
{
    GHGraphicalDiffstatView *_diffstatView;
}

@property(nonatomic) __weak GHGraphicalDiffstatView *diffstatView; // @synthesize diffstatView=_diffstatView;
- (void).cxx_destruct;
- (void)awakeFromNib;

// Remaining properties
@property(retain) GHWorkingDirectoryFileViewModel *objectValue; // @dynamic objectValue;

@end

