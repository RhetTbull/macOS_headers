//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface ScpbPresets : NSObject
{
    NSMutableArray *m_presets;
}

+ (id)pbPresets;
- (int)flagsForPresetIndex:(long long)arg1;
- (void)setGroupIDsForPresetIndex:(long long)arg1 groupIDs:(id)arg2;
- (id)groupIDsForPresetIndex:(long long)arg1;
- (long long)createPresetWithGroupIDs:(id)arg1 andName:(id)arg2;
- (BOOL)existsPresetWithGroupIDs:(id)arg1 andName:(id)arg2;
- (long long)presetIndexForName:(id)arg1;
- (void)deletePresetAtIndex:(long long)arg1;
- (void)setName:(id)arg1 forPresetIndex:(long long)arg2;
- (id)nameForPresetIndex:(long long)arg1;
- (long long)numberOfPresets;
- (void)saveCustomPresets;
- (void)dealloc;
- (id)initScpbPresets;

@end

