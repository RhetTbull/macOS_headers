//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CLgTrackInfo : NSObject
{
    struct CGRect trackRect;
    long long trackTag;
    NSString *trackValue;
}

- (void)setTrackValue:(id)arg1;
- (void)setTrackTag:(long long)arg1;
- (void)setTrackRect:(struct CGRect)arg1;
- (id)trackValue;
- (long long)trackTag;
- (struct CGRect)trackRect;
- (void)dealloc;
- (id)init;

@end

