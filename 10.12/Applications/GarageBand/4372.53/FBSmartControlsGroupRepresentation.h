//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "FBSmartControlSortableRepresentation-Protocol.h"

@class NSMutableArray, NSString;

@interface FBSmartControlsGroupRepresentation : NSObject <FBSmartControlSortableRepresentation>
{
    NSMutableArray *_items;
    NSMutableArray *_texts;
    struct CGRect _frame;
}

@property(retain) NSMutableArray *texts; // @synthesize texts=_texts;
@property(retain) NSMutableArray *items; // @synthesize items=_items;
@property struct CGRect frame; // @synthesize frame=_frame;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

