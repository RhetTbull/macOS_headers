//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSDrawables/TSDImager.h>

#import "TSDConnectedInfoReplacing-Protocol.h"

@class KNAbstractSlide, KNBodyPlaceholderInfo, KNTitlePlaceholderInfo, NSString, TSUImage;
@protocol TSDCanvasProxyDelegate;

@interface KNImager : TSDImager <TSDConnectedInfoReplacing>
{
    KNBodyPlaceholderInfo *_replacementBodyPlaceholder;
    KNTitlePlaceholderInfo *_replacementTitlePlaceholder;
    BOOL _forceOutputSizeToMatchThumbnailSize;
    BOOL _shouldTintWhiteImages;
    unsigned long long _slideNumber;
    KNAbstractSlide *_slide;
    double _drawableThumbnailContentInset;
    struct CGSize _drawableThumbnailSize;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL shouldTintWhiteImages; // @synthesize shouldTintWhiteImages=_shouldTintWhiteImages;
@property(nonatomic) BOOL forceOutputSizeToMatchThumbnailSize; // @synthesize forceOutputSizeToMatchThumbnailSize=_forceOutputSizeToMatchThumbnailSize;
@property(nonatomic) double drawableThumbnailContentInset; // @synthesize drawableThumbnailContentInset=_drawableThumbnailContentInset;
@property(nonatomic) struct CGSize drawableThumbnailSize; // @synthesize drawableThumbnailSize=_drawableThumbnailSize;
@property(retain, nonatomic) KNBodyPlaceholderInfo *replacementBodyPlaceholder; // @synthesize replacementBodyPlaceholder=_replacementBodyPlaceholder;
@property(retain, nonatomic) KNTitlePlaceholderInfo *replacementTitlePlaceholder; // @synthesize replacementTitlePlaceholder=_replacementTitlePlaceholder;
@property(nonatomic) __weak KNAbstractSlide *slide; // @synthesize slide=_slide;
@property(nonatomic) unsigned long long slideNumber; // @synthesize slideNumber=_slideNumber;
- (double)p_sizeMultiplierForDrawable:(id)arg1;
- (double)p_strokeWidthForScaleFactor:(double)arg1 drawable:(id)arg2;
- (id)p_strokeForShapeInfo:(id)arg1;
- (BOOL)p_requiresModifiedStrokeForDrawable:(id)arg1 atScaleFactor:(double)arg2;
- (void)p_prepareShapeInfoStroke:(id)arg1 atScaleFactor:(double)arg2 finalRect:(struct CGRect *)arg3;
- (void)p_prepareStyledInfoStyle:(id)arg1;
- (void)p_hideCaptionAndTitleFromDeepCopiedDrawable:(id)arg1;
@property(readonly, nonatomic) TSUImage *drawableThumbnailImage;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (BOOL)isInfoAKeynoteMasterObject:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <TSDCanvasProxyDelegate> canvasProxyDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

