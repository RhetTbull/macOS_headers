//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

#import "TSKArchivedSelection-Protocol.h"

@class NSString, TPAllFootnoteSelection;

@interface TPArchivedAllFootnoteSelection : TSPObject <TSKArchivedSelection>
{
    TPAllFootnoteSelection *_selection;
}

@property(retain, nonatomic) TPAllFootnoteSelection *selection; // @synthesize selection=_selection;
- (void)saveToArchiver:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

