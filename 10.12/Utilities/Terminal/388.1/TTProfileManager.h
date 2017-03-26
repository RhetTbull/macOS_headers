//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, TTProfile;

@interface TTProfileManager : NSObject
{
    NSMutableArray *_profiles;
    TTProfile *_defaultProfile;
    TTProfile *_startupProfile;
    TTProfile *_copyAttributesProfile;
    TTProfile *_commandProfile;
    TTProfile *_connectionProfile;
    TTProfile *_manPageProfile;
    BOOL _isLoadingFromDefaults;
}

+ (id)sharedProfileManager;
+ (void)initialize;
- (id)profileSavePanel;
- (void)setManPageProfile:(id)arg1;
- (id)manPageProfile;
- (void)setConnectionProfile:(id)arg1;
- (id)connectionProfile;
- (void)setCommandProfile:(id)arg1;
- (id)commandProfile;
- (void)setCopyAttributesProfile:(id)arg1;
- (id)copyAttributesProfile;
- (void)setStartupProfile:(id)arg1;
- (id)startupProfile;
- (void)setDefaultProfile:(id)arg1;
- (id)defaultProfile;
- (id)uniqueProfileNameWithBase:(id)arg1;
- (void)setProfile:(id)arg1 forName:(id)arg2;
- (id)profileForCommand:(id)arg1 defaultProfile:(id)arg2;
- (id)profileWithName:(id)arg1;
- (void)replaceObjectInProfilesAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromProfilesAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inProfilesAtIndex:(unsigned long long)arg2;
- (unsigned long long)countOfProfiles;
- (void)setProfiles:(id)arg1;
- (id)profiles;
- (void)synchronize;
- (void)dealloc;
- (id)init;
- (void)undoCompatibleReplaceObjects:(id)arg1 withObjects:(id)arg2 atKeyPath:(id)arg3;
- (void)undoCompatibleRemoveObjects:(id)arg1 fromKeyPath:(id)arg2;
- (void)undoCompatibleInsertObjects:(id)arg1 intoKeyPath:(id)arg2;
- (void)undoCompatibleSetValue:(id)arg1 forKeyPath:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)loadFromDefaults:(id)arg1;
- (void)saveToDefaults:(id)arg1;

@end

