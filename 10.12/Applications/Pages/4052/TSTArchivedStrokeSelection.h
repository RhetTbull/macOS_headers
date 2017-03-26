//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "TSKArchivedSelection-Protocol.h"

@class NSString, TSKSelection, TSTStrokeSelection;

@interface TSTArchivedStrokeSelection : TSPObject <TSKArchivedSelection>
{
    TSTStrokeSelection *mStrokeSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mStrokeSelection;
@property(readonly, copy) NSString *description;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

