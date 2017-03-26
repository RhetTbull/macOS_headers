//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OAETDocumentState;

@interface OAETClient : NSObject
{
    OAETDocumentState *mState;
}

@property(nonatomic) OAETDocumentState *state; // @synthesize state=mState;
- (BOOL)okToMapDrawableAsGroup:(id)arg1 state:(id)arg2;
- (BOOL)okToShrinkTextForShape:(id)arg1;
- (void)addCommentForGroup:(id)arg1 state:(id)arg2;
- (void)addComment:(id)arg1 position:(struct CGPoint)arg2 date:(id)arg3 author:(id)arg4;
- (BOOL)canExportEmbeddedMovies;
- (BOOL)canExportAsClientWavAudio:(id)arg1;
- (id)bulletCollection:(id)arg1;
- (void)mapClientDataFromDrawable:(id)arg1 toDrawables:(id)arg2 state:(id)arg3;
- (id)mapHyperlink:(id)arg1 state:(id)arg2;
- (id)mapTextAttachment:(id)arg1 toParagraph:(id)arg2 state:(id)arg3;
- (id)mapDrawable:(id)arg1 state:(id)arg2;

@end

