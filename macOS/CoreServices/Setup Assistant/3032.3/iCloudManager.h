//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MacBuddyManager-Protocol.h"

@class ACAccount, ACAccountStore, FAFamilyCircle, NSArray, NSData, NSDictionary, NSImage, NSMutableSet, NSString, NSValue;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface iCloudManager : NSObject <MacBuddyManager>
{
    BOOL existing;
    BOOL creating;
    BOOL agreedToTOS;
    NSString *username;
    NSString *password;
    BOOL _needsRepair;
    NSDictionary *_iCloudLoginSetupDictionary;
    BOOL _skipMobileMeDueToServerError;
    NSString *_localizedMobileMeError;
    BOOL _abortSetup;
    BOOL _abortSyncSetup;
    BOOL _abortSyncEscrowSetup;
    NSString *_currentOperation;
    id _delegate;
    NSDictionary *_potentialIdentityLogins;
    BOOL _agreedToTOS;
    BOOL doingCommerceAuth;
    BOOL _naggedAboutFMM;
    BOOL _isFirstAccountLogin;
    BOOL _hasLoggedTargetUserIn;
    BOOL _isHSA2;
    BOOL _isUpgrade;
    BOOL _commerceAccountNeedsRepair;
    BOOL _wasShownFMMActivationLockPane;
    BOOL _approvalRequestWasSentDuringBuddy;
    BOOL _doingReset;
    BOOL _backupIsEnabled;
    BOOL _recoveryPerformedDuringBuddy;
    BOOL _isBackupNoCircleRecovery;
    BOOL _iForgotIsForiCloudReprompt;
    BOOL _enableFDE;
    BOOL _useFDEiCloudRecovery;
    BOOL _isRecoveryKeyRepairFlow;
    BOOL _hasBeenOfferediCloudDriveMigration;
    BOOL _migrateToiCloudDrive;
    BOOL _offerRemoteApproval;
    BOOL _offerToUseRecoveryKey;
    BOOL _screenTimeEnabled;
    BOOL _usesiCloudAsLogin;
    NSMutableSet *iCloudServicesToEnable;
    NSString *_fmmUsername;
    NSString *_ephermeralUsername;
    NSString *_pet;
    NSDictionary *_authenticationResultsDictionary;
    NSString *_continuationData;
    NSData *_meCardPhotoData;
    NSValue *_meCardPhotoRect;
    NSImage *_meCardPhoto;
    NSDictionary *_delegatesRequestDict;
    NSDictionary *_mainAccountResponseDict;
    NSString *_tosVersion;
    NSString *_commerceAccountUsername;
    NSString *_commerceAccountPET;
    NSDictionary *_commerceAccountAuthResults;
    NSDictionary *_commerceAccountResponseDict;
    NSDictionary *_commerceAccountTOSVersionsDict;
    NSDictionary *_unifiedResponseDict;
    NSString *_localUserSecret;
    NSString *_iCloudSecurityCode;
    long long _icscType;
    NSString *_smsCountryCode;
    NSString *_smsPhoneNumber;
    NSString *_smsISOCode;
    NSString *_keychainSetupErrorString;
    NSString *_recoveryiCSC;
    NSString *_recoverySMSCode;
    NSString *_FDERecoveryKey;
    NSString *_FDEUserName;
    NSString *_FDEUserPassword;
    NSObject<OS_dispatch_semaphore> *_storageDeterminationSemaphore;
    NSArray *_iCDPDevices;
    long long _iCDPEnrollmentStatus;
    NSDictionary *_iCDPStatusInfo;
    NSArray *_identityLoginsToLink;
    NSDictionary *_akConfigurationDictionary;
    FAFamilyCircle *_circle;
    NSArray *_storageBasedServicesInfoList;
    NSDictionary *_storageUsageDict;
    NSObject<OS_dispatch_queue> *_storageBasedServicesInfoQueue;
    ACAccount *_acAccount;
    ACAccountStore *_acAccountStore;
}

