//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/__HMDRegisteredIdentity.h>

@class HMDDevice;

@interface __HMDRegisteredDeviceIdentity : __HMDRegisteredIdentity
{
    HMDDevice *_device;
}

@property(readonly) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1 device:(id)arg2;
- (id)initWithIdentity:(id)arg1;

@end

