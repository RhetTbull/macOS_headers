//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, TSUImage;
@protocol TSDThumbnailIdentifier;

@protocol TSDThumbnailConsumer <NSObject>
- (void)updateThumbnail:(TSUImage *)arg1 identifier:(id <TSDThumbnailIdentifier>)arg2 continueThumbnailing:(BOOL)arg3;
- (id <TSDThumbnailIdentifier>)nextThumbnailIdentifier;

@optional
- (BOOL)shouldCallCommit;
- (void)commitThumbnail:(TSUImage *)arg1 identifier:(id <TSDThumbnailIdentifier>)arg2 datasThatNeedDownload:(NSSet *)arg3;
@end

