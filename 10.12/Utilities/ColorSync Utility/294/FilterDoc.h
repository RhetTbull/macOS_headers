//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

#import "NSApplicationDelegate-Protocol.h"
#import "NSToolbarDelegate-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class FilterDocExport, FilterDocPDEController, FilterDocProfile, FilterImageCorrection, FilterPageView, FilterPageViewMatte, FilterProfilePopup, FilterToolbarPageFieldView, NSBox, NSButton, NSMenu, NSMenuItem, NSMutableArray, NSMutableDictionary, NSPanel, NSPopUpButton, NSPrintInfo, NSScrollView, NSString, NSTextField, NSWindow, QuartzFilter;

@interface FilterDoc : NSDocument <NSApplicationDelegate, NSWindowDelegate, NSToolbarDelegate>
{
    NSWindow *mWindow;
    FilterPageView *pageView;
    FilterPageViewMatte *pageViewMatte;
    NSScrollView *pageScrollView;
    NSBox *controlBox;
    NSPopUpButton *filterPopup;
    NSButton *filterApplyButton;
    NSTextField *filterControlBoxText;
    NSTextField *intentControlBoxText;
    NSButton *pdfxSoftProofSwitch;
    FilterToolbarPageFieldView *toolbarPageFieldView;
    NSTextField *toolbarPageField;
    NSTextField *toolbarPageFieldMax;
    NSMutableDictionary *toolbarItems;
    NSPopUpButton *profileMode;
    FilterProfilePopup *profilePopup;
    NSMenu *profileMenu;
    NSPopUpButton *intentPopup;
    NSMenu *AbstractSubmenu;
    NSMenu *ColorSpaceSubmenu;
    NSMenu *DisplaySubmenu;
    NSMenu *InputSubmenu;
    NSMenu *NamedColorSubmenu;
    NSMenu *OutputSubmenu;
    NSMenuItem *AbstractSubmenuItem;
    NSMenuItem *ColorSpaceSubmenuItem;
    NSMenuItem *DisplaySubmenuItem;
    NSMenuItem *InputSubmenuItem;
    NSMenuItem *NamedColorSubmenuItem;
    NSMenuItem *OutputSubmenuItem;
    NSPanel *imageInfoPanel;
    NSTextField *imageInfoColorModelField;
    NSTextField *imageInfoDPIField;
    NSButton *imageInfoOKButton;
    NSTextField *imageInfoProfileField;
    NSTextField *imageInfoSizeField;
    NSTextField *imageInfoAssumedProfileField;
    NSPanel *imageSizePanel;
    NSButton *imageSizeApplyButton;
    NSButton *imageSizeCancelButton;
    NSTextField *imageSizeDPITextField;
    NSTextField *imageSizeFloatToField;
    NSTextField *imageSizeDimensionsField;
    NSTextField *imageSizeIntToField;
    NSTextField *imageSizePercentSign;
    NSPopUpButton *imageSizeQualityPopup;
    NSPopUpButton *imageSizeResizeTypePopup;
    struct CGSize pageViewSize;
    float pageViewAspectRatio;
    struct CGPoint pageViewOrigin;
    float mScaleFactor;
    NSMutableArray *mFilters;
    unsigned long long currentFilterIndex;
    QuartzFilter *mCurrentFilter;
    FilterDocProfile *mProfile;
    NSMutableArray *mProfiles;
    NSMutableArray *manuallyAddedFilterDocProfiles;
    NSString *mLocalizedNoneName;
    long long mImageCount;
    long long mCurrentImage;
    struct __CFArray *mMetadataArray;
    FilterImageCorrection *mImageCorrection;
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } infoDictLock;
    unsigned int imRenderingIntent;
    BOOL mBPC;
    BOOL noUpdateDuringAction;
    BOOL docIsLocked;
    FilterDocPDEController *mPDEController;
    NSPrintInfo *mPrintInfo;
    FilterDocExport *export;
}

