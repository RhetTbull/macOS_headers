//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SafariShared/WBSParsecLegacySearchResult.h>

#import <SafariShared/WBSParsecSearchSportsResult-Protocol.h>

@class NSArray, NSString, WBSParsecSearchSportsAttributionExtraCompletionItem, WBSParsecSportsScoreSummary;

@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult <WBSParsecSearchSportsResult>
{
    WBSParsecSportsScoreSummary *_scoreSummary;
    WBSParsecSearchSportsAttributionExtraCompletionItem *_extraCompletionItem;
}

+ (id)_specializedSchema;
@property(readonly, nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem; // @synthesize extraCompletionItem=_extraCompletionItem;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *individualScores;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSArray *images;
- (id)initWithDictionary:(id)arg1;

@end

