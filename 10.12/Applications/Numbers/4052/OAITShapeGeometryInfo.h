//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface OAITShapeGeometryInfo : NSObject
{
    struct CGRect mGeometryCoordSpace;
    struct CGRect mTextBodyRect;
    NSMutableArray *mPathInfos;
}

- (id)pathInfos;
- (void)addPathInfo:(id)arg1;
- (id)pathInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathInfoCount;
- (void)setTextBodyRect:(struct CGRect)arg1;
- (struct CGRect)textBodyRect;
- (void)setGeometryCoordSpace:(struct CGRect)arg1;
- (struct CGRect)geometryCoordSpace;
- (void)dealloc;
- (id)init;

@end

