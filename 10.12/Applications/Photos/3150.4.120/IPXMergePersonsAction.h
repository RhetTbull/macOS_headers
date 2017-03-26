//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDDatabaseAccessAction.h>

@class NSArray, NSMutableArray, NSString, RDDatabase, RDPerson;

@interface IPXMergePersonsAction : RDDatabaseAccessAction
{
    RDDatabase *_database;
    NSArray *_personsToMerge;
    RDPerson *_targetPerson;
    RDPerson *_replacementTargetPerson;
    NSMutableArray *_peopleSnapshots;
    NSString *_originalTargetFullName;
    NSString *_originalTargetDisplayName;
    NSString *_targetName;
    NSString *_targetDisplayName;
    unsigned long long _context;
}

@property(readonly, nonatomic) unsigned long long context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *targetDisplayName; // @synthesize targetDisplayName=_targetDisplayName;
@property(retain, nonatomic) NSString *targetName; // @synthesize targetName=_targetName;
@property(readonly, nonatomic) RDPerson *targetPerson; // @synthesize targetPerson=_targetPerson;
- (void).cxx_destruct;
- (void)confirmMergeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)defaultActionNameLocalizationKey;
- (int)performUndo;
- (int)performAction;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (id)resourceObject;
- (id)initWithPersonsToMerge:(id)arg1 targetPerson:(id)arg2 context:(unsigned long long)arg3 database:(id)arg4;

@end

