//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICAttachmentView.h"

#import "ICMZoomableAttachmentView-Protocol.h"

@class ICAttachmentBrickViewV2, ICMZoomController, NSString;

@interface ICBrickTextAttachmentView : ICAttachmentView <ICMZoomableAttachmentView>
{
    ICAttachmentBrickViewV2 *_brickView;
    ICMZoomController *_zoomController;
}

@property(retain, nonatomic) ICMZoomController *zoomController; // @synthesize zoomController=_zoomController;
@property(retain, nonatomic) ICAttachmentBrickViewV2 *brickView; // @synthesize brickView=_brickView;
- (void).cxx_destruct;
- (void)hostViewDidZoom:(id)arg1;
- (void)prepareForPrinting;
- (void)setHighlightPatternRegex:(id)arg1;
- (void)didChangeAttachmentTitle;
- (void)didChangeAttachment;
- (void)setupConstraints;
- (void)dealloc;
- (void)sharedInit:(BOOL)arg1;
- (void)cacheDisplayInRect:(struct CGRect)arg1 toBitmapImageRep:(id)arg2;
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1;
- (id)icaxTypeDescription;
- (id)accessibilityValueDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

