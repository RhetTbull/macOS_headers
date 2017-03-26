//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NotesShared/ICBaseAttachmentView.h>

#import "ICAttachmentViewContentFrame-Protocol.h"
#import "ICServicesRolloverViewDelegate-Protocol.h"
#import "NSAccessibilityImage-Protocol.h"
#import "NSGestureRecognizerDelegate-Protocol.h"
#import "NSSharingServiceDelegate-Protocol.h"
#import "NSSharingServicePickerDelegate-Protocol.h"

@class ICMacTextView, ICServicesRolloverView, NSSharingServicePicker, NSString;

@interface ICAttachmentView : ICBaseAttachmentView <NSAccessibilityImage, NSGestureRecognizerDelegate, NSSharingServicePickerDelegate, NSSharingServiceDelegate, ICServicesRolloverViewDelegate, ICAttachmentViewContentFrame>
{
    BOOL _forManualRendering;
    NSSharingServicePicker *_sharingServicePicker;
    ICServicesRolloverView *_servicesRolloverView;
    ICServicesRolloverView *_icaxServicesRolloverView;
}

@property(retain, nonatomic) ICServicesRolloverView *icaxServicesRolloverView; // @synthesize icaxServicesRolloverView=_icaxServicesRolloverView;
@property(retain, nonatomic) ICServicesRolloverView *servicesRolloverView; // @synthesize servicesRolloverView=_servicesRolloverView;
@property(readonly) BOOL forManualRendering; // @synthesize forManualRendering=_forManualRendering;
- (void).cxx_destruct;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 mask:(unsigned long long)arg3 proposedSharingServices:(id)arg4;
- (id)sharingServicePicker:(id)arg1 delegateForSharingService:(id)arg2;
- (id)pickerForRolloverCalloutView:(id)arg1;
@property(readonly, nonatomic) NSSharingServicePicker *sharingServicePicker; // @synthesize sharingServicePicker=_sharingServicePicker;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
@property(readonly, nonatomic) NSSharingServicePicker *icaxSharingServicePicker;
- (void)icaxActivate;
- (BOOL)gestureRecognizer:(id)arg1 shouldAttemptToRecognizeWithEvent:(id)arg2;
- (void)openAttachmentView:(id)arg1;
- (void)selectAttachmentView:(id)arg1;
- (struct CGRect)boundsToUseForCursorRect;
- (void)resetCursorRects;
- (void)mouseDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)_shareServiceSelected:(id)arg1;
- (void)showAttachmentsAsLargePreviews:(id)arg1;
- (void)showAttachmentsAsThumbnails:(id)arg1;
- (void)setAttachmentViewType:(short)arg1;
- (void)didChangeMedia;
- (void)didChangeAttachment;
- (BOOL)shouldAddDoubleClickGesture;
- (BOOL)shouldAddClickGesture;
- (void)didLongPressAttachment:(id)arg1;
- (void)prepareForPrinting;
- (void)openAttachmentInPreview;
- (void)openAttachment;
- (void)didTapAttachment:(id)arg1;
- (void)setupForMarkup;
- (void)setupEventHandling;
@property(readonly, nonatomic) ICMacTextView *textView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andTextAttachment:(id)arg2 forManualRendering:(BOOL)arg3;
- (id)initWithTextAttachment:(id)arg1 forManualRendering:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sharedInit;
- (void)dealloc;
- (struct CGRect)frameForContent;
- (void)setupConstraints;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)accessibilityPerformPress;
- (id)accessibilitySubrole;
- (id)accessibilityChildren;
- (id)accessibilityRoleDescription;
- (id)accessibilityRole;
- (id)accessibilityValueDescription;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void)icaxShowServicesMenu;
- (BOOL)attachmentViewShouldExposeAccessibilityChildren;
@property(readonly, nonatomic) NSString *icaxTypeDescription;
@property(readonly, nonatomic) NSString *icaxAttachmentViewTypeDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

