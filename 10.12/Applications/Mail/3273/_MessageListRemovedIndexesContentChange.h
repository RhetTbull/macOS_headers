//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MessageListContentChange-Protocol.h"

@class NSIndexSet, NSString;

@interface _MessageListRemovedIndexesContentChange : NSObject <MessageListContentChange>
{
    NSIndexSet *_indexes;
    unsigned long long _animationOptions;
}

@property(readonly, nonatomic) unsigned long long animationOptions; // @synthesize animationOptions=_animationOptions;
@property(readonly, copy, nonatomic) NSIndexSet *indexes; // @synthesize indexes=_indexes;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (unsigned long long)shiftIndex:(unsigned long long)arg1;
- (void)applyToTableView:(id)arg1;
- (id)init;
- (id)initWithIndexes:(id)arg1 animationOptions:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

