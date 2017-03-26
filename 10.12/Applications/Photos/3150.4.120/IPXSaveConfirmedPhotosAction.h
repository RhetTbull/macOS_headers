//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDDatabaseAccessAction.h>

@class NSArray, RDDatabase, RDPerson;

@interface IPXSaveConfirmedPhotosAction : RDDatabaseAccessAction
{
    RDDatabase *_database;
    RDPerson *_person;
    NSArray *_confirmedSuggestions;
    NSArray *_rejectedSuggestions;
}

@property(readonly, nonatomic) NSArray *rejectedSuggestions; // @synthesize rejectedSuggestions=_rejectedSuggestions;
@property(readonly, nonatomic) NSArray *confirmedSuggestions; // @synthesize confirmedSuggestions=_confirmedSuggestions;
@property(readonly, nonatomic) RDPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) RDDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (int)performUndo;
- (int)performAction;
- (BOOL)canRedo;
- (BOOL)canUndo;
- (id)defaultActionNameLocalizationKey;
- (id)resourceObject;
- (id)initWithPerson:(id)arg1 confirmed:(id)arg2 rejected:(id)arg3;

@end

