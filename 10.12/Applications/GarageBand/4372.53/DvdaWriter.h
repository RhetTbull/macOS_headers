//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class DvdaFileProducer;

@interface DvdaWriter : NSObject
{
    DvdaFileProducer *fileProducer_samg;
    DvdaFileProducer *fileProducer_amgi;
    DvdaFileProducer *fileProducer_atsi;
    DvdaFileProducer *fileProducer_aobs;
}

- (void)writeDvdaFilesToDisk:(id)arg1;
- (BOOL)startDvdaBurn:(id)arg1 discName:(id)arg2;
- (BOOL)fileProducersAreDefined;
- (void)setFileProducer_aobs:(id)arg1;
- (void)setFileProducer_atsi:(id)arg1;
- (void)setFileProducer_amgi:(id)arg1;
- (void)setFileProducer_samg:(id)arg1;
- (void)dealloc;
- (id)initDvdaWriter;

@end

