//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface iTermColorPresets : NSObject
{
}

+ (void)addColorPreset:(id)arg1 withColors:(id)arg2;
+ (id)nameOfPresetsEqualTo:(id)arg1;
+ (id)presetNameFromFilename:(id)arg1;
+ (struct NSDictionary *)presetWithName:(id)arg1;
+ (void)deletePresetWithName:(id)arg1;
+ (BOOL)importColorPresetFromFile:(id)arg1;
+ (struct NSDictionary *)builtInColorPresets;
+ (struct NSDictionary *)customColorPresets;

@end

