//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsSuggestionsObject-Protocol.h"

@class CNContact, GEOMapItemStorage, MapsSuggestionsEntry, NSString;
@protocol MapsSuggestionsResourceDepot, MapsSuggestionsSourceDelegate;

@protocol MapsSuggestionsSource <MapsSuggestionsObject>
+ (id)new;
+ (unsigned long long)disposition;
+ (BOOL)isEnabled;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
- (void)feedbackForContact:(CNContact *)arg1 action:(long long)arg2;
- (void)feedbackForMapItem:(GEOMapItemStorage *)arg1 action:(long long)arg2;
- (void)feedbackForEntry:(MapsSuggestionsEntry *)arg1 action:(long long)arg2;
- (BOOL)removeEntry:(MapsSuggestionsEntry *)arg1 behavior:(long long)arg2 handler:(void (^)(void))arg3;
- (BOOL)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntriesOfType:(long long)arg1 handler:(void (^)(void))arg2;
- (double)updateSuggestionEntriesWithHandler:(void (^)(void))arg1;
- (void)stop;
- (void)start;
- (id)initFromResourceDepot:(id <MapsSuggestionsResourceDepot>)arg1 name:(NSString *)arg2;
- (id)init;
@end

