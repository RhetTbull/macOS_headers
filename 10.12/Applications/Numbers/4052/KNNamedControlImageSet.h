//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKMacControlImageSet.h"

@class NSString;

@interface KNNamedControlImageSet : TSKMacControlImageSet
{
    NSString *mName;
}

- (id)imageSetBySubstitutingImages:(id)arg1;
- (id)p_imageNameForControlAppearance:(unsigned long long)arg1;
- (id)p_imageForControlAppearance:(unsigned long long)arg1;
- (id)imageForControlAppearance:(unsigned long long)arg1 synthesizableControlAppearance:(inout unsigned long long *)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

