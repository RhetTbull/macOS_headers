//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextFieldDelegate.h"
#import "TKTokenFieldDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class NSButton, NSImageView, NSMenu, NSMutableArray, NSPopUpButton, NSSegmentedControl, NSString, NSTabView, NSTabViewItem, NSTableView, NSTextField, NSView, TKTokenField, WKWebView;

@interface sidebar : NSViewController <WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler, TKTokenFieldDelegate, NSTextFieldDelegate>
{
    NSTextField *titleLabel;
    NSButton *trashBtn;
    NSTabView *objOptionsTabView;
    NSView *sidebarScrollView;
    NSTextField *idField;
    NSButton *clearIDFieldBtn;
    TKTokenField *classField;
    NSSegmentedControl *visibilitySeg;
    NSView *alignmentOptView;
    NSView *colorOptView;
    NSView *interactionsOptView;
    NSView *animationOptView;
    NSView *tooltipOptView;
    NSView *scrollFXOptView;
    NSView *customAttrOptView;
    NSView *wordpressLoopControlView;
    NSSegmentedControl *alignSeg;
    NSView *classTokenFieldContainer;
    NSView *classTokenFieldMainContainer;
    NSPopUpButton *relatedObjBtn;
    NSMenu *relatedObjMenu;
    NSPopUpButton *freeHandClassBtn;
    NSMenu *freeHandClassMenu;
    NSView *globalColorWellView;
    NSTextField *swatchLabel;
    NSButton *swatchClearBtn;
    NSView *mainOptionsView;
    NSView *blocView;
    NSView *rowObjView;
    NSView *columnObjView;
    NSView *textObjView;
    NSView *btnObjView;
    NSView *tweetObjView;
    NSView *linkObjView;
    NSView *logoObjView;
    NSView *imageObjView;
    NSView *iconObjView;
    NSView *carouselObjView;
    NSView *formObjView;
    NSView *listObjView;
    NSView *navBarObjView;
    NSView *navBarToggleObjView;
    NSView *cardObjView;
    NSView *cardHeaderObjView;
    NSView *videoObjView;
    NSView *audioObjView;
    NSView *deviceObjView;
    NSView *inputObjView;
    NSView *textAreaObjView;
    NSView *radioObjView;
    NSView *checkboxObjView;
    NSView *dividersObjView;
    NSView *diqusObjView;
    NSView *alertObjView;
    NSView *pulseObjView;
    NSView *octoberObjView;
    NSView *htmlWidgetObjView;
    NSView *optionSelectObjView;
    NSView *divObjView;
    NSView *modalObjView;
    NSPopUpButton *interactionTypeBtn;
    NSView *interactionPageView;
    NSView *interactionURLView;
    NSView *interactionScrollToView;
    NSView *interactionLightBoxView;
    NSView *interactionLightBoxImageView;
    NSView *interactionLightBoxVideoView;
    NSView *interactionVisibilityView;
    NSView *interactionDownloadView;
    NSView *interactionModalSelectView;
    NSPopUpButton *interactionPagePopBtn;
    NSTextField *interactionURLField;
    NSPopUpButton *interactionScrollToPopBtn;
    NSTextField *interactionScrollToSpeedField;
    NSTextField *interactionVisibilityField;
    NSButton *interactionTargetCheck;
    NSButton *interactionNoFollowCheck;
    NSPopUpButton *interactionDownloadFilePopBtn;
    NSPopUpButton *interactionModalSelectPopBtn;
    NSPopUpButton *interactionLightBoxPopBtn;
    NSTextField *interactionLightBoxIDField;
    NSPopUpButton *interactionLightBoxFramePopBtn;
    NSTextField *interactionLightBoxCaptionField;
    NSImageView *interactionLightBoxAltImg;
    WKWebView *interactionLightBoxVidWebView;
    NSView *interactionLightBoxVidContainer;
    NSButton *interactionLightBoxVidAutoPlayCheck;
    NSTextField *lightboxNameLabel;
    NSTextField *lightboxInfoLabel;
    NSButton *minimizeInteractionBtn;
    NSImageView *lightBoxCloudIcon;
    NSImageView *lightBoxVidCloudIcon;
    NSTextField *accordionItemCount;
    NSButton *accordionItemCountSetBtn;
    NSPopUpButton *animTypeBtn;
    NSPopUpButton *animStyleBtn;
    NSView *animDirectionOptView;
    NSSegmentedControl *animDirectionSeg;
    NSPopUpButton *animSpeedBtn;
    NSPopUpButton *animDelayBtn;
    NSPopUpButton *animLoopsBtn;
    NSView *lowerAnimControls;
    NSButton *minimizeAnimBtn;
    NSSegmentedControl *toolTipPositionSeg;
    NSView *tooltipMessageOptView;
    NSTextField *tooltipMessage;
    NSButton *minimizeTooltipBtn;
    NSSegmentedControl *scrollInDirSeg;
    NSSegmentedControl *scrollOutDirSeg;
    NSSegmentedControl *scrollZoomSeg;
    NSButton *scrollFXfadeInCheck;
    NSButton *scrollFXfadeOutCheck;
    NSButton *minimizeScrollFXBtn;
    NSTableView *customAttrTableView;
    NSButton *addCustomAttr;
    NSButton *removeCustomAttr;
    NSButton *minimizeCustomAttrBtn;
    NSPopUpButton *wordpressPostLoopTypeBtn;
    NSView *wordpressCustomPostLoopView;
    NSTextField *customPostLoopNameField;
    NSButton *minimizeWordpressLoopControlsBtn;
    NSPopUpButton *blocPaddingBtn;
    NSSegmentedControl *blocWidthSeg;
    NSPopUpButton *blocDividersBtn;
    NSPopUpButton *blocBgStyleBtn;
    NSPopUpButton *blocTextureBtn;
    NSImageView *blocImage;
    NSView *blocThumbSVGView;
    NSTextField *blocBgImgNameLabel;
    NSTextField *blocBgImgSizeLabel;
    NSButton *clearBGImgBtn;
    WKWebView *blocThumbWebView;
    NSView *blocStickyOptView;
    NSButton *blocStickyCheck;
    NSButton *blocParallaxCheck;
    NSView *blocBGOpts;
    NSButton *blocVideoCheck;
    NSButton *blocTopRowCheck;
    NSButton *blocBottomRowCheck;
    WKWebView *vidBGWebView;
    NSView *videoBGContainer;
    NSImageView *blocBGCloudIcon;
    NSImageView *blocVidBGCloudIcon;
    NSView *fullScreenOptView;
    NSPopUpButton *columnCountBtn;
    NSSegmentedControl *rowMarginSeg;
    NSSegmentedControl *rowAlignSeg;
    NSButton *columnGutterCheck;
    NSSegmentedControl *columnWidthSeg;
    NSSegmentedControl *columnOffsetSeg;
    NSSegmentedControl *columnOrderSeg;
    NSSegmentedControl *columnVericalAlignSeg;
    NSTextField *columnWidthInput;
    NSTextField *columnOffsetInput;
    NSTextField *columnOrderInput;
    NSPopUpButton *textDataBtn;
    NSButton *typeFaceBtn;
    NSTextField *textHeight;
    NSPopUpButton *textHeightVal;
    NSTextField *textIndentField;
    NSPopUpButton *textIndentVal;
    NSTextField *letterSpacingField;
    NSPopUpButton *letterSpacingVal;
    NSTextField *textSize;
    NSPopUpButton *textSizeVal;
    NSSegmentedControl *textAlignSeg;
    NSPopUpButton *textObjTypeBtn;
    NSPopUpButton *textWidthBtn;
    NSPopUpButton *textStyleBtn;
    NSSegmentedControl *textMarginSeg;
    NSTextField *btnLabelField;
    NSPopUpButton *btnStyleBtn;
    NSSegmentedControl *btnShapeSeg;
    NSSegmentedControl *btnSizeSeg;
    NSSegmentedControl *btnWidthSeg;
    NSButton *btnIconCheck;
    NSTextField *tweetURLField;
    NSTextField *tweetMSGField;
    NSTextField *tweetViaField;
    NSTextField *linkLabelField;
    NSSegmentedControl *linkWidthSeg;
    NSView *logoTextOptView;
    NSView *logoImgOptView;
    NSSegmentedControl *logoTypeSeg;
    NSImageView *logoThumb;
    NSView *logoThumbSVGView;
    NSTextField *logoFileNameLabel;
    NSTextField *logoFileSizeLabel;
    WKWebView *logoThumbWebView;
    NSTextField *logoTitleField;
    NSTextField *logoHeightField;
    NSTextField *logoWidthField;
    NSTextField *logoAltField;
    NSButton *logoTypeFaceBtn;
    NSTextField *logoTextHeight;
    NSPopUpButton *logoTextHeightVal;
    NSTextField *logoTextSize;
    NSPopUpButton *logoTextSizeVal;
    NSButton *clearLogoBtn;
    NSButton *clearLogoTextStyleBtn;
    NSImageView *logoCloudIcon;
    NSPopUpButton *imageSourceBtn;
    NSImageView *imageThumb;
    NSView *imageThumbSVGView;
    WKWebView *imageThumbWebView;
    NSView *imageURLOptView;
    NSTextField *imageURLField;
    NSTextField *imageHeightField;
    NSTextField *imageWidthField;
    NSTextField *imageAltField;
    NSSegmentedControl *imageMarginSeg;
    NSPopUpButton *imageStyleBtn;
    NSSegmentedControl *imageResSelectSeg;
    NSTextField *resInfoMarker;
    NSTextField *imageThumbLabel;
    NSTextField *imageNameLabel;
    NSTextField *imageInfoLabel;
    NSView *basicImgOptView;
    NSView *multiResOptView;
    NSView *imgStyleOptView;
    NSButton *clearImgBtn;
    NSImageView *imgCloudIcon;
    WKWebView *iconWebView;
    NSView *iconWebViewContainer;
    NSSegmentedControl *iconSizeSeg;
    NSButton *iconStyleBtn;
    NSSegmentedControl *iconframeSeg;
    NSSegmentedControl *carouselTransSeg;
    NSButton *carouselAutoPlayCheck;
    NSTextField *carouselDurationField;
    NSView *durationControlsContainer;
    NSSegmentedControl *carouselAlignSeg;
    NSSegmentedControl *carouselCapAlignSeg;
    NSTextField *carouselSlideAltField;
    NSButton *carouselIndicatorCheck;
    NSButton *carouselSlideBtn;
    NSMenu *carouselSlideMenu;
    NSImageView *carouselSlideThumb;
    NSButton *clearCarouselSlideBtn;
    NSImageView *carouselCloudIcon;
    NSTextField *carouselFileNameLabel;
    NSTextField *carouselFileSizeLabel;
    NSPopUpButton *formTypeBtn;
    NSView *formHostedFormOpts;
    NSView *formCustomFormOpts;
    NSTextField *formActionField;
    NSPopUpButton *formMethodBtn;
    NSTextField *sendToField;
    NSTextField *fromField;
    NSTextField *fromSubject;
    NSTextField *fromGreeting;
    NSPopUpButton *formSuccessBtn;
    NSPopUpButton *formSuccessPageSelectBtn;
    NSTextField *formSuccessURLField;
    NSTextField *successMsgField;
    NSTextField *failMsgField;
    NSView *formSuccessMsgControls;
    NSView *formSuccessPageControls;
    NSView *formSuccessURLControls;
    NSPopUpButton *listDataSourceBtn;
    NSButton *menuManagerBtn;
    NSButton *menuRefreshBtn;
    NSTextField *listItemCount;
    NSSegmentedControl *listStyleSeg;
    NSSegmentedControl *listLayoutSeg;
    NSSegmentedControl *listSpacingSeg;
    NSView *listOptionsContainer;
    NSSegmentedControl *navSpecialBreakpoint;
    NSPopUpButton *navIconStyleBtn;
    NSPopUpButton *navMenuStyleBtn;
    NSPopUpButton *navBarThemePopBtn;
    NSButton *includeLogoCheck;
    NSButton *includeNavCheck;
    NSButton *includeAdditionalContentCheck;
    NSSegmentedControl *panelCornerSeg;
    NSButton *panelHeadCheck;
    NSButton *panelFooterCheck;
    NSButton *cardBorderCheck;
    NSButton *modalHeadCheck;
    NSButton *modalFooterCheck;
    NSButton *modalCloseButtonCheck;
    NSButton *modalAnimateCheck;
    NSPopUpButton *modalSizeBtn;
    NSSegmentedControl *modalPosSeg;
    NSView *videoSnippetView;
    NSView *localVidControlView;
    NSPopUpButton *videoTypeBtn;
    NSSegmentedControl *videoAspectRatioSeg;
    NSTextField *videoSnippetTextView;
    NSView *vidWebViewContainer;
    WKWebView *vidSnippetWebView;
    NSButton *videoAutoPlayCheck;
    NSButton *videoLoopCheck;
    NSButton *videoMutedCheck;
    NSButton *videoPlaysInlineCheck;
    NSButton *videoControlsCheck;
    NSView *videoSnippetContainer;
    NSButton *replaceVidBtn;
    NSImageView *vidCloudIcon;
    NSImageView *videoPosterThumb;
    NSButton *videoclearPosterBtn;
    NSImageView *videoPosterCloudIcon;
    NSTextField *videoPostedNameLabel;
    NSTextField *videoPostedSizeLabel;
    NSPopUpButton *audioFileBtn;
    NSButton *audioAutoPlayCheck;
    NSButton *audioLoopCheck;
    NSButton *audioControlsCheck;
    NSPopUpButton *deviceTypeBtn;
    NSPopUpButton *deviceScreenTypeBtn;
    NSPopUpButton *inputTypeBtn;
    NSTextField *inputPlaceHolderField;
    NSView *maxCharControls;
    NSTextField *inputMaxCharField;
    NSView *inputRequiredControls;
    NSButton *inputRequiredCheck;
    NSTextField *inputValidationMessageField;
    NSTextField *inputEmailValidationMessageField;
    NSTextField *textAreaPlaceHolderField;
    NSTextField *textAreaRowsField;
    NSTextField *textAreaMaxCharField;
    NSButton *textAreaRequiredCheck;
    NSTextField *textAreaValidationMessageField;
    NSTextField *radioLabelField;
    NSTextField *radioGroupField;
    NSTextField *radioValueField;
    NSSegmentedControl *radioLayoutSeg;
    NSTextField *checkBoxLabelField;
    NSSegmentedControl *checkBoxLayoutSeg;
    NSButton *checkBoxRequiredCheck;
    NSButton *checkBoxActiveCheck;
    NSTextField *checkBoxValidateMessageField;
    NSPopUpButton *checkBoxStylePop;
    NSPopUpButton *dividerStyleBtn;
    NSTextField *disqusIDField;
    NSTextField *disqusNotice;
    NSSegmentedControl *alertTypeSeg;
    NSPopUpButton *pulseTypeBtn;
    NSTextField *pulseIDField;
    NSTextField *octoberIDField;
    NSButton *editCodeBtn;
    NSButton *renderHTMLCheck;
    NSTextField *htmlNotice;
    NSButton *editOptSelectBtn;
    NSPopUpButton *divTypeBtn;
    NSSegmentedControl *divLayoutSeg;
    NSButton *includeEmptyCheck;
    NSTabViewItem *customBricContainer;
    NSView *customBricView;
    NSTextField *noSelectLabel;
    NSTextField *noSelectSubLabel;
    NSView *noSelectionView;
    NSMutableArray *carouselImagePaths;
}

