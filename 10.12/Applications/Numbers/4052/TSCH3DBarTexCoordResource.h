//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DAbstractBarTexCoordResource.h"

@class TSCH3DBarExtrusionGeometry, TSCH3DTexCoordGeneration;

@interface TSCH3DBarTexCoordResource : TSCH3DAbstractBarTexCoordResource
{
    TSCH3DBarExtrusionGeometry *mGeometry;
    TSCH3DTexCoordGeneration *mGenerator;
}

- (id)get;
- (void)dealloc;
- (id)initWithGeometry:(id)arg1 generator:(id)arg2;

@end

