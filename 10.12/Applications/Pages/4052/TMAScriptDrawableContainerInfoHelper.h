//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TMAScriptingContainerInfo;

@interface TMAScriptDrawableContainerInfoHelper : NSObject
{
    NSObject<TMAScriptingContainerInfo> *_container;
}

- (id)p_infoProxiesMatchingPredicate:(CDUnknownBlockType)arg1;
- (BOOL)p_shapeIsLine:(id)arg1;
- (BOOL)p_shapeIsTextItem:(id)arg1;
- (BOOL)removeValueAtIndex:(unsigned long long)arg1 fromPropertyWithKey:(id)arg2;
- (id)scriptAllTextItems;
- (id)scriptAllTables;
- (id)scriptAllShapes;
- (id)scriptAllMovies;
- (id)scriptAllLines;
- (id)scriptAllImages;
- (id)scriptAllGroups;
- (id)scriptAllCharts;
- (id)scriptAllAudioClips;
- (id)scriptAllItems;
- (id)infoProxyForInfo:(id)arg1;
- (id)initWithContainer:(id)arg1;

@end

