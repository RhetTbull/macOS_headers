//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNAutocompleteQueryCacheMissLogging.h"

@class NSObject<OS_os_log>, NSString;

@interface _CNAutocompleteQueryCacheMissOSLogging : NSObject <CNAutocompleteQueryCacheMissLogging>
{
    NSObject<OS_os_log> *_os_log;
}

@property(readonly) NSObject<OS_os_log> *os_log; // @synthesize os_log=_os_log;
- (void).cxx_destruct;
- (void)didReturnCacheFalsePositives:(id)arg1;
- (void)didReturnCacheFalseNegatives:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

