//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/_PSModel-Protocol.h>

@interface _PSEnsembleModel : NSObject <_PSModel>
{
}

- (id)suggestionArrayWithArray:(id)arg1 appendingUniqueElementsFromArray:(id)arg2;
- (id)knnSuggestionsWithPredictionContext:(id)arg1 withMaxSuggestions:(unsigned long long)arg2 filterByBundleIds:(id)arg3;
- (id)predictWithPredictionContext:(id)arg1 maxSuggestions:(unsigned long long)arg2 filterByBundleIds:(id)arg3;

@end

