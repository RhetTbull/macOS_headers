//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableCommand.h"

@interface TSTCommandSetWasCut : TSTTableCommand
{
    UUIDData_5fbc143e _prevFromTableUID;
    UUIDData_5fbc143e _fromTableUID;
    BOOL _prevWasCut;
    BOOL _wasCut;
}

- (id).cxx_construct;
- (BOOL)allowNonNullFromTableID;
- (void)redoWork;
- (void)undoWork;
- (void)commitWork;
- (id)actionString;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (BOOL)shouldUpdateRandomSeed;
- (BOOL)shouldUpdateTimestamp;
- (id)initWithTableInfo:(id)arg1 fromTableUID:(const UUIDData_5fbc143e *)arg2 wasCut:(BOOL)arg3;

@end

