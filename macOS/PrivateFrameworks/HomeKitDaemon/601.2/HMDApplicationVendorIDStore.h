//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@interface HMDApplicationVendorIDStore : HMFObject
{
}

+ (id)sharedStore;
- (id)machUUIDsForApplication:(id)arg1;
- (void)removeVendorIDForApplicationBundleId:(id)arg1;
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3;
- (void)addVendorIDData:(id)arg1 applicationBundleId:(id)arg2;
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 spiClient:(BOOL)arg3;
- (id)vendorIDForApplication:(id)arg1;
- (id)init;

@end

