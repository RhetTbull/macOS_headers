//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNRemoteMessage.h"

@interface KNRemoteStatusMessage : KNRemoteMessage
{
    unsigned long long _status;
}

@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (id)dictionaryForProtocolVersion:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1 binaryData:(id)arg2 protocolVersion:(unsigned long long)arg3;
- (id)init;
- (id)initWithStatus:(unsigned long long)arg1;
- (unsigned long long)messageID;

@end

