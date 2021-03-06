//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

#import "ABBlendedTableCellView-Protocol.h"

@class NSLayoutConstraint, NSString;

@interface ABPersonListCellView : NSTableCellView <ABBlendedTableCellView>
{
    NSLayoutConstraint *_imageOffsetConstraint;
}

+ (id)imageForEntry:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSLayoutConstraint *imageOffsetConstraint; // @synthesize imageOffsetConstraint=_imageOffsetConstraint;
- (void)setTableEntry:(id)arg1;
- (BOOL)allowsVibrancy;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