+ (id)appleProvidedIDDomainNames;
- (void).cxx_destruct;
@property(retain, nonatomic) ACAccountStore *acAccountStore; // @synthesize acAccountStore=_acAccountStore;
@property(retain, nonatomic) ACAccount *acAccount; // @synthesize acAccount=_acAccount;
@property(retain) NSObject<OS_dispatch_queue> *storageBasedServicesInfoQueue; // @synthesize storageBasedServicesInfoQueue=_storageBasedServicesInfoQueue;
@property(retain) NSDictionary *storageUsageDict; // @synthesize storageUsageDict=_storageUsageDict;
@property(retain) NSArray *storageBasedServicesInfoList; // @synthesize storageBasedServicesInfoList=_storageBasedServicesInfoList;
@property BOOL usesiCloudAsLogin; // @synthesize usesiCloudAsLogin=_usesiCloudAsLogin;
@property(retain) FAFamilyCircle *circle; // @synthesize circle=_circle;
@property(copy) NSDictionary *akConfigurationDictionary; // @synthesize akConfigurationDictionary=_akConfigurationDictionary;
@property BOOL screenTimeEnabled; // @synthesize screenTimeEnabled=_screenTimeEnabled;
@property(retain) NSArray *identityLoginsToLink; // @synthesize identityLoginsToLink=_identityLoginsToLink;
@property(readonly) __weak NSDictionary *potentialIdentityLogins; // @synthesize potentialIdentityLogins=_potentialIdentityLogins;
@property BOOL offerToUseRecoveryKey; // @synthesize offerToUseRecoveryKey=_offerToUseRecoveryKey;
@property BOOL offerRemoteApproval; // @synthesize offerRemoteApproval=_offerRemoteApproval;
@property(retain) NSDictionary *iCDPStatusInfo; // @synthesize iCDPStatusInfo=_iCDPStatusInfo;
@property long long iCDPEnrollmentStatus; // @synthesize iCDPEnrollmentStatus=_iCDPEnrollmentStatus;
@property(copy) NSArray *iCDPDevices; // @synthesize iCDPDevices=_iCDPDevices;
@property(retain) NSObject<OS_dispatch_semaphore> *storageDeterminationSemaphore; // @synthesize storageDeterminationSemaphore=_storageDeterminationSemaphore;
@property BOOL migrateToiCloudDrive; // @synthesize migrateToiCloudDrive=_migrateToiCloudDrive;
@property BOOL hasBeenOfferediCloudDriveMigration; // @synthesize hasBeenOfferediCloudDriveMigration=_hasBeenOfferediCloudDriveMigration;
@property BOOL isRecoveryKeyRepairFlow; // @synthesize isRecoveryKeyRepairFlow=_isRecoveryKeyRepairFlow;
@property(copy) NSString *FDEUserPassword; // @synthesize FDEUserPassword=_FDEUserPassword;
@property(copy) NSString *FDEUserName; // @synthesize FDEUserName=_FDEUserName;
@property(copy) NSString *FDERecoveryKey; // @synthesize FDERecoveryKey=_FDERecoveryKey;
@property BOOL useFDEiCloudRecovery; // @synthesize useFDEiCloudRecovery=_useFDEiCloudRecovery;
@property BOOL enableFDE; // @synthesize enableFDE=_enableFDE;
@property BOOL iForgotIsForiCloudReprompt; // @synthesize iForgotIsForiCloudReprompt=_iForgotIsForiCloudReprompt;
@property(copy) NSString *recoverySMSCode; // @synthesize recoverySMSCode=_recoverySMSCode;
@property(copy) NSString *recoveryiCSC; // @synthesize recoveryiCSC=_recoveryiCSC;
@property BOOL isBackupNoCircleRecovery; // @synthesize isBackupNoCircleRecovery=_isBackupNoCircleRecovery;
@property BOOL recoveryPerformedDuringBuddy; // @synthesize recoveryPerformedDuringBuddy=_recoveryPerformedDuringBuddy;
@property BOOL backupIsEnabled; // @synthesize backupIsEnabled=_backupIsEnabled;
@property BOOL doingReset; // @synthesize doingReset=_doingReset;
@property BOOL approvalRequestWasSentDuringBuddy; // @synthesize approvalRequestWasSentDuringBuddy=_approvalRequestWasSentDuringBuddy;
@property(copy) NSString *keychainSetupErrorString; // @synthesize keychainSetupErrorString=_keychainSetupErrorString;
@property(copy) NSString *smsISOCode; // @synthesize smsISOCode=_smsISOCode;
@property(copy) NSString *smsPhoneNumber; // @synthesize smsPhoneNumber=_smsPhoneNumber;
@property(copy) NSString *smsCountryCode; // @synthesize smsCountryCode=_smsCountryCode;
@property long long icscType; // @synthesize icscType=_icscType;
@property(copy) NSString *iCloudSecurityCode; // @synthesize iCloudSecurityCode=_iCloudSecurityCode;
@property(retain) NSString *localUserSecret; // @synthesize localUserSecret=_localUserSecret;
@property BOOL wasShownFMMActivationLockPane; // @synthesize wasShownFMMActivationLockPane=_wasShownFMMActivationLockPane;
@property(retain) NSDictionary *unifiedResponseDict; // @synthesize unifiedResponseDict=_unifiedResponseDict;
@property(retain) NSDictionary *commerceAccountTOSVersionsDict; // @synthesize commerceAccountTOSVersionsDict=_commerceAccountTOSVersionsDict;
@property(retain) NSDictionary *commerceAccountResponseDict; // @synthesize commerceAccountResponseDict=_commerceAccountResponseDict;
@property BOOL commerceAccountNeedsRepair; // @synthesize commerceAccountNeedsRepair=_commerceAccountNeedsRepair;
@property(copy) NSDictionary *commerceAccountAuthResults; // @synthesize commerceAccountAuthResults=_commerceAccountAuthResults;
@property(copy) NSString *commerceAccountPET; // @synthesize commerceAccountPET=_commerceAccountPET;
@property(copy) NSString *commerceAccountUsername; // @synthesize commerceAccountUsername=_commerceAccountUsername;
@property(retain) NSString *tosVersion; // @synthesize tosVersion=_tosVersion;
@property BOOL isUpgrade; // @synthesize isUpgrade=_isUpgrade;
@property(retain) NSDictionary *mainAccountResponseDict; // @synthesize mainAccountResponseDict=_mainAccountResponseDict;
@property(retain) NSDictionary *delegatesRequestDict; // @synthesize delegatesRequestDict=_delegatesRequestDict;
@property BOOL isHSA2; // @synthesize isHSA2=_isHSA2;
@property(retain) NSImage *meCardPhoto; // @synthesize meCardPhoto=_meCardPhoto;
@property(retain) NSValue *meCardPhotoRect; // @synthesize meCardPhotoRect=_meCardPhotoRect;
@property(retain) NSData *meCardPhotoData; // @synthesize meCardPhotoData=_meCardPhotoData;
@property(copy) NSString *continuationData; // @synthesize continuationData=_continuationData;
@property(copy) NSDictionary *authenticationResultsDictionary; // @synthesize authenticationResultsDictionary=_authenticationResultsDictionary;
@property(copy) NSString *pet; // @synthesize pet=_pet;
@property(copy) NSString *ephermeralUsername; // @synthesize ephermeralUsername=_ephermeralUsername;
@property(copy) NSString *fmmUsername; // @synthesize fmmUsername=_fmmUsername;
@property BOOL hasLoggedTargetUserIn; // @synthesize hasLoggedTargetUserIn=_hasLoggedTargetUserIn;
@property BOOL isFirstAccountLogin; // @synthesize isFirstAccountLogin=_isFirstAccountLogin;
@property BOOL naggedAboutFMM; // @synthesize naggedAboutFMM=_naggedAboutFMM;
@property(retain) NSMutableSet *iCloudServicesToEnable; // @synthesize iCloudServicesToEnable;
@property BOOL abortSyncEscrowSetup; // @synthesize abortSyncEscrowSetup=_abortSyncEscrowSetup;
@property BOOL abortSyncSetup; // @synthesize abortSyncSetup=_abortSyncSetup;
@property BOOL abortSetup; // @synthesize abortSetup=_abortSetup;
@property(readonly) NSDictionary *iCloudLoginSetupDictionary; // @synthesize iCloudLoginSetupDictionary=_iCloudLoginSetupDictionary;
@property(copy) NSString *localizedMobileMeError; // @synthesize localizedMobileMeError=_localizedMobileMeError;
@property BOOL skipMobileMeDueToServerError; // @synthesize skipMobileMeDueToServerError=_skipMobileMeDueToServerError;
@property BOOL doingCommerceAuth; // @synthesize doingCommerceAuth;
@property BOOL agreedToTOS; // @synthesize agreedToTOS=_agreedToTOS;
@property BOOL needsRepair; // @synthesize needsRepair=_needsRepair;
@property(copy) NSString *password; // @synthesize password;
@property(copy) NSString *username; // @synthesize username;
@property BOOL existing; // @synthesize existing;
@property BOOL creating; // @synthesize creating;
- (void)updatedWithAuthResultsDict:(id)arg1;
- (void)transferiCloudDiagnosticsSettingsToUser;
- (BOOL)iCloudThirdPartyDiagnosticsEnabled;
- (BOOL)iCloudAppleDiagnosticsEnabled;
- (BOOL)iCloudDiagnosticsEnabled;
- (BOOL)iCloudThirdPartyDiagnosticsValueSet;
- (BOOL)iCloudAppleDiagnosticsValueSet;
- (BOOL)iCloudDiagnosticsValueSet;
- (void)loginSuccessful:(id)arg1;
@property(readonly) NSDictionary *storageUsage;
@property(readonly) NSArray *storageBasedServicesInfo;
- (void)resetState;
@property(readonly) BOOL isParentallyControlled;
@property(readonly) NSArray *familyMembers;
- (id)familyCircle;
- (void)populateMeCardPhotoWithUsername:(id)arg1 password:(id)arg2;
- (void)iCloudAsLoginHasBeenDisabled;
- (BOOL)isiCloudAsLoginUser:(id)arg1;
@property(readonly) BOOL hasPaymentInfo;
@property(readonly) BOOL isMAID;
@property(readonly) NSString *userFullname;
@property(readonly) NSDictionary *FDEState;
@property(readonly) NSDictionary *additionalRequestAttributesDict;
@property(readonly) BOOL hasAppleProvidedID;
- (BOOL)applySettings:(id *)arg1;
- (id)initWithUserAgent:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

