//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OADDrawableProperties.h"

#import "OADEffectsParent-Protocol.h"
#import "OADProperties3DParent-Protocol.h"

@class NSArray, NSString, OADFill, OADScene3D, OADShape3D;

@interface OADGroupProperties : OADDrawableProperties <OADEffectsParent, OADProperties3DParent>
{
    OADFill *mFill;
    NSArray *mEffects;
    OADScene3D *mScene3D;
    OADShape3D *mShape3D;
}

+ (id)defaultProperties;
@property(readonly, copy) NSString *description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)hasShape3D;
- (void)setShape3D:(id)arg1;
- (id)shape3D;
- (BOOL)hasScene3D;
- (void)setScene3D:(id)arg1;
- (id)scene3D;
- (BOOL)hasEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (BOOL)hasFill;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)dealloc;
- (id)initWithDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

