//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface VCWifiAssistManager : NSObject
{
    unsigned char _wifiAssistState;
}

+ (id)sharedInstance;
@property(readonly) unsigned char wifiAssistState; // @synthesize wifiAssistState=_wifiAssistState;
- (void)removeDelegate:(id)arg1;
- (void)addDelegate:(id)arg1;
@property(readonly) BOOL isAvailable;
- (id)init;

@end

