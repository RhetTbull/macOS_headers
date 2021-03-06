//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject
{
    MPMediaEntity *_entity;
    NSString *_anchor;
    long long _deletionType;
}

@property(readonly, nonatomic) long long deletionType; // @synthesize deletionType=_deletionType;
@property(readonly, copy, nonatomic) NSString *anchor; // @synthesize anchor=_anchor;
@property(readonly, nonatomic) MPMediaEntity *entity; // @synthesize entity=_entity;
- (void).cxx_destruct;
- (id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(long long)arg3;

@end

