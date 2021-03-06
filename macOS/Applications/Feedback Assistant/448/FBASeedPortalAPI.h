//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBALoginManagerDelegate-Protocol.h"

@class FBALoginManager, FBAUser, NSManagedObjectContext, NSMutableArray, NSString, NSURL;
@protocol FBABackgroundDataClient><FBALoginManagerDelegate, FBAForegroundDataClient><FBALoginManagerDelegate;

@interface FBASeedPortalAPI : NSObject <FBALoginManagerDelegate>
{
    short _environment;
    FBALoginManager *_loginManager;
    id <FBAForegroundDataClient><FBALoginManagerDelegate> _foregroundClient;
    id <FBABackgroundDataClient><FBALoginManagerDelegate> _backgroundClient;
    NSURL *_seedPortalURL;
    NSURL *_feedbackURL;
    NSMutableArray *_deletedResponseIDs;
    FBAUser *_loggedInUser;
    NSManagedObjectContext *__managedObjectContext;
}

+ (id)itemsKey;
+ (id)deletedKey;
+ (id)upsertedKey;
- (void).cxx_destruct;
@property __weak NSManagedObjectContext *_managedObjectContext; // @synthesize _managedObjectContext=__managedObjectContext;
@property(retain, nonatomic) FBAUser *loggedInUser; // @synthesize loggedInUser=_loggedInUser;
@property(retain, nonatomic) NSMutableArray *deletedResponseIDs; // @synthesize deletedResponseIDs=_deletedResponseIDs;
@property(readonly) NSURL *feedbackURL; // @synthesize feedbackURL=_feedbackURL;
@property(readonly) NSURL *seedPortalURL; // @synthesize seedPortalURL=_seedPortalURL;
@property short environment; // @synthesize environment=_environment;
@property(retain, nonatomic) id <FBABackgroundDataClient><FBALoginManagerDelegate> backgroundClient; // @synthesize backgroundClient=_backgroundClient;
@property(retain, nonatomic) id <FBAForegroundDataClient><FBALoginManagerDelegate> foregroundClient; // @synthesize foregroundClient=_foregroundClient;
@property(nonatomic) __weak FBALoginManager *loginManager; // @synthesize loginManager=_loginManager;
- (id)saveChangesIntoContext:(id)arg1 URLUsed:(id)arg2;
- (id)_filterForValue;
- (id)managedObjectContext;
- (void)performHeartbeatWithSuccess:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)getFileDownloadURLForFilePromiseUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)hostUrl;
- (void)getOngoingUploadTasks:(CDUnknownBlockType)arg1;
- (id)beginFileUpload:(id)arg1 toFilerWithToken:(id)arg2 inBackground:(BOOL)arg3;
- (void)getFilerTokenForEntity:(unsigned long long)arg1 withID:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)getRemoteDeviceTokenWithSuccess:(CDUnknownBlockType)arg1 error:(CDUnknownBlockType)arg2;
- (void)acknowledgeAnnouncementWithID:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)updateAnnouncementWithID:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)fetchAnnouncementForContentItem:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)feedbackFromURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)feedbackForSurveyFeedbackID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)feedbackForFollowupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)feedbackForFeedbackID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)feedbackForFormResponseID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeFeedbackItemWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)getFeedbackFollowupWithID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendFollowupResponseWithData:(id)arg1 forFollowupID:(id)arg2 feedbackID:(id)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)createUnsolicitedFollowupForFeedbackWithID:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)getFeedbackStatusForFeedbackID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getFormResponseStubWithID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)markCompleteForFormResponseWithID:(id)arg1 bugFormID:(id)arg2 withFiles:(BOOL)arg3 metadata:(id)arg4 success:(CDUnknownBlockType)arg5 error:(CDUnknownBlockType)arg6;
- (void)saveAnswersForFormResponseWithID:(id)arg1 answers:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)createFormResponseForBugForm:(id)arg1 inTeam:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)deleteFormResponseWithID:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)deleteFollowupWithID:(id)arg1 feedbackID:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)updateFormResponseWithID:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)fetchBugFormWithID:(id)arg1 forTeamID:(id)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)_reportUnderlyingError:(id)arg1 withFBAErrorCode:(long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)insertContentItemsFromJsonData:(id)arg1;
- (void)updateContentItemsForTeam:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)updateContentItemsWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateFormItemsForUser:(id)arg1 inTeam:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateFormItemsForUser:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)deregisterAPNSWithDeviceToken:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)registerAPNSWithRequestDictionary:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)seedPortalLoginWithDeviceToken:(id)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)seedPortalLoginWithAuthKitSession:(id)arg1 device:(id)arg2 authenticationResults:(id)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (id)filePromiseDownloadURLForUUID:(id)arg1;
- (id)closeFeedbackURLForID:(id)arg1;
- (id)feedbackDetailsURLForSurveyFeedbackID:(id)arg1;
- (id)feedbackDetailsURLForFollowupID:(id)arg1;
- (id)feedbackDetailsURLForFeedbackID:(id)arg1;
- (id)feedbackDetailsURLForFormResponseID:(id)arg1;
- (id)feedbackFollowupURLForID:(id)arg1;
- (id)feedbackStatusURLForFeedbackID:(id)arg1;
- (id)formResponseStubURLForID:(id)arg1;
- (id)formItemsURL;
- (id)contentItemsURL;
- (id)loginWithAuthKitURL;
- (id)heartbeatURL;
- (id)filerURL;
- (id)filerURLWithDefaults:(id)arg1;
- (id)formResponseTokenURL;
- (id)formResponseTokenURLWithDefaults:(id)arg1;
- (id)generateDeviceTokenForRemoteURL;
- (id)createFollowupResponseURLForFeedbackID:(id)arg1 followupID:(id)arg2;
- (id)deleteFollowupURLForFollowupID:(id)arg1 feedbackID:(id)arg2;
- (id)unsolicitedFollowupResponseURLForFeedbackID:(id)arg1;
- (id)announcementAcknowledgementURL;
- (id)announcementURLForID:(id)arg1;
- (id)formResponseUpdateURLForID:(id)arg1 bugFormID:(id)arg2;
- (id)updateAnswerURLForQuestionID:(id)arg1 answerID:(id)arg2;
- (id)formResponsePutAnswersURLForID:(id)arg1;
- (id)createResponseURLForBugFormID:(id)arg1;
- (id)formResponseURLForID:(id)arg1;
- (id)bugFormURLForID:(id)arg1;
- (id)unregisterAPNSTokenURL;
- (id)registerAPNSTokenURL;
- (id)loginWithTokenURL;
- (id)loginWithDSURL;
- (void)didLogInWithLoginUserInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didLogOutWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithEnvironment:(short)arg1 foregroundClient:(id)arg2 backgroundClient:(id)arg3;
- (id)wrapFeedbackIDs:(id)arg1;
- (void)assignFeedbackWithFeedbackIDs:(id)arg1 inTeamID:(long long)arg2 toParticipantID:(long long)arg3 success:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)getParticipantsWithTeamID:(long long)arg1 success:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)demoteFeedbackWithFeedbackIDs:(id)arg1 fromTeamID:(long long)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)promoteFeedbackWithFeedbackIDs:(id)arg1 toTeamID:(long long)arg2 success:(CDUnknownBlockType)arg3 error:(CDUnknownBlockType)arg4;
- (void)updateTeamsWithCompletion:(CDUnknownBlockType)arg1;
- (id)assignURLForTeamID:(id)arg1 participantID:(id)arg2;
- (id)participantsURLForTeamID:(id)arg1;
- (id)demoteURLForTeamID:(id)arg1;
- (id)promoteURLForTeamID:(id)arg1;
- (id)createResponseURLForBugFormID:(id)arg1 teamID:(id)arg2;
- (id)bugFormURLForID:(id)arg1 teamID:(id)arg2;
- (id)formItemsURLForTeamID:(id)arg1;
- (id)contentItemsURLForTeamID:(id)arg1;
@property(nonatomic, readonly) NSURL *teamsURL;
- (id)envelopedObjectFrom:(id)arg1;
- (void)handleDataResponseFor:(id)arg1 data:(id)arg2 success:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)envelopedDELETEForURL:(id)arg1 success:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)envelopedPOSTForURL:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)envelopedPUTForURL:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)envelopedGETForURL:(id)arg1 success:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

