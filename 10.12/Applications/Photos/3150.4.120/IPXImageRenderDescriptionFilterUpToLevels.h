//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PAImaging/PAImageRenderDescriptionFilterBase.h>

@interface IPXImageRenderDescriptionFilterUpToLevels : PAImageRenderDescriptionFilterBase
{
}

- (BOOL)_shouldIgnoreChangeInOperationAtIndex:(unsigned long long)arg1 renderDescription:(id)arg2;
- (id)_filteredRenderDescription:(id)arg1 index:(unsigned long long *)arg2;
- (id)newRenderOptionsWithCGImageProperties:(id)arg1 outputColorProfile:(id)arg2;
- (id)init;

@end

