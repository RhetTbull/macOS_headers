//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

__attribute__((visibility("hidden")))
@interface MCSpriteLayer : CALayer
{
    unsigned long long _frameCount;
    unsigned long long _sampleIndex;
}

+ (id)defaultActionForKey:(id)arg1;
+ (BOOL)needsDisplayForKey:(id)arg1;
@property unsigned long long sampleIndex; // @synthesize sampleIndex=_sampleIndex;
@property unsigned long long frameCount; // @synthesize frameCount=_frameCount;
- (void)display;
- (unsigned long long)currentSampleIndex;
- (id)init;

@end

