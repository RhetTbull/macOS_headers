//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADDrawableProperties;
@protocol OADClient, OADDrawableContainer;

@interface OADDrawable : NSObject
{
    BOOL mHidden;
    unsigned int mId;
    unsigned int mAltId;
    OADDrawableProperties *mDrawableProperties;
    id <OADClient> mClientData;
    OADDrawable<OADDrawableContainer> *mParent;
}

+ (unsigned int)generateOADDrawableId:(id)arg1;
- (id)description;
- (id)createOrientedBoundsWithBounds:(struct CGRect)arg1;
- (void)removeUnnecessaryOverrides;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)ensureClientDataOfClass:(Class)arg1;
- (id)clientData;
- (void)setClientData:(id)arg1;
- (void)setDrawableProperties:(id)arg1;
- (id)drawableProperties;
- (void)setAltId:(unsigned int)arg1;
- (unsigned int)altId;
- (void)setId:(unsigned int)arg1;
- (unsigned int)id;
- (void)setHidden:(BOOL)arg1;
- (BOOL)hidden;
- (void)dealloc;
- (id)initWithPropertiesClass:(Class)arg1;
- (long long)compareId:(id)arg1;

@end

