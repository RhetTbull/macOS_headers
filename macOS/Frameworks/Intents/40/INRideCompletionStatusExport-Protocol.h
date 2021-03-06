//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSExport.h"
#import "NSObject.h"

@class INCurrencyAmount, NSUserActivity;

@protocol INRideCompletionStatusExport <NSObject, JSExport>
+ (id)canceledMissedPickup;
+ (id)canceledByUser;
+ (id)canceledByService;
+ (id)completedWithOutstandingPaymentAmount:(INCurrencyAmount *)arg1;
+ (id)completedWithSettledPaymentAmount:(INCurrencyAmount *)arg1;
+ (id)completed;
@property(nonatomic, getter=isCanceledByService) BOOL canceledByService;
@property(getter=isOutstanding) BOOL outstanding;
@property(retain) INCurrencyAmount *paymentAmount;
@property(getter=isMissedPickup) BOOL missedPickup;
@property(readonly, getter=isCanceled) BOOL canceled;
@property(getter=isCompleted) BOOL completed;
@property(retain) NSUserActivity *completionUserActivity;
- (id)init;
@end

