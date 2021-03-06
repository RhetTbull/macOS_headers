//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TSCHFillSetRegistry : NSObject
{
    NSArray *mSelectableColorFillSets;
    NSArray *mSelectableImageFillSets;
    NSArray *mSelectableTextureFillSets;
    NSArray *mColorFillSets;
    NSArray *mImageFillSets;
    NSArray *mTextureFillSets;
    NSArray *mFallback3DTextureFillSets;
}

+ (void)asyncPreloadRegistry;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
@property(readonly, nonatomic) NSArray *fallback3DTextureFillSets; // @synthesize fallback3DTextureFillSets=mFallback3DTextureFillSets;
@property(readonly, nonatomic) NSArray *textureFillSets; // @synthesize textureFillSets=mTextureFillSets;
@property(readonly, nonatomic) NSArray *imageFillSets; // @synthesize imageFillSets=mImageFillSets;
@property(readonly, nonatomic) NSArray *colorFillSets; // @synthesize colorFillSets=mColorFillSets;
@property(readonly, nonatomic) NSArray *selectableTextureFillSets; // @synthesize selectableTextureFillSets=mSelectableTextureFillSets;
@property(readonly, nonatomic) NSArray *selectableImageFillSets; // @synthesize selectableImageFillSets=mSelectableImageFillSets;
@property(readonly, nonatomic) NSArray *selectableColorFillSets; // @synthesize selectableColorFillSets=mSelectableColorFillSets;
- (id)fillSetWithLookupString:(id)arg1;
- (id)p_fallback3DFillSetsForFromTextureFillSets:(id)arg1;
- (id)p_fillSetsFromPaths:(id)arg1 fillSetClass:(Class)arg2 returningSelectableFillSets:(id *)arg3;
- (id)p_selectableFillSetsByFilteringFillSets:(id)arg1 forClass:(Class)arg2;
- (id)p_arrayWithExistingBundlesInPathArray:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

