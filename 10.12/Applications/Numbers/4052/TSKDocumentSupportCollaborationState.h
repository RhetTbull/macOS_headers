//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@class TSKCollaborationCommandHistory, TSKCollaborationDocumentSessionState;

@interface TSKDocumentSupportCollaborationState : TSPObject
{
    TSKCollaborationCommandHistory *_collaborationCommandHistory;
    TSKCollaborationDocumentSessionState *_collaborationSessionState;
}

@property(retain, nonatomic) TSKCollaborationDocumentSessionState *collaborationSessionState; // @synthesize collaborationSessionState=_collaborationSessionState;
@property(retain, nonatomic) TSKCollaborationCommandHistory *collaborationCommandHistory; // @synthesize collaborationCommandHistory=_collaborationCommandHistory;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)dealloc;
- (id)initWithContext:(id)arg1;

@end

