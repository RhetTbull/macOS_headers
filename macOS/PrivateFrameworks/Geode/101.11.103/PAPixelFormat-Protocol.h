//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Geode/NSObject-Protocol.h>

@class NSString;
@protocol PAPixelFormat;

@protocol PAPixelFormat <NSObject>
@property(readonly) BOOL hasAlpha;
@property(readonly) unsigned long long bitsPerSample;
@property(readonly) unsigned long long bitsPerPixel;
@property(readonly) unsigned long long numberOfComponents;
@property(readonly) NSString *name;
- (BOOL)isEqualToPixelFormat:(id <PAPixelFormat>)arg1;
@end

