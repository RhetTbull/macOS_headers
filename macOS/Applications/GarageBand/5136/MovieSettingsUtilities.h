//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MovieSettingsUtilities : NSObject
{
}

+ (BOOL)checkAudioSampleRateInMovie:(id)arg1 andApplyToSongIfNecessary:(struct CSong *)arg2;
+ (BOOL)checkFrameRateInMovie:(id)arg1 andApplyToSongIfNecessary:(struct CSong *)arg2;
+ (int)estimateSmpteFrameRateFromFPS:(double)arg1;
+ (int)showSmpteFrameRateWarningIfNecessary:(int)arg1;
+ (id)menuItemForSmpteFrameRate:(int)arg1;
+ (id)menuWithAllAvailableSmpteFrameRates;

@end

