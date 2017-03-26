//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSAApplicationDelegate.h"

@class NSArray;

@interface KNAppDelegateBase : TSAApplicationDelegate
{
    BOOL _cachedBidiIsSupported;
}

+ (void)initialize;
- (id)bladerunnerContainerIdentifier;
- (id)cloudKitContainerIdentifier;
- (void)p_inputMethodsChanged:(id)arg1;
- (BOOL)supportsShrinkTextToFit;
- (BOOL)supportsRTL;
- (BOOL)isImageAdjustmentsWindowVisible;
- (void)applicationDidFinishLaunching;
- (id)defaultHyperlinkURL;
- (BOOL)URLIsValidForImportedHyperlink:(id)arg1;
- (id)invalidURLSchemes;
- (void)registerAllowedElementKinds;
- (void)registerClassTypeMappings;
- (double)maximumAspectRatioForPreviewImage;
- (double)mimimumAspectRatioForPreviewImage;
- (id)stringForRemoveLastPrivateParticipantAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationMessage;
- (id)stringForRemoveSelfAlertConfirmationTitle;
- (id)stringForStopSharingAlertConfirmationMessage;
- (id)stringForStopSharingAlertConfirmationTitle;
- (id)stringForLearnMoreSharingURL;
- (id)sharedAlertMessageWithUserName:(id)arg1;
- (id)sharedReadOnlyAlertMessageWithUserName:(id)arg1;
- (id)stringForCollaboratorsBlockedWhileOffline;
- (id)stringForRemoteVersionRestorationWithUnsavedChangesAlertMessage;
- (id)stringForRemoteVersionRestorationAlertMessage;
- (id)stringForDocumentUpdatedByOwnerWithKeepDetails;
- (id)stringForDocumentUpdatedByOwnerDetails;
- (id)stringForDocumentUpdated;
- (id)stringForDocumentUpdatedTitle;
- (id)stringForCloseDocument;
- (id)stringForOwnerPasswordOnConflictAlertMessage;
- (id)stringForOwnerPasswordOnConflictAlertTitle;
- (id)stringForCollaborator1_6ConflictWithKeepDetails;
- (id)stringForCollaborator1_6ConflictDetails;
- (id)stringForCollaboratorConflictWithKeepDetails;
- (id)stringForCollaboratorConflictDetails;
- (id)stringForOwnerConflictWithSaveACopyAlertMessage;
- (id)stringForUpdatingDocument;
- (id)stringForCollaboratorConflict;
- (id)templateTypeDisplayName;
- (id)documentTypeDisplayNameForSharingInvitation;
- (id)documentTypeDisplayName;
- (id)applicationName;
- (unsigned long long)applicationType;
- (id)nativeSFFDocumentType;
- (id)tangierEditingFormatDocumentType;
- (id)templateSFFDocumentType;
- (id)templateDocumentType;
- (id)nativeDocumentType;
- (id)previewImageNameForEncryptedNativeDocument;
- (id)previewImageNameForNativeDocument;
- (id)universalPreviewImageNameForDocumentType:(id)arg1;
- (id)appChartPropertyOverrides;
- (id)applicationTemplateVariantsForLocale:(struct __CFLocale *)arg1;
- (void)registerDefaults;
- (id)createCompatibilityDelegate;
@property(readonly, nonatomic) NSArray *powerPointDocumentTypes;
- (id)importableDocumentTypes;
- (Class)documentRootClass;
- (id)init;

@end