+ (int)docTypeForImageType:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)setupApplyFilterUndo:(id)arg1;
- (void)setupApplyProfileUndo:(id)arg1;
- (void)setupAdjustImageSizeUndo:(id)arg1;
- (void)setWholeDocumentAndSettings:(id)arg1;
- (void)setWholeDocument:(void *)arg1;
- (id)wholeDocumentAndSettings;
- (id)wholeDocumentAndMetadata;
- (id)wholeDocument;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)windowDidResize:(id)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (void)pageViewResizeRequest:(float)arg1;
- (void)centerPageViewFrame;
- (void)newPageViewFrame:(float)arg1;
- (void)filterSelectNotification:(id)arg1;
- (void)filterUpdateNotification:(id)arg1;
- (void)filterRemoveNotification:(id)arg1;
- (void)filterAddNotification:(id)arg1;
- (id)currentURL;
- (void)imageSizeTextFieldAction:(id)arg1;
- (void)imageSizeResizeTypePopupAction:(id)arg1;
- (void)imageSizeQualityPopupAction:(id)arg1;
- (void)imageSizeCancelButtonAction:(id)arg1;
- (void)imageSizeApplyButtonAction:(id)arg1;
- (void)imageInfoOKButtonAction:(id)arg1;
- (void)exportFilterDocument:(id)arg1;
- (void)imageCorrectionAction:(id)arg1;
- (void)imageSizeAction:(id)arg1;
- (void)imageInfoAction:(id)arg1;
- (void)zoomToFitAction:(id)arg1;
- (void)zoomOutAction:(id)arg1;
- (void)zoomInAction:(id)arg1;
- (void)zoomAction:(float)arg1;
- (void)handleZoomToScale:(float)arg1;
- (void)filterApplyAction:(id)arg1;
- (void)rightArrowAction:(id)arg1;
- (void)leftArrowAction:(id)arg1;
- (void)currentPageAction:(id)arg1;
- (void)adjustFrameSizeAction:(id)arg1;
- (id)bestTypeForWriting;
- (id)defaultSaveAsProperties;
- (id)writableTypesForSaveOperation:(unsigned long long)arg1;
- (struct CGSize)originalSize;
- (id)pdeController;
- (BOOL)canBePrintingTarget;
- (id)printInfo;
- (void)setPrintInfo:(id)arg1;
- (BOOL)writeImageToFile:(id)arg1 image:(struct CGImage *)arg2 type:(struct __CFString *)arg3 metadata:(struct __CFDictionary *)arg4;
- (struct CGPDFDocument *)convertImageArrayToPDFDoc:(struct __CFArray *)arg1;
- (struct CGPDFDocument *)convertImageToPDFDoc:(struct CGImage *)arg1;
- (struct CGRect)imageRectForPDFPage:(struct CGRect)arg1;
- (BOOL)revertToContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (struct __CFArray *)oneImageArray:(struct CGImage *)arg1;
- (struct CGPDFDocument *)applyFilterToPDFDoc:(struct CGPDFDocument *)arg1 filter:(id)arg2;
- (struct CGImage *)applyFilterToImage:(struct CGImage *)arg1 filter:(id)arg2 imageScaleFilter:(id)arg3;
- (BOOL)writeExportDataToURL:(id)arg1 data:(void *)arg2 info:(void *)arg3;
- (void *)exportData:(int)arg1 operation:(unsigned long long)arg2;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (BOOL)okToWriteMultiPage;
- (void)applyFilterAndScaleImage:(id)arg1;
- (long long)pageCount;
- (void)setFilterPage:(long long)arg1;
- (long long)filterPage;
- (void)setMetadata:(id)arg1;
- (struct __CFDictionary *)metadata;
- (void *)filterDocument;
- (int)filterDocumentType;
- (int)colorSpaceModel;
- (struct CGColorSpace *)softproofSpaceCopy;
- (BOOL)hasAlpha;
- (struct CGAffineTransform)affineTransform;
- (BOOL)softProof;
- (void)resetCurrentFilter;
- (id)retainCurrentFilter;
- (void)setCurrentFilter:(id)arg1;
- (void)displayPage;
- (void)updatePageInfo;
- (void)updatePreview;
- (id)imageCorrection;
- (void)pdfxSoftProofSwitchAction:(id)arg1;
- (void)saveDocumentAs:(id)arg1;
- (void)intentAction:(id)arg1;
- (void)setIntent:(int)arg1;
- (void)profileModeAction:(id)arg1;
- (void)setProfileMode;
- (void)profileMenuAction:(id)arg1;
- (void)setProfile:(id)arg1;
- (void)showInspector:(id)arg1;
- (void)genericAction;
- (unsigned int)imRenderingIntent;
- (id)imageFilter;
- (void)loadProfiles:(id)arg1;
- (BOOL)manuallyInstallProfile:(id)arg1;
- (void)loadProfile:(id)arg1;
- (void)loadFilters:(id)arg1;
- (void)filterPopupAction:(id)arg1;
- (id)toolbarAllowedItemIdentifiers:(id)arg1;
- (id)toolbarDefaultItemIdentifiers:(id)arg1;
- (id)toolbar:(id)arg1 itemForItemIdentifier:(id)arg2 willBeInsertedIntoToolbar:(BOOL)arg3;
- (void)addToolbarItems;
- (void)close;
- (void)windowControllerDidLoadNib:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)windowNibName;
- (void)dealloc;
- (id)retain;
- (oneway void)release;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

