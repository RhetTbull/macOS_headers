//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CKShareParticipant, CNContact, NSArray, NSString, TSKLobbySession, TSUColor;

@interface TSKCollaborationParticipant : NSObject <NSCopying>
{
    CNContact *_contact;
    struct {
        unsigned int isDocumentOwner:1;
        unsigned int isSelf;
        unsigned int hasUnifiedContact:1;
    } _flags;
    CKShareParticipant *_shareParticipant;
    NSArray *_sortedLobbySessions;
}

+ (id)participantWithShareParticipant:(id)arg1 sortedLobbySessions:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *sortedLobbySessions; // @synthesize sortedLobbySessions=_sortedLobbySessions;
@property(readonly, nonatomic) CKShareParticipant *shareParticipant; // @synthesize shareParticipant=_shareParticipant;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToCollaborationParticipant:(id)arg1;
@property(readonly, nonatomic) BOOL isOnline;
@property(readonly, nonatomic) BOOL isPublic;
@property(readonly, nonatomic) BOOL isSelf;
@property(readonly, nonatomic) BOOL isEditor;
@property(readonly, nonatomic) BOOL isDocumentOwner;
@property(readonly, nonatomic) TSUColor *indicatorDarkColor;
@property(readonly, nonatomic) TSUColor *indicatorLightColor;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) NSString *personName;
- (id)shareParticipantPersonNameOrNil;
@property(readonly, nonatomic) NSString *personId;
- (void)populateContactIfNeeded;
@property(readonly, nonatomic) BOOL hasUnifiedContact;
@property(readonly, nonatomic) CNContact *contact;
@property(readonly, nonatomic) TSKLobbySession *mostRecentLobbySession;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShareParticipant:(id)arg1 sortedLobbySessions:(id)arg2;
- (id)init;

@end

