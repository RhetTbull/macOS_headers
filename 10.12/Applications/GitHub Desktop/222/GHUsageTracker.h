//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AFHTTPClient, GHUsageCounts, NSDate, NSString;

@interface GHUsageTracker : NSObject
{
    BOOL _tracking;
    BOOL _shouldLogAnalytics;
    GHUsageCounts *_usageCounts;
    NSString *_lastSubmissionCalendarDateString;
    NSDate *_mostRecentWeekSubmission;
    NSDate *_mostRecentMonthSubmission;
    unsigned long long _numberOfStartupsWeek;
    unsigned long long _numberOfStartupsMonth;
    AFHTTPClient *_centralClient;
    NSDate *_startUpDate;
}

@property(readonly, copy, nonatomic) NSDate *startUpDate; // @synthesize startUpDate=_startUpDate;
@property(readonly, nonatomic) BOOL shouldLogAnalytics; // @synthesize shouldLogAnalytics=_shouldLogAnalytics;
@property(readonly, nonatomic) AFHTTPClient *centralClient; // @synthesize centralClient=_centralClient;
@property unsigned long long numberOfStartupsMonth; // @synthesize numberOfStartupsMonth=_numberOfStartupsMonth;
@property unsigned long long numberOfStartupsWeek; // @synthesize numberOfStartupsWeek=_numberOfStartupsWeek;
@property(copy) NSDate *mostRecentMonthSubmission; // @synthesize mostRecentMonthSubmission=_mostRecentMonthSubmission;
@property(copy) NSDate *mostRecentWeekSubmission; // @synthesize mostRecentWeekSubmission=_mostRecentWeekSubmission;
@property(copy) NSString *lastSubmissionCalendarDateString; // @synthesize lastSubmissionCalendarDateString=_lastSubmissionCalendarDateString;
@property(readonly, nonatomic) GHUsageCounts *usageCounts; // @synthesize usageCounts=_usageCounts;
@property BOOL tracking; // @synthesize tracking=_tracking;
- (void).cxx_destruct;
- (void)modifyCounts:(CDUnknownBlockType)arg1;
- (void)clearAccumulatedDataIncludingWeek:(BOOL)arg1 month:(BOOL)arg2;
- (id)currentCalendarDateString;
- (BOOL)isNewMonth;
- (BOOL)isNewWeek;
- (BOOL)isDateEqualToNow:(id)arg1 forUnit:(unsigned long long)arg2;
- (BOOL)needsSubmission;
- (id)systemProfileData;
- (id)usageDataIncludingWeek:(BOOL)arg1 month:(BOOL)arg2;
- (id)allDataIncludingWeek:(BOOL)arg1 month:(BOOL)arg2;
- (id)notifyAboutTracking:(BOOL)arg1;
- (id)submitIfNeeded;
- (id)initWithCloneExecutionSignals:(id)arg1 startUpDate:(id)arg2;

@end

