//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ScssElementView.h"

@class NSMutableArray, ScssCheckButton, ScssScrubber, ScssStaveView;

@interface ScssStaffView : ScssElementView
{
    ScssStaveView *m_staveView;
    int m_clefIndex3;
    NSMutableArray *m_voiceViews;
    ScssCheckButton *m_checkButton;
    ScssScrubber *m_lowSpaceScrubber;
    ScssScrubber *m_highSpaceScrubber;
    ScssScrubber *m_rastralScrubber;
    ScssScrubber *m_transposeScrubber;
}

+ (double)staffViewHeightForData:(id)arg1;
- (id)addNoteScrubberSubview:(struct CGRect)arg1 integerValue:(id)arg2 key:(id)arg3 voiceIndex:(int)arg4;
- (id)addColorSubview:(struct CGRect)arg1 itemInfoArray:(id)arg2 indexValue:(id)arg3 key:(id)arg4 voiceIndex:(BOOL)arg5;
- (id)addPopupSubview:(struct CGRect)arg1 itemInfoArray:(id)arg2 indexValue:(id)arg3 key:(id)arg4 voiceIndex:(BOOL)arg5;
- (id)addCheckboxSubview:(struct CGRect)arg1 integerValue:(id)arg2 key:(id)arg3;
- (id)addScrubberSubview:(struct CGRect)arg1 integerValue:(id)arg2 key:(id)arg3;
- (int)intValueForControlKey:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)updateNoteScrubberStates;
- (id)voiceViews;
- (BOOL)isAlternateColorForVoice:(id)arg1;
- (struct CGRect)voicesInsetRectForVoice:(id)arg1;
- (void)removeAllFromSuperview;
- (struct ScssDataProvider *)dataProv;
- (id)staveXPos;
- (void)drawRect:(struct CGRect)arg1;
- (id)nextElement;
- (id)prevElement;
- (int)elementIndexOf:(int *)arg1;
- (int)elemType;
- (id)staveView;
- (int)staffElemIdent;
- (int)numberOfVoiceViews;
- (int)indexOfVoiceView:(id)arg1;
- (void)updateWithStaffData:(id)arg1 trackedControl:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 staveView:(id)arg2 forData:(id)arg3;

@end

