//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDate, NSMutableString, NSURL;
@protocol PVFileConversionDelegate;

@interface PVPSFileConversionOperation : NSOperation
{
    id <PVFileConversionDelegate> _delegate;
    NSMutableString *_messagesBuffer;
    NSURL *_sourceFileURL;
    NSURL *_destinationFileURL;
    struct CGPSConverter *_psConverter;
    NSDate *_startDate;
    long long _inputPageCount;
    long long _outputPageCount;
    BOOL _indeterminate;
    BOOL _didSucceed;
    double _progress;
}

@property(readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property double progress; // @synthesize progress=_progress;
@property(getter=isIndeterminate) BOOL indeterminate; // @synthesize indeterminate=_indeterminate;
- (void).cxx_destruct;
- (id)removePSMessageTokensFromString:(id)arg1;
- (id)parseMessages;
- (void)converterMessage:(id)arg1;
- (void)converterNoteProgress;
- (void)converterEndPage:(long long)arg1 pageInfo:(id)arg2;
- (BOOL)convertPSFileToPDF;
- (long long)numberOfPagesInPSFile:(id)arg1;
- (long long)parsePagesCommmentFromString:(id)arg1 fromEnd:(BOOL)arg2 isAttended:(char *)arg3;
- (void)main;
- (void)cancel;
@property(readonly) unsigned long long pagesConverted;
@property(readonly) unsigned long long totalPages;
- (void)startConversion;
- (void)dealloc;
- (id)initWithPSFile:(id)arg1 toDestPath:(id)arg2 delegate:(id)arg3;

@end

