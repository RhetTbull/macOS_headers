//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSButton, NSTextField;

@interface ACFileTableCellView : NSTableCellView
{
    NSButton *_checkboxButton;
    NSTextField *_pathTextField;
    NSTextField *_sizeTextField;
}

@property(nonatomic) __weak NSTextField *sizeTextField; // @synthesize sizeTextField=_sizeTextField;
@property(nonatomic) __weak NSTextField *pathTextField; // @synthesize pathTextField=_pathTextField;
@property(nonatomic) __weak NSButton *checkboxButton; // @synthesize checkboxButton=_checkboxButton;
- (void).cxx_destruct;
- (void)checkboxChanged:(id)arg1;

@end

