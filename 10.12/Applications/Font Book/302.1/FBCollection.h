//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBGroup.h"

#import "FBScriptableObject-Protocol.h"

@interface FBCollection : FBGroup <FBScriptableObject>
{
    long long fRef;
}

+ (BOOL)validProposedName:(id)arg1;
+ (id)newName;
+ (id)descriptorsForFamilies:(id)arg1;
+ (id)descriptorsForFaces:(id)arg1;
+ (id)collectionWithName:(id)arg1;
+ (void)initialize;
- (id)description;
- (id)imageName;
- (void)_disable;
- (void)_enable;
- (id)removeFiles:(id)arg1;
- (id)installFiles:(id)arg1 withOptions:(unsigned int)arg2;
- (id)removeFaces:(id)arg1;
- (id)addFaces:(id)arg1;
- (id)removeFamilies:(id)arg1;
- (id)addFamilies:(id)arg1;
- (id)enable;
- (id)disable;
- (id)remove;
- (id)addAndSelectWithoutEdit;
- (id)addAndSelect;
- (id)add;
- (id)renameWithName:(id)arg1 validateName:(BOOL)arg2;
- (id)renameWithName:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (BOOL)isEnabled;
- (BOOL)isDownloadableStub;
- (id)alternateImage;
- (id)image;
- (id)families;
- (id)faces;
- (id)descriptors;
- (unsigned int)flags;
- (id)displayName;
- (id)key;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (long long)_collRef;
- (void)_removeFamilies:(id)arg1;
- (void)_removeFaces:(id)arg1;
- (void)_addFamilies:(id)arg1;
- (void)_addFaces:(id)arg1;
- (void)_setName:(id)arg1;
- (id)objectSpecifier;
- (void)takeValue:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)setAppleScriptEnabled:(id)arg1;
- (void)setAppleScriptName:(id)arg1;
- (BOOL)appleScriptEnabled;
- (id)appleScriptFamilies;
- (id)appleScriptFaces;
- (id)applescriptDescription;
- (id)appleScriptLocalizedName;
- (id)appleScriptName;

@end

