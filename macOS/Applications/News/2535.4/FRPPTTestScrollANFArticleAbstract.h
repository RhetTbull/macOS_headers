//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRPPTTest-Protocol.h"

@class NSString;

@interface FRPPTTestScrollANFArticleAbstract : NSObject <FRPPTTest>
{
    NSString *_articleID;
}

+ (id)testName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (id)setup;
- (id)initWithArticleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

