//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSCH3DMutable2DResources.h"

@class TSCH3DArray2D;

@interface TSCH3DArray2DResources : TSCH3DMutable2DResources
{
    TSCH3DArray2D *mResources;
}

+ (id)mResources;
+ (id)resourcesWithResource:(id)arg1;
+ (id)resourcesWithSize:(const tvec2_3b141483 *)arg1;
- (BOOL)hasResourceAtIndex:(const tvec2_3b141483 *)arg1;
- (id)firstResource;
- (id)resourceAtIndex:(const tvec2_3b141483 *)arg1;
- (void)setResource:(id)arg1 atIndex:(const tvec2_3b141483 *)arg2;
- (void)resize:(const tvec2_3b141483 *)arg1;
- (tvec2_3b141483)size;
- (void)dealloc;
- (id)initWithSize:(const tvec2_3b141483 *)arg1;

@end

