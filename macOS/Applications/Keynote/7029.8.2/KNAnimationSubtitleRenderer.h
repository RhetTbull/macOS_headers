//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KNAnimationSubtitleRenderer : NSObject
{
    struct coreTextSubtitleRendererStorage _storage;
}

- (void)drawSubtitles:(id)arg1 inContext:(struct CGContext *)arg2 frameRect:(struct CGRect)arg3;
- (int)subtitleRendererDrawSubtitleTextDirect:(struct CGContext *)arg1 text:(const struct __CFString *)arg2 frameRect:(struct CGRect)arg3 textAttributes:(const struct __CFDictionary *)arg4;
- (int)subtitleRendererLayout:(const struct __CFDictionary *)arg1 params:(struct SubtitleLayoutParameters)arg2 outSuggestLayout:(struct CGRect *)arg3 outUpdatedSubtitleSample:(const struct __CFDictionary **)arg4;
- (unsigned char)layoutOnce:(struct __CFArray *)arg1 contextForBounds:(struct SubtitleBoundsParameters *)arg2 boundary:(struct CGRect)arg3 characterScaleFactorForOverlap:(double)arg4;
- (unsigned char)decouple:(struct __CFArray *)arg1 boundary:(struct CGRect)arg2;
- (int)subtitleRendererGetBounds:(struct __CFAttributedString *)arg1 params:(struct SubtitleBoundsParameters)arg2 characterScaleFactorForOverlap:(double)arg3;
- (int)subtitleRendererDrawSubtitleText:(const struct __CFDictionary *)arg1 params:(struct SubtitleDrawParameters)arg2;
- (int)subtitleRendererDrawString:(struct __CFAttributedString *)arg1 rect:(struct CGRect)arg2 boundRect:(struct CGRect)arg3 ctx:(struct CGContext *)arg4;
- (int)subtitleRendererFindFit2:(struct __CFAttributedString *)arg1 fontSize:(double)arg2 textBoxSizeConstraint:(struct CGSize)arg3 outSuggestTextBoxSize:(struct CGSize *)arg4 outSuggestLineHeight:(double *)arg5;
- (int)subtitleRendererFindFit:(struct __CFAttributedString *)arg1 textBox:(struct CGRect)arg2 forceFitBoxSize:(unsigned char)arg3 outSuggestTextBox:(struct CGRect *)arg4;
- (struct CGRect)updateBackgroundWindow:(struct __CFAttributedString *)arg1 textBounds:(struct CGRect)arg2;
- (struct CGRect)updateForegroundTextBounds:(struct __CFAttributedString *)arg1 windowBounds:(struct CGRect)arg2;
- (int)subtitleRendererSetupText:(struct __CFAttributedString *)arg1 fontSize:(double)arg2 mode:(unsigned int)arg3;
- (int)subtitleRendererDrawText:(struct __CFAttributedString *)arg1 fontSize:(double)arg2 rect:(struct CGRect)arg3 ctx:(struct CGContext *)arg4 mode:(unsigned int)arg5;
- (int)setupShadow:(struct CGContext *)arg1 mode:(unsigned int)arg2 fontSize:(double)arg3 string:(struct __CFAttributedString *)arg4;
- (int)subtitleRendererDrawTextEnd:(struct CGContext *)arg1;
- (int)subtitleRendererDrawTextBegin:(struct __CFAttributedString *)arg1 rect:(struct CGRect)arg2 ctx:(struct CGContext *)arg3 fontSize:(double)arg4;
- (void)dealloc;
- (id)init;

@end

