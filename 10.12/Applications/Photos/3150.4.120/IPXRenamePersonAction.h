//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDDatabaseAccessAction.h>

@class NSDictionary, NSString, RDDatabase, RDPerson;

@interface IPXRenamePersonAction : RDDatabaseAccessAction
{
    RDDatabase *_database;
    RDPerson *_person;
    NSString *_name;
    NSString *_originalFullName;
    NSString *_originalDisplayName;
    NSString *_originalURI;
    NSDictionary *_originalContactMatchingDictionary;
}

@property(retain, nonatomic) NSDictionary *originalContactMatchingDictionary; // @synthesize originalContactMatchingDictionary=_originalContactMatchingDictionary;
@property(retain, nonatomic) NSString *originalURI; // @synthesize originalURI=_originalURI;
@property(retain, nonatomic) NSString *originalDisplayName; // @synthesize originalDisplayName=_originalDisplayName;
@property(retain, nonatomic) NSString *originalFullName; // @synthesize originalFullName=_originalFullName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) RDPerson *person; // @synthesize person=_person;
@property(readonly, nonatomic) RDDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (id)defaultActionNameLocalizationKey;
- (int)performUndo;
- (int)performAction;
- (id)resourceObject;
- (id)initWithDatabase:(id)arg1 person:(id)arg2 name:(id)arg3;

@end

