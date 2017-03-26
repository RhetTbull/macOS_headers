//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPXSearchSuggestion-Protocol.h"

@class NSString;
@protocol IPXSearchSuggester, IPXSearchSuggestionViewProvider;

@interface IPXMapKitSearchSuggestion : NSObject <IPXSearchSuggestion>
{
    id <IPXSearchSuggestionViewProvider> _suggestionViewProvider;
    NSString *_searchString;
}

@property(retain) NSString *searchString; // @synthesize searchString=_searchString;
@property __weak id <IPXSearchSuggestionViewProvider> suggestionViewProvider; // @synthesize suggestionViewProvider=_suggestionViewProvider;
- (void).cxx_destruct;
@property(readonly) NSString *displayString;
- (void)validateSuggestion:(CDUnknownBlockType)arg1;
- (BOOL)needsValidation;
- (void)sendFeedback;
- (id)titleHighlightRanges;
- (BOOL)getLocationType:(long long *)arg1;
- (BOOL)getMapRect:(CDStruct_02837cd9 *)arg1 centeredOnCoordinate:(BOOL)arg2;
- (BOOL)getCoordinate:(struct CLLocationCoordinate2D *)arg1;
@property(readonly, nonatomic) BOOL hasAlternateName;
@property(readonly) NSString *alternateName;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSString *selectionDisplayString;
@property(retain) id <IPXSearchSuggester> sourceSuggester;
@property(readonly) Class superclass;

@end

