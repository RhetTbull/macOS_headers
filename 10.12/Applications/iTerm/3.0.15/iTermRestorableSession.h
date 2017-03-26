//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface iTermRestorableSession : NSObject
{
    int _tabUniqueId;
    NSArray *_sessions;
    NSString *_terminalGuid;
    NSDictionary *_arrangement;
    long long _group;
    NSArray *_predecessors;
}

@property(copy, nonatomic) NSArray *predecessors; // @synthesize predecessors=_predecessors;
@property(nonatomic) long long group; // @synthesize group=_group;
@property(retain, nonatomic) NSDictionary *arrangement; // @synthesize arrangement=_arrangement;
@property(nonatomic) int tabUniqueId; // @synthesize tabUniqueId=_tabUniqueId;
@property(copy, nonatomic) NSString *terminalGuid; // @synthesize terminalGuid=_terminalGuid;
@property(retain, nonatomic) NSArray *sessions; // @synthesize sessions=_sessions;
- (void)dealloc;

@end

