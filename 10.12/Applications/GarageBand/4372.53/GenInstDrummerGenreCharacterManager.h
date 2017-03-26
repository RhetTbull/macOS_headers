//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSURL;

@interface GenInstDrummerGenreCharacterManager : NSObject
{
    NSURL *_genreCharacterMapURL;
    NSMutableDictionary *_genreCharacterMap;
    unsigned long long _version;
}

+ (id)characterManagerFromDefaultPlist:(id)arg1;
@property unsigned long long version; // @synthesize version=_version;
@property(retain) NSMutableDictionary *genreCharacterMap; // @synthesize genreCharacterMap=_genreCharacterMap;
@property(retain) NSURL *genreCharacterMapURL; // @synthesize genreCharacterMapURL=_genreCharacterMapURL;
- (id)characterForGenreIdentifier:(id)arg1 characterIdentifier:(id)arg2;
- (id)charactersForGenreIdentifier:(id)arg1;
- (id)genreWithIdentifier:(id)arg1;
- (id)mutableGenres;
- (id)genres;
- (void)updateVersionNumber;
- (void)loadGenreCharacterMap;
- (void)removeHiddenCharacters;
- (void)processCharacters;
- (void)updateCharactersAndGenresWithLocalizableStrings;
- (void)localizeCharacter:(id)arg1 withLocalizableStringsDict:(id)arg2;
- (void)localizeGenre:(id)arg1 withLocalizableStringsDict:(id)arg2;
- (void)iterateCharactersWithBlock:(CDUnknownBlockType)arg1;
- (void)iterateGenresWithBlock:(CDUnknownBlockType)arg1;
- (id)localizableStringsDict;
- (void)setCharacterInformations:(id)arg1;
- (void)addAutoHalfTimeThresholdIfMissingForCharacter:(id)arg1;
- (void)addCharacterTypePropertyIfMissingForCharacter:(id)arg1;
- (void)checkPatchesEntryForCharacter:(id)arg1;
- (void)updateSwingTypeForCharacter:(id)arg1;
- (void)dealloc;
- (id)initWithCharacterInformations:(id)arg1 genreCharacterMapURL:(id)arg2;

@end