- (void).cxx_destruct;
- (id)invertImage:(id)arg1 withShouldInvert:(BOOL)arg2 withSize:(struct CGSize)arg3;
- (id)filterArray:(id)arg1 withTargetKey:(id)arg2 withSearchTerm:(id)arg3 withScanType:(long long)arg4;
- (void)sliderValueChanged:(id)arg1;
- (void)resetSegmentedResControl:(id)arg1;
- (void)setCustomBricImageRes:(id)arg1;
- (long long)getUIElementOffsetValue:(id)arg1;
- (void)setSideBarUIitemHidden:(id)arg1;
- (void)setSideBarUIitemEditable:(id)arg1;
- (void)setSideBarUIitemState:(id)arg1;
- (void)populateCustomBricDropdownMenu:(id)arg1;
- (void)resetCustomBricImgVal:(id)arg1;
- (void)setCustomBricImgInfoLabels:(id)arg1 withPath:(id)arg2;
- (void)setSidebarUIItemValueForCustomBric:(id)arg1;
- (void)removeAllSubViews:(id)arg1;
- (void)addSidebarDivider:(id)arg1;
- (void)addSidebarColorWell:(id)arg1 withfunc:(id)arg2 withVal:(id)arg3 withTooltip:(id)arg4 withWidth:(BOOL)arg5;
- (void)addSidebarSlider:(id)arg1 withfunc:(id)arg2 withVal:(id)arg3 withTooltip:(id)arg4;
- (void)addImgInfoLabel:(id)arg1 withY:(float)arg2 withTypeFace:(id)arg3 withAttr:(id)arg4 withType:(id)arg5;
- (void)addImageWell:(id)arg1 withfunc:(id)arg2 withTitle:(id)arg3 withVal:(id)arg4 withTooltip:(id)arg5;
- (void)addResSegmentedControl:(id)arg1;
- (void)refreshCustomBricPageMenus;
- (void)populatePageMenu:(id)arg1 withSelection:(BOOL)arg2;
- (void)addTextAlignmentSeg:(id)arg1 withfunc:(id)arg2 withTooltip:(id)arg3 withSelectedIdx:(long long)arg4;
- (void)addAlignmentSeg:(id)arg1 withfunc:(id)arg2 withTooltip:(id)arg3 withSelectedIdx:(long long)arg4 isVertControls:(BOOL)arg5;
- (void)addPageSelector:(id)arg1 withfunc:(id)arg2 withItemArray:(id)arg3 withVal:(id)arg4 withTooltip:(id)arg5;
- (void)addFontSelector:(id)arg1 withfunc:(id)arg2 withTooltip:(id)arg3 withFontName:(id)arg4;
- (void)addButton:(id)arg1 withfunc:(id)arg2 withTitle:(id)arg3 withTooltip:(id)arg4;
- (void)addDropDownMenu:(id)arg1 withfunc:(id)arg2 withItemArray:(id)arg3 withVal:(long long)arg4 withTooltip:(id)arg5;
- (void)addCheckBox:(id)arg1 withfunc:(id)arg2 withTitle:(id)arg3 withVal:(BOOL)arg4 withTooltip:(id)arg5;
- (void)stepperChanged:(id)arg1;
- (void)addTextField:(id)arg1 withfunc:(id)arg2 withVal:(id)arg3 withTooltip:(id)arg4 textArea:(BOOL)arg5 withWidth:(BOOL)arg6 withStepper:(BOOL)arg7;
- (void)addMultiLineLabel:(id)arg1;
- (void)addTextLabel:(id)arg1 withTitle:(BOOL)arg2 withWidth:(BOOL)arg3 withParentAttr:(id)arg4;
- (id)getUIDataArrayForBric:(id)arg1;
- (void)renderCustomBricUI:(id)arg1 withAttrName:(id)arg2;
- (void)setUpRelatedItemMenu:(id)arg1;
- (void)selectTableRow:(id)arg1 withSelectIdx:(long long)arg2;
- (id)tableView:(id)arg1 rowViewForRow:(long long)arg2;
- (long long)numberOfRowsInTableView:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)getScrollFXZoomIdx:(id)arg1;
- (long long)getScrollFXDirOutIdx:(id)arg1;
- (long long)getScrollFXDirIdx:(id)arg1;
- (void)setScrollFXDirection:(id)arg1;
- (void)setUpScrollFXControls;
- (void)enableMenuManagerBtn;
- (void)showSidebarOption:(id)arg1;
- (void)hideSidebarOption:(id)arg1;
- (void)setSectionHeight:(id)arg1 withHeight:(long long)arg2;
- (void)toggleSectionCollapse:(id)arg1;
- (void)setUpSectionCollapse;
- (void)clearSidebarField:(id)arg1;
- (void)setWebViewIcon:(id)arg1;
- (void)iconChanged:(id)arg1;
- (void)loadIconSets;
- (id)getActiveSwatchObj;
- (void)globalColorChanged;
- (void)setUpWordpressLoops;
- (void)setUpAnimations;
- (void)setAccordionCount:(id)arg1;
- (void)setUpFieldObjArray;
- (id)getTargetTextField:(id)arg1;
- (void)changeFontUnitVal:(id)arg1;
- (void)updateFieldValue:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)controlTextDidBeginEditing:(id)arg1;
- (void)clearIDField:(id)arg1;
- (void)selectSidebarField:(id)arg1;
- (void)resetFreehandMenu;
- (void)removeClassToken:(id)arg1;
- (void)updateClassName:(id)arg1;
- (void)addNewClassToObjClassArray:(id)arg1;
- (void)refreshAutoCompletePopover;
- (void)tokenField:(id)arg1 completionsForSubstring:(id)arg2 indexOfToken:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)tokenField:(id)arg1 menuForRepresentedObject:(id)arg2;
- (BOOL)tokenField:(id)arg1 hasMenuForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 editingStringForRepresentedObject:(id)arg2;
- (void)tokenField:(id)arg1 attachment:(id)arg2 hasBeenInsertedInRange:(struct _NSRange)arg3 inRect:(struct CGRect)arg4;
- (id)tokenField:(id)arg1 displayStringForRepresentedObject:(id)arg2;
- (id)tokenField:(id)arg1 representedObjectForEditingString:(id)arg2;
- (void)setTokenFieldHeight:(BOOL)arg1;
- (void)addFreehandClassToken:(id)arg1;
- (void)populateClassTokenField;
- (void)setlowerViewY:(id)arg1 withY:(float)arg2;
- (void)setLowerOptionPositions;
- (float)getNewScrollHeightValue;
- (long long)getUpperOptionHeight;
- (void)setTabHeight;
- (void)setMenuForObj:(id)arg1;
- (long long)cardCornerIndex:(id)arg1;
- (long long)btnWidthIndex:(id)arg1;
- (long long)btnSizeIndex:(id)arg1;
- (long long)btnShapeIndex:(id)arg1;
- (long long)blocShapeTag:(id)arg1;
- (void)populateInteractionModalIDMenu:(id)arg1;
- (void)populateInteractionScrollToMenu:(id)arg1;
- (void)populateInteractionPageMenu;
- (void)populateListDataMenu;
- (void)lightBoxPreviewChanged:(id)arg1;
- (void)setVideoPosterDetails:(id)arg1;
- (void)vidPreviewChanged:(id)arg1;
- (void)hideClearImgBtn:(id)arg1;
- (void)showClearImgBtn:(id)arg1 withImgPath:(id)arg2;
- (void)resetImageInfoLabels:(id)arg1 with:(id)arg2;
- (void)clearVideoPoster;
- (void)clearLogoThumbNail;
- (void)clearImageThumbNail;
- (void)clearBGThumbNail;
- (void)setImgResInfo;
- (id)getImageSizeDetails:(id)arg1;
- (void)populateImageURLField:(id)arg1;
- (void)logoImageThumbChanged:(id)arg1;
- (void)blocBackgroundAssetChanged:(id)arg1;
- (void)imageThumbChanged:(id)arg1;
- (void)selectTargetImageRes:(id)arg1;
- (void)setVideoCloudIcon:(id)arg1 withPath:(id)arg2;
- (void)setImageCloudIcon:(id)arg1 withPath:(id)arg2;
- (void)setImageThumbNail:(id)arg1 withPath:(id)arg2;
- (void)carouselImageChanged:(id)arg1;
- (void)addNewSlide:(id)arg1;
- (void)changeActiveSlide:(id)arg1;
- (void)populateSlideMenu:(long long)arg1;
- (void)setWordpressCustomPostOptions:(id)arg1;
- (void)showCustomAttrEditPop:(id)arg1;
- (void)selectCustomAttrTableColumn:(id)arg1;
- (void)removeCustomAttr:(id)arg1;
- (void)setUpCustomAttrControls;
- (void)setLogoTextFontDropDown:(id)arg1;
- (void)setTextFontDropDown:(id)arg1;
- (long long)getAnimDirIdx:(id)arg1;
- (void)setAnimationType:(id)arg1;
- (void)setAlignmentOptions:(long long)arg1 forObject:(id)arg2;
- (void)refreshToolTipOptions:(id)arg1;
- (void)setUpTooltipMsgView:(long long)arg1 withTooltipData:(id)arg2;
- (void)populateAudioDropdownMenu;
- (void)populateDownloadDropdownMenu;
- (void)setVisibilityOptions:(id)arg1;
- (long long)checkIndexIsValid:(long long)arg1;
- (void)disableTopSidebarControls:(BOOL)arg1;
- (void)setSidebarData;
- (void)sidebarSecColors;
- (void)setUpLabels;
- (void)executeJS:(id)arg1 withWebView:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)setUpVideoLightboxWebView;
- (void)setUpVideoBGWebView;
- (void)setUpVideoSnippetWebView;
- (void)setUpBGThumbWebView;
- (void)setUpLogoThumbWebView;
- (void)setUpImageThumbWebView;
- (void)setUpIconWebView;
- (void)setUpWebViews;
- (void)setSidebarTheme;
- (void)enableWPFunctions;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

