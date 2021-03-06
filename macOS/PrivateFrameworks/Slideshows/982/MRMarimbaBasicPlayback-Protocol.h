//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class MPDocument, MRRenderer, NSSet;

@protocol MRMarimbaBasicPlayback
@property(nonatomic) BOOL enableSlideDidChangeNotification;
@property(readonly, nonatomic) MRRenderer *renderer;
@property(nonatomic) BOOL displaysFPS;
@property(nonatomic) BOOL stopWithVideo;
@property(nonatomic) double volume;
@property(readonly, nonatomic) BOOL isPlaying;
@property(readonly, nonatomic) double timeRemaining;
@property(nonatomic) double time;
@property(retain, nonatomic) MPDocument *document;
- (void)touchesCancelled:(NSSet *)arg1;
- (void)touchesEnded:(NSSet *)arg1;
- (void)touchesMoved:(NSSet *)arg1;
- (void)touchesBegan:(NSSet *)arg1;
- (void)warmupRenderer;
- (void)requestRendering:(BOOL)arg1;
- (struct CGImage *)snapshotAsCGImage;
- (struct CGImage *)snapshotAsCGImageForTime:(double)arg1 withSize:(struct CGSize)arg2;
- (void)prevFrame;
- (void)nextFrame;
- (void)gotoEnd;
- (void)gotoBeginning;
- (void)goForth;
- (void)goBack;
- (void)pauseWhenStill;
- (void)pause;
- (void)play;
- (void)togglePlayback;
@end

