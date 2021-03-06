//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ActionKit/NSObject-Protocol.h>

@class WFCorrectSpellingIntent;

@protocol WFCorrectSpellingIntentHandling <NSObject>
- (void)resolveTextForCorrectSpelling:(WFCorrectSpellingIntent *)arg1 withCompletion:(void (^)(NSArray *))arg2;
- (void)handleCorrectSpelling:(WFCorrectSpellingIntent *)arg1 completion:(void (^)(WFCorrectSpellingIntentResponse *))arg2;

@optional
- (void)confirmCorrectSpelling:(WFCorrectSpellingIntent *)arg1 completion:(void (^)(WFCorrectSpellingIntentResponse *))arg2;
@end

