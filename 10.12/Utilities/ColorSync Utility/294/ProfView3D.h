//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOpenGLView.h>

@interface ProfView3D : NSOpenGLView
{
    unsigned int _matchSpace;
    unsigned int _plotSpace;
    float _angElevation;
    float _angAzimith;
    float _distance;
    struct CGPoint _dragStart;
    unsigned int _numPoints;
    char *_rgbVals;
    union CSUColor *_matchVals;
    float *_ijkVals;
    unsigned int _numTilePoints;
    char *_rgbTileVals;
    union CSUColor *_matchTileVals;
    float *_ijkTileVals;
    unsigned int _numGroutPoints;
    union CSUColor *_matchGroutVals;
    float *_ijkGroutVals;
    unsigned int _holdSpace;
    unsigned int _numHoldPoints;
    union CSUColor *_matchHoldVals;
    float *_ijkHoldVals;
    unsigned char _showSpectrum;
}

- (id)menuForEvent:(id)arg1;
- (void)spectrumShowHide:(id)arg1;
- (void)compareClear:(id)arg1;
- (void)compareHold:(id)arg1;
- (void)changePlotSpace:(id)arg1;
- (void)drawAxis;
- (void)mouseDragged:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)resetCursorRects;
- (BOOL)inPopupRect:(id)arg1;
- (struct CGRect)popupRect;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawControl;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)adjustProjectionMatrix;
- (BOOL)setProfileGamut:(struct ColorSyncProfile *)arg1;
- (BOOL)setProfile:(struct ColorSyncProfile *)arg1 tagType:(unsigned int)arg2;
- (void)setPlotSpace:(unsigned int)arg1;
- (void)dealloc;
- (void)freeData;
- (void)freeHoldData;
- (void)awakeFromNib;

@end

