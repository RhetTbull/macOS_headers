//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

@interface WITListDefinitionState : NSObject
{
    NSMutableArray *_levels;
    NSMutableSet *_usedWDLists;
}

@property(readonly, nonatomic) NSMutableSet *usedWDLists; // @synthesize usedWDLists=_usedWDLists;
@property(readonly, nonatomic) NSMutableArray *levels; // @synthesize levels=_levels;
- (void)dealloc;
- (id)init;

@end

