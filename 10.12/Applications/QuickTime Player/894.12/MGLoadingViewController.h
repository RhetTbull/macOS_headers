//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MGDocumentViewController.h"

#import "MGVisualContentContainer-Protocol.h"

@class NSString;

@interface MGLoadingViewController : MGDocumentViewController <MGVisualContentContainer>
{
    struct CGSize _initialViewSize;
}

- (BOOL)prefersBorderedOverlays;
- (struct CGSize)maximumContentSize;
- (struct CGSize)minimumContentSize;
- (BOOL)prefersUserResizableContent;
- (BOOL)prefersConstrainedContentAspectRatio;
- (struct CGSize)naturalContentSize;
- (struct CGRect)contentFrameForBoundsSize:(struct CGSize)arg1;
- (struct CGRect)contentFrame;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

