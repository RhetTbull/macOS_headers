//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSSet;

@interface PGCurationOptions : NSObject <NSCopying>
{
    BOOL _includesAllFaces;
    BOOL _semanticalDedupingEnabled;
    BOOL _semanticalDedupingUsesAdaptiveSimilarStacking;
    BOOL _movieDedupingEnabled;
    BOOL _lastPassMovieAdditionEnabled;
    BOOL _focusOnPeople;
    BOOL _focusOnInterestingItems;
    unsigned long long _duration;
    unsigned long long _precision;
    long long _cardinalMode;
    NSSet *_uuidsOfRequiredAssets;
}

@property(nonatomic) BOOL focusOnInterestingItems; // @synthesize focusOnInterestingItems=_focusOnInterestingItems;
@property(nonatomic) BOOL focusOnPeople; // @synthesize focusOnPeople=_focusOnPeople;
@property(copy, nonatomic) NSSet *uuidsOfRequiredAssets; // @synthesize uuidsOfRequiredAssets=_uuidsOfRequiredAssets;
@property(nonatomic) long long cardinalMode; // @synthesize cardinalMode=_cardinalMode;
@property(nonatomic, getter=lastPassMovieAdditionIsEnabled) BOOL lastPassMovieAdditionEnabled; // @synthesize lastPassMovieAdditionEnabled=_lastPassMovieAdditionEnabled;
@property(nonatomic, getter=movieDedupingIsEnabled) BOOL movieDedupingEnabled; // @synthesize movieDedupingEnabled=_movieDedupingEnabled;
@property(nonatomic) BOOL semanticalDedupingUsesAdaptiveSimilarStacking; // @synthesize semanticalDedupingUsesAdaptiveSimilarStacking=_semanticalDedupingUsesAdaptiveSimilarStacking;
@property(nonatomic, getter=semanticalDedupingIsEnabled) BOOL semanticalDedupingEnabled; // @synthesize semanticalDedupingEnabled=_semanticalDedupingEnabled;
@property(nonatomic) BOOL includesAllFaces; // @synthesize includesAllFaces=_includesAllFaces;
@property(nonatomic) unsigned long long precision; // @synthesize precision=_precision;
@property(nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDuration:(unsigned long long)arg1 precision:(unsigned long long)arg2;

@end

