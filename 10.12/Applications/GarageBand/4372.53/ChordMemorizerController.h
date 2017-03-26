//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallDocumentDialogController.h"

#import "LGKeyboardViewDelegate-Protocol.h"
#import "MAIdleCallback-Protocol.h"

@class LGKeyboardView, MAKitView, NSButton;

@interface ChordMemorizerController : SmallDocumentDialogController <MAIdleCallback, LGKeyboardViewDelegate>
{
    MAKitView *noteView;
    MAKitView *resultsInView;
    NSButton *listen;
    struct GCHORDINST *pInst;
    LGKeyboardView *kvNote;
    LGKeyboardView *kvResults;
    struct CEv *tail;
}

+ (id)showWithInst:(struct GCHORDINST *)arg1;
+ (id)nibName;
- (void)key:(int)arg1 of:(id)arg2 didChangeStateTo:(BOOL)arg3;
- (void)idleCallback;
- (void)click_OK:(id)arg1;
- (void)click_Cancel:(id)arg1;
- (void)change_listen:(id)arg1;
- (void)startChordListen;
- (BOOL)clickChordStore;
- (void)updateResults;
- (void)updateUI;
- (void)windowWillClose:(id)arg1;
- (void)willBecomeVisible;
- (void)awakeFromNib;
- (int)parentViewClass;

@end

