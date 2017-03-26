//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@class NSUUID, TSUCustomFormat;

@interface TSACommandAddCustomFormat : TSKCommand
{
    TSUCustomFormat *_customFormat;
    NSUUID *_key;
}

@property(copy) NSUUID *key; // @synthesize key=_key;
@property(copy) TSUCustomFormat *customFormat; // @synthesize customFormat=_customFormat;
- (void)saveToArchive:(struct AddCustomFormatCommandArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct AddCustomFormatCommandArchive *)arg1 unarchiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (id)actionString;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (void)dealloc;
- (id)initWithContext:(id)arg1 customFormat:(id)arg2;

@end

