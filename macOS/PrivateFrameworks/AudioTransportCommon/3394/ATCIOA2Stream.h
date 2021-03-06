//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ATCIOA2StreamFormat, IOKConnection, IOKService, NSArray;

@interface ATCIOA2Stream : NSObject
{
    IOKService *_service;
    IOKConnection *_connection;
    unsigned long long _index;
    unsigned int _physicalID;
    BOOL _input;
    unsigned int _startingChannel;
    ATCIOA2StreamFormat *_currentFormat;
    NSArray *_availableFormats;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int startingChannel; // @synthesize startingChannel=_startingChannel;
@property(readonly, copy, nonatomic) NSArray *availableFormats; // @synthesize availableFormats=_availableFormats;
@property(readonly, copy, nonatomic) ATCIOA2StreamFormat *currentFormat; // @synthesize currentFormat=_currentFormat;
@property(readonly, nonatomic, getter=isInput) BOOL input; // @synthesize input=_input;
- (id)initWithService:(id)arg1 connection:(id)arg2 index:(unsigned long long)arg3 input:(BOOL)arg4 description:(id)arg5;

@end

