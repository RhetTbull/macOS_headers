//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Notes/ICNFMCMessageBody.h>

@class ICNFMCOutgoingMessage, NSMutableData;

@interface _ICNFMCOutgoingMessageBody : ICNFMCMessageBody
{
    NSMutableData *_rawData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableData *rawData; // @synthesize rawData=_rawData;
@property __weak ICNFMCOutgoingMessage *message;
- (id)init;

@end

