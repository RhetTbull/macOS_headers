//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AUDataModel.h"

@class NSArray, NSMutableArray, NSString;

@interface AUGeneralModel : AUDataModel
{
    BOOL isUnconfigured;
    BOOL isAudioDevice;
    NSString *baseStationName;
    NSString *baseStationPassword;
    NSString *baseStationPasswordVerify;
    BOOL baseStationPasswordRememberInKeychain;
    BOOL allowSetupOverWAN;
    BOOL supportsiCloud;
    BOOL showBTMMUsers;
    BOOL allowMultipleBTMMUsers;
    NSMutableArray *btmmUsers;
    BOOL btmmUsersNeedToReAuthed;
    BOOL sendAnonymousStatsToApple;
    BOOL showAnonymousDataNotSentMessage;
    NSMutableArray *anonymousStats;
    NSArray *previousAnonymousStatsEntries;
    BOOL showNoDataCollectedLabel;
    BOOL showAnonymousStatsUI;
    BOOL canShowAnonymousStatsUI;
}

@property(retain, nonatomic) NSArray *previousAnonymousStatsEntries; // @synthesize previousAnonymousStatsEntries;
@property(nonatomic) BOOL showNoDataCollectedLabel; // @synthesize showNoDataCollectedLabel;
@property(retain, nonatomic) NSMutableArray *anonymousStats; // @synthesize anonymousStats;
@property(nonatomic) BOOL showAnonymousDataNotSentMessage; // @synthesize showAnonymousDataNotSentMessage;
@property(nonatomic) BOOL sendAnonymousStatsToApple; // @synthesize sendAnonymousStatsToApple;
@property(nonatomic) BOOL canShowAnonymousStatsUI; // @synthesize canShowAnonymousStatsUI;
@property(nonatomic) BOOL showAnonymousStatsUI; // @synthesize showAnonymousStatsUI;
@property(nonatomic) BOOL btmmUsersNeedToReAuthed; // @synthesize btmmUsersNeedToReAuthed;
@property(retain, nonatomic) NSMutableArray *btmmUsers; // @synthesize btmmUsers;
@property(nonatomic) BOOL allowMultipleBTMMUsers; // @synthesize allowMultipleBTMMUsers;
@property(nonatomic) BOOL showBTMMUsers; // @synthesize showBTMMUsers;
@property(nonatomic) BOOL supportsiCloud; // @synthesize supportsiCloud;
@property(nonatomic) BOOL allowSetupOverWAN; // @synthesize allowSetupOverWAN;
@property(nonatomic) BOOL baseStationPasswordRememberInKeychain; // @synthesize baseStationPasswordRememberInKeychain;
@property(retain, nonatomic) NSString *baseStationPasswordVerify; // @synthesize baseStationPasswordVerify;
@property(retain, nonatomic) NSString *baseStationPassword; // @synthesize baseStationPassword;
@property(retain, nonatomic) NSString *baseStationName; // @synthesize baseStationName;
@property(nonatomic) BOOL isAudioDevice; // @synthesize isAudioDevice;
@property(nonatomic) BOOL isUnconfigured; // @synthesize isUnconfigured;
- (id)errors;
- (BOOL)valid;
- (BOOL)validateModel:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)saveData;
- (void)loadAnonymousStatsIntoTree;
- (void)loadData;
- (id)getInitialDNSHostname;
- (void)dealloc;
- (id)init;

@end

