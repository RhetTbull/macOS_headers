//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "OADGraphicProperties.h"

@class OADImageFill;

@interface OADImageProperties : OADGraphicProperties
{
    OADImageFill *mImageFill;
}

+ (id)defaultProperties;
- (id)description;
- (void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1;
- (BOOL)hasImageFill;
- (void)setImageFill:(id)arg1;
- (id)imageFill;
- (void)dealloc;

@end

