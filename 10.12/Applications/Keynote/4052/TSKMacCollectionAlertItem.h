//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSString;

@interface TSKMacCollectionAlertItem : NSObject
{
    NSString *mMessageText;
    NSString *mInformativeText;
    NSArray *mRecoveryOptions;
    id mRecoveryAttempter;
    NSError *mError;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=mError;
@property(readonly, nonatomic) NSString *summaryText;
@property(readonly, nonatomic) id recoveryAttempter;
@property(readonly, nonatomic) NSArray *recoveryOptions;
@property(readonly, nonatomic) NSString *informativeText;
@property(readonly, nonatomic) NSString *messageText;
- (void)dealloc;
- (id)init;
- (id)initWithError:(id)arg1;

@end

