//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MapsSuggestionsDGVDataSource : NSObject
{
    NSMutableArray *_annotations;
    NSMutableArray *_linkOverlays;
}

- (void).cxx_destruct;
- (id)linkOverlays;
- (id)annotations;
- (id)_annotationWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)_findAnnotationEquivalentToUnserializedJSON:(id)arg1;
- (BOOL)_buildLinksWithDictFromDeserializedJson:(id)arg1;
- (BOOL)_buildAnnotationsWithDictFromDeserializedJson:(id)arg1;
- (id)_dictFromJSONString:(id)arg1;
- (id)initWithJSONString:(id)arg1;

@end

