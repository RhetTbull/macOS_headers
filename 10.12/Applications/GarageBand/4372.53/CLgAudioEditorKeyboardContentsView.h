//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "LgSectionView-Protocol.h"
#import "MAPianoRollKeyboardDelegate-Protocol.h"

@class CLgView, NSMutableDictionary, NSString;
@protocol MAPianoRollKeyboard;

@interface CLgAudioEditorKeyboardContentsView : NSView <LgSectionView, MAPianoRollKeyboardDelegate>
{
    id <MAPianoRollKeyboard> pianoRollKeyboard;
    CLgView *parentView;
    NSMutableDictionary *m_tFontAttribs;
    int m_iEditorMode;
    BOOL m_bScaleEnable;
    BOOL m_bStereo;
    float m_fVertZoom;
    float m_fIndicatorPos;
    float m_fFs;
    float m_fMid;
    float m_fOffset;
    float m_fRangeHeight;
}

@property CLgView *parentView; // @synthesize parentView;
@property(retain, nonatomic) id <MAPianoRollKeyboard> pianoRollKeyboard; // @synthesize pianoRollKeyboard;
- (void)SetRangeHeight:(float)arg1;
- (void)SetOffset:(float)arg1;
- (void)SetFs:(float)arg1;
- (void)setIndicator:(struct CGPoint)arg1;
- (void)SetEditorMode:(int)arg1;
- (void)SetMidPoint:(float)arg1;
- (void)SetVerticalZoom:(float)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)setStereoMode;
- (void)EnableDrawing:(BOOL)arg1;
- (void)dealloc;
- (void)registerNotificationObservers;
- (void)viewVisibilityChange:(BOOL)arg1;
- (void)RemoveAllMessObservers;
- (void)handleUM_CHSEL:(id)arg1;
- (void)handleUM_ELASTICMODE:(id)arg1;
- (void)handleUM_GLOBALPARAM:(id)arg1;
- (void)hideOrShowKeyboard;
- (void)boundsDidChange:(id)arg1;
- (void)frameDidChange:(id)arg1;
- (void)endGestureForPianoRollKeyboard:(id)arg1;
- (void)beginGestureForPianoRollKeyboard:(id)arg1;
- (void)pianoRollKeyboard:(id)arg1 handleState:(long long)arg2 forNote:(unsigned long long)arg3;
- (id)pianoRollKeyboard:(id)arg1 iconsForNote:(unsigned long long)arg2;
- (id)pianoRollKeyboard:(id)arg1 labelForNote:(unsigned long long)arg2;
- (double)pianoRollKeyboard:(id)arg1 heightForNote:(unsigned long long)arg2;
- (long long)pianoRollKeyboardDisplayMode:(id)arg1;
- (double)pianoRollKeyboard:(id)arg1 positionForNote:(unsigned long long)arg2;
- (BOOL)pianoRollKeyboardIsDrumEditor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)hasPlayhead;
- (BOOL)isContents;
@property(readonly) int section;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

