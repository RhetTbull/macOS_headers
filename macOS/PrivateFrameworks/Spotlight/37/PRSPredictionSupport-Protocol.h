//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol PRSPredictionSupport <NSObject>
@property(nonatomic) BOOL isEngagedWith;
@property(nonatomic) BOOL isMostRecentlyUsed;
@property(nonatomic) BOOL isParsecTopHit;
@property(nonatomic) BOOL isUsed;
@property(nonatomic) BOOL isParsec;
@property(nonatomic) BOOL isDisplayNameMatch;
@property(nonatomic) BOOL isAlternateNameMatch;
@property(nonatomic) BOOL queryEverLaunched;
@property(nonatomic) BOOL queryLastLaunched;
@property(nonatomic) BOOL isStaticTopHit;
@property(nonatomic) BOOL isPredictedTopHit;
@property(nonatomic) BOOL resultLocationInteresting;
@property(nonatomic) BOOL doesContentMatch;
@property(nonatomic) BOOL keyWordMatch;
@property(nonatomic) BOOL isPremium;
@property(nonatomic) unsigned long long interestingTimeScore;
@property(nonatomic) unsigned long long contentMatchScore;
@property(nonatomic) unsigned long long resultEngagementScore;
@property(nonatomic) unsigned long long alternateNameMatchScore;
@property(nonatomic) unsigned long long displayNameMatchScore;
@property(nonatomic) unsigned long long predicted;
@property(nonatomic) unsigned long long usedCount;
@property(nonatomic) unsigned long long topHit;
@property(nonatomic) unsigned long long queryIndependentScore;
@property(nonatomic) unsigned long long engagementScore;
@property(nonatomic) double lastUsedTime;
@property(retain, nonatomic) NSString *bundleID;
@property(retain, nonatomic) NSString *groupName;
@property(retain, nonatomic) NSString *categoryForCP;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *type;
@end

