//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EffectsPickerImageCache : NSObject
{
}

+ (id)_cachePath;
+ (id)sharedInstance;
- (void)removeImageForKey:(id)arg1;
- (void)cleanCacheExceptForKeys:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)imageForKey:(id)arg1;
- (BOOL)imageExistsForKey:(id)arg1;

@end

