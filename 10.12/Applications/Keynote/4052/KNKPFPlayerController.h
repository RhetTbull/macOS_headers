//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KNAnimatedPlaybackRenderingController-Protocol.h"

@class KNKPFDocument, KNKPFPlayerSession, NSString;
@protocol KNKPFPlayerControllerDelegate;

@interface KNKPFPlayerController : NSObject <KNAnimatedPlaybackRenderingController>
{
    KNKPFPlayerSession *_session;
    BOOL _isTriggerQueued;
    BOOL _nextEventIsLastAndMoviePlaying;
    BOOL _isAutoplaying;
    double _autoplayTransitionDelay;
    double _autoplayBuildDelay;
    NSString *_hyperlinkedSlideIdentifier;
    BOOL _playing;
    BOOL _allowsShowToEndInternally;
    BOOL _playsAutomaticEvents;
    BOOL _shouldLoopAtEnd;
    BOOL _allowsInternalHyperlinks;
    id <KNKPFPlayerControllerDelegate> _delegate;
    CDUnknownBlockType _endShowHandler;
}

@property(nonatomic) BOOL allowsInternalHyperlinks; // @synthesize allowsInternalHyperlinks=_allowsInternalHyperlinks;
@property(nonatomic) BOOL shouldLoopAtEnd; // @synthesize shouldLoopAtEnd=_shouldLoopAtEnd;
@property(nonatomic) BOOL playsAutomaticEvents; // @synthesize playsAutomaticEvents=_playsAutomaticEvents;
@property(nonatomic) BOOL allowsShowToEndInternally; // @synthesize allowsShowToEndInternally=_allowsShowToEndInternally;
@property(copy, nonatomic) CDUnknownBlockType endShowHandler; // @synthesize endShowHandler=_endShowHandler;
@property(readonly, nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) id <KNKPFPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGColorSpace *playbackColorSpace;
- (void)resizePlaybackToFitBaseLayerAndPlayAutomaticEvents:(BOOL)arg1;
@property(readonly, nonatomic) struct CGSize naturalPlaybackSize;
- (BOOL)p_isAnimatingIncludingMovies:(BOOL)arg1;
@property(readonly, nonatomic, getter=isNonMovieAnimationActive) BOOL nonMovieAnimationActive;
@property(readonly, nonatomic, getter=isNonMovieAnimationAnimating) BOOL nonMovieAnimationAnimating;
@property(readonly, nonatomic, getter=isAnimating) BOOL animating;
- (void)p_animationEnded;
- (void)p_gotoNextEvent;
- (void)p_triggerEvent;
- (void)resumeMediaPlayback;
- (void)pauseMediaPlayback;
- (void)p_hyperlinkAnimationEnded:(id)arg1;
- (BOOL)processHyperlinkURL:(id)arg1;
- (id)hyperlinkURLAtPoint:(struct CGPoint)arg1;
- (void)p_resetToFirstSlideAndShouldAutoPlay:(BOOL)arg1;
- (void)gotoHyperlinkedSlideIdentifier:(id)arg1 shouldAnimate:(BOOL)arg2;
- (void)gotoSlideIdentifier:(id)arg1 eventIndex:(unsigned long long)arg2;
- (void)gotoLastVisitedSlide;
- (void)gotoLastSlide;
- (void)gotoFirstSlide;
- (void)gotoPreviousSlide;
- (void)gotoNextSlide;
- (void)p_loadingDidFailWithError:(id)arg1;
- (void)p_renderCurrentEvent;
- (void)p_renderCurrentSlideAtEventIndex:(unsigned long long)arg1 shouldAutoPlay:(BOOL)arg2;
- (void)p_renderLoadedCurrentSlideAtEventIndex:(unsigned long long)arg1 shouldAutoPlay:(BOOL)arg2;
- (void)p_gotoSlideAtIndex:(unsigned long long)arg1 eventIndex:(unsigned long long)arg2 shouldAutoPlay:(BOOL)arg3;
- (void)p_gotoSlideAtIndex:(unsigned long long)arg1 shouldAutoPlay:(BOOL)arg2;
- (void)gotoPreviousEvent;
- (void)gotoNextEvent;
@property(readonly, nonatomic) unsigned long long visibleEventIndex;
@property(readonly, nonatomic) NSString *visibleSlideIdentifier;
@property(readonly, nonatomic) unsigned long long currentEventIndex;
@property(readonly, nonatomic) NSString *currentSlideIdentifier;
- (BOOL)isTransitioningToStop;
- (void)tearDownShow;
- (void)endShow;
- (void)playPreparedShow;
- (void)renderCurrentEvent;
- (double)p_defaultViewScaleForShowLayer:(id)arg1;
- (void)prepareOnLayer:(id)arg1;
@property(readonly, nonatomic) KNKPFDocument *document;
- (void)dealloc;
- (id)initWithKPFDocument:(id)arg1 package:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

