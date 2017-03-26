//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPStorageActionCommand.h"

@class NSArray;

@interface TSWPCleanBibliographyCommand : TSWPStorageActionCommand
{
    NSArray *_bibliographyFields;
    NSArray *_citationRecordsToUpdate;
}

@property(retain, nonatomic) NSArray *citationRecordsToUpdate; // @synthesize citationRecordsToUpdate=_citationRecordsToUpdate;
@property(retain, nonatomic) NSArray *bibliographyFields; // @synthesize bibliographyFields=_bibliographyFields;
- (struct _NSRange)p_applyCitationRecords:(id)arg1 toBibliographyField:(id)arg2 transaction:(struct TSWPStorageTransaction *)arg3;
- (struct _NSRange)doCommitWithNewTransaction:(struct TSWPStorageTransaction *)arg1;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 bibliographyFields:(id)arg2 citationRecordsToUpdate:(id)arg3;

@end

