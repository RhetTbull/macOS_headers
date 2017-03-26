//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSFileWrapper, NSMutableDictionary;

@interface _CLgMainStageKeyValueArchive : NSObject
{
    NSDictionary *_topLevel;
    NSArray *_encodedObjects;
    NSDictionary *_rootProperties;
    NSMutableDictionary *_objectsByID;
    NSFileWrapper *_fileWrapper;
}

- (void)dealloc;
- (long long)versionForClassName:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *rootProperties;
- (id)valueForKey:(id)arg1;
- (BOOL)containsValueForKey:(id)arg1;
- (id)_decodedObject:(id)arg1;
- (id)_decodeDecodableObject:(id)arg1;
- (id)_decodeChannelID:(id)arg1;
- (id)_decodedIdentity:(id)arg1;
- (id)_decodedColor:(id)arg1;
- (id)_decodedAttributedString:(id)arg1;
- (id)_decodedString:(id)arg1;
- (id)_decodedDictionary:(id)arg1;
- (id)_decodedArray:(id)arg1;
- (Class)classForClassName:(id)arg1;
- (id)descriptionWithLocale:(id)arg1 indent:(unsigned long long)arg2;
- (id)description;
- (id)initWithFileWrapper:(id)arg1;

@end

