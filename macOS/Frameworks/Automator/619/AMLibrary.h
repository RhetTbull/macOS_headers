//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMGroup, NSArray, NSCountedSet;

@interface AMLibrary : NSObject
{
    NSArray *_actionsLibrary;
    NSArray *_variablesLibrary;
    AMGroup *_applicationsGroup;
    AMGroup *_categoriesGroup;
    unsigned long long _organizationStyle;
    NSCountedSet *_observedGroups;
}

+ (id)sharedLibrary;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSCountedSet *observedGroups; // @synthesize observedGroups=_observedGroups;
@property(nonatomic) unsigned long long organizationStyle; // @synthesize organizationStyle=_organizationStyle;
@property(retain, nonatomic) NSArray *variablesLibrary; // @synthesize variablesLibrary=_variablesLibrary;
@property(retain, nonatomic) NSArray *actionsLibrary; // @synthesize actionsLibrary=_actionsLibrary;
- (void)organizeActions:(id)arg1 byKey:(id)arg2 inGroup:(id)arg3;
- (void)organizeAction:(id)arg1 byKey:(id)arg2 inGroup:(id)arg3;
@property(retain, nonatomic) AMGroup *categoriesGroup;
@property(retain, nonatomic) AMGroup *applicationsGroup;
- (id)actions;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)applicationWillTerminate:(id)arg1;
- (void)writeGroupsForContext:(void *)arg1;
- (void)registryDidAddAction:(id)arg1;
- (void)setDatesForNewActionsInPath:(id)arg1;
- (id)createVariableGroups;
- (id)createActionGroups;
- (id)createVariablesLibrary;
- (id)createActionsLibrary;
- (void)removeAction:(id)arg1;
- (id)init;

@end

