//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DvdaFileProducer.h"

@class DvdaFileCreatorAob;

@interface DvdaFileProducerAob : DvdaFileProducer
{
    DvdaFileCreatorAob *dvdaFileCreatorAob;
}

- (void)produceDvdaFile_cleanup;
- (unsigned int)produceDvdaFile_getBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (BOOL)produceDvdaFile_prepare;
- (void)dealloc;
- (id)initWithDvdaFileCreatorAob:(id)arg1;

@end

