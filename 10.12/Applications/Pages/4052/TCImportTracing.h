//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TCTracing.h"

@interface TCImportTracing : TCTracing
{
    struct TSMOpstat_s mReadingOpstat;
    struct TSMOpstat_s mProcessorOpstat;
    struct TSMOpstat_s mImportingOpstat;
}

- (void)stopImporting;
- (void)startImporting;
- (void)stopProcessors;
- (void)startProcessors;
- (void)stopReading;
- (void)startReading;
- (void)dealloc;
- (id)initWithFilename:(id)arg1;

@end

