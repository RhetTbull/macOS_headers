//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ParsecUI/PRSFTEController.h>

#import "NSTextViewDelegate-Protocol.h"

@class NSString;

@interface SPFTEController : PRSFTEController <NSTextViewDelegate>
{
}

- (void)viewDidLoad;
- (id)textView:(id)arg1 willDisplayToolTip:(id)arg2 forCharacterAtIndex:(unsigned long long)arg3;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)adaptToDarkMode;
- (void)awakeFromNib;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

