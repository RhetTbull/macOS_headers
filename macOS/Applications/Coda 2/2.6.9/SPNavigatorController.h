//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SPNavigatorController : NSWindowController
{
    NSMutableDictionary *schemaData;
    NSMutableDictionary *schemaDataFiltered;
    NSMutableDictionary *allSchemaKeys;
    NSMutableArray *infoArray;
    NSMutableArray *updatingConnections;
    NSMutableDictionary *expandStatus2;
    NSMutableDictionary *cachedSortedKeys;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedNavigatorController;
- (id)getUniqueDbIdentifierFor:(id)arg1 andConnection:(id)arg2 ignoreFields:(BOOL)arg3;
- (id)allSchemaKeysForConnection:(id)arg1;
- (id)dbStructureForConnection:(id)arg1;
- (oneway void)release;
- (id)autorelease;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

