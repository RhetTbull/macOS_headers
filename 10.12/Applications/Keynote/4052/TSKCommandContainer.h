//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "TSKInnerCommandsProvider-Protocol.h"

@class NSMutableArray;

@interface TSKCommandContainer : TSPObject <TSKInnerCommandsProvider>
{
    NSMutableArray *mCommands;
}

- (void)redo;
- (void)undo;
- (BOOL)hasCommands;
- (void)addCommand:(id)arg1;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)populateChangePropagationMapAfterCommit:(id)arg1;
- (BOOL)modifiesAnyObjectPassingTest:(CDUnknownBlockType)arg1;

@end

