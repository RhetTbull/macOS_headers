//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSULRUCache;

@interface KNRemoteImageCache : NSObject
{
    TSULRUCache *mCache;
}

+ (id)scaleImage:(id)arg1 toSize:(struct CGSize)arg2;
- (void)removeAllImages;
- (void)setImage:(id)arg1 forPageIndex:(unsigned long long)arg2;
- (id)imageForPageIndex:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

