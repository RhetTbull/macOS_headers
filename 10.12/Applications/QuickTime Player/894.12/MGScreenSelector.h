//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MGScreenSelectorOverlayViewDelegate-Protocol.h"
#import "NSTouchBarDelegate-Protocol.h"

@class NSDictionary, NSString, NSTouchBar;
@protocol MGScreenSelectorDelegate;

@interface MGScreenSelector : NSObject <MGScreenSelectorOverlayViewDelegate, NSTouchBarDelegate>
{
    NSDictionary *_windowsForDisplayIDs;
    NSString *_selectionString;
    NSString *_confirmationString;
    struct CGSize _minimumSelectionSize;
    struct CGRect _selectionRect;
    BOOL _selectionLocked;
    BOOL _requestingSelection;
    NSTouchBar *_touchBar;
    id <MGScreenSelectorDelegate> _delegate;
}

+ (long long)screenSelectorWindowLevel;
@property(readonly, nonatomic) __weak id <MGScreenSelectorDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *windowsForDisplayIDs; // @synthesize windowsForDisplayIDs=_windowsForDisplayIDs;
@property(retain) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property(nonatomic, getter=isRequestingSelection) BOOL requestingSelection; // @synthesize requestingSelection=_requestingSelection;
- (void).cxx_destruct;
- (void)confirmCurrentSelectionIfPossible;
- (void)stopRequestingSelection;
- (void)setDefaultSelection;
- (void)startRequestingSelectionWithDelegate:(id)arg1;
- (void)reloadOverlays;
- (void)confirmCurrentSelectionOfOverlayView:(id)arg1;
- (void)overlayViewDidConfirm:(id)arg1;
- (void)overlayViewDidCancel:(id)arg1;
- (void)overlayViewDidActivate:(id)arg1;
- (void)overlayViewDidHighlight:(id)arg1;
@property(nonatomic, getter=isSelectionLocked) BOOL selectionLocked;
@property(nonatomic) struct CGSize minimumSelectionSize;
@property(copy, nonatomic) NSString *confirmationString;
@property(copy, nonatomic) NSString *selectionString;
- (void)enumerateOverlayViewsUsingBlock:(CDUnknownBlockType)arg1;
- (void)highlightScreen:(id)arg1;
- (void)hideForRecording;
- (void)applicationDidChangeScreenParameters:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

