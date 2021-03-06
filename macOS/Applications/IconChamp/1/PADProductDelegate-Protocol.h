//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, PADCheckoutData;

@protocol PADProductDelegate <NSObject>

@optional
- (void)productPurchased:(PADCheckoutData *)arg1;
- (void)productDeactivated;
- (void)productActivated;
- (void)v3LicenseMigrated:(NSString *)arg1 type:(long long)arg2;
- (BOOL)shouldMigrateExistingV3License:(NSString *)arg1 type:(long long)arg2;
- (void)productDidUpdateRemotely:(NSDictionary *)arg1;
@end

