//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@class NSArray, NSDictionary, NSError, NSString, TSKCommand;

@interface TSKOutgoingCommandQueueItem : TSPObject
{
    NSDictionary *_dataUUIDMap;
    long long _serializedJSONStringDispatchOnceToken;
    NSString *_serializedJSONString;
    NSError *_serializedJSONStringError;
    long long _estimatedSerializedJSONLengthDispatchOnceToken;
    unsigned long long _estimatedSerializedJSONLength;
    long long _dspArrayOnceToken;
    NSArray *_dspArray;
    TSKCommand *_command;
    NSString *_serializedJSONStringWithoutDataBase64Encoding;
}

+ (id)p_newDeserializedCommandWithDSPArray:(id)arg1 commandIdentifier:(id)arg2 forbidBase64Decoding:(BOOL)arg3 context:(id)arg4;
+ (id)p_dspArrayFromSerializedJSONString:(id)arg1 commandIdentifier:(id)arg2 context:(id)arg3;
@property(readonly, nonatomic) NSString *serializedJSONStringWithoutDataBase64Encoding; // @synthesize serializedJSONStringWithoutDataBase64Encoding=_serializedJSONStringWithoutDataBase64Encoding;
@property(readonly, nonatomic) TSKCommand *command; // @synthesize command=_command;
- (id)p_placeholderInfosFromSerializedJSONStringWithoutDataBase64Encoding:(id)arg1 dataUUIDMap:(id)arg2 serializedJSONStringLengthDelta:(unsigned long long *)arg3 error:(id *)arg4 newInfoBlock:(CDUnknownBlockType)arg5;
- (unsigned long long)p_estimatedSerializedJSONStringLengthFromSerializedJSONStringWithoutDataBase64Encoding:(id)arg1 dataUUIDMap:(id)arg2;
- (id)p_newSerializedJSONStringFromSerializedJSONStringWithoutDataBase64Encoding:(id)arg1 dataUUIDMap:(id)arg2 error:(id *)arg3;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)description;
- (id)copyWithCommand:(id)arg1;
- (id)copyWithNewDeserializedCommand;
- (id)newDeserializedCommand;
- (id)p_newSerializedJSONStringForCollaborationTrace:(BOOL)arg1 error:(id *)arg2;
- (id)newSerializedJSONStringReturningError:(out id *)arg1;
@property(readonly, nonatomic) unsigned long long estimatedSerializedJSONLength;
@property(readonly, nonatomic) BOOL hasSerializedJSONString;
- (void)dealloc;
- (id)initWithCommand:(id)arg1 serializedJSONStringWithoutDataBase64Encoding:(id)arg2 dataUUIDMap:(id)arg3;
- (id)initWithContext:(id)arg1;

@end

