//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoFoundation/PFUtilityAction.h>

@class LiAddress, NSMutableSet, RDAlbum, SBLSharedPhotoStreamSettings;

@interface IPXCreateSharedStreamAction : PFUtilityAction
{
    SBLSharedPhotoStreamSettings *_settings;
    LiAddress *_createdAlbumAddress;
    CDUnknownBlockType _completeCallback;
    NSMutableSet *_notifiedAddedAlbumModelIds;
}

- (void).cxx_destruct;
- (void)performAction:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) RDAlbum *createdAlbum;
- (void)checkForModelIdMatch;
- (void)_streamContentObjectDidAdd:(id)arg1;
- (void)_actionCompleteReply:(int)arg1;
- (void)_createStream;
- (BOOL)_isiCloudAgentReady;
- (id)initWithSettings:(id)arg1;

@end

