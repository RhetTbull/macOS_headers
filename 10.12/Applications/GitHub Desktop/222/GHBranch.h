//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

@class NSString;

@interface GHBranch : MTLModel
{
    NSString *_shortName;
    NSString *_remoteName;
}

@property(readonly, copy, nonatomic) NSString *remoteName; // @synthesize remoteName=_remoteName;
@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *nameWithRemote;
- (id)initWithShortName:(id)arg1 remoteName:(id)arg2;

@end

