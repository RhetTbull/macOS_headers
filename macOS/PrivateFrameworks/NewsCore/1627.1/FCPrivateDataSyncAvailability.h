//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPrivateDataSyncAvailability-Protocol.h>

@class NSArray;

@interface FCPrivateDataSyncAvailability : NSObject <FCPrivateDataSyncAvailability>
{
    NSArray *_conditions;
}

+ (id)notAvailable;
+ (id)defaultAvailability;
@property(readonly, copy, nonatomic) NSArray *conditions; // @synthesize conditions=_conditions;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPrivateDataSyncingAllowed) BOOL privateDataSyncingAllowed;
- (id)initWithConditions:(id)arg1;

@end

