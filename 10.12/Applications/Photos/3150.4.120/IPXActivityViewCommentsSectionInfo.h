//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "IPXActivityViewSectionInfo.h"

@interface IPXActivityViewCommentsSectionInfo : IPXActivityViewSectionInfo
{
    BOOL _hasLikes;
}

@property(nonatomic) BOOL hasLikes; // @synthesize hasLikes=_hasLikes;
- (long long)indexOfItemWithComment:(id)arg1;
- (long long)indexOfItemWithAsset:(id)arg1;
- (BOOL)containsAsset:(id)arg1;
- (void)getCommentCount:(out unsigned long long *)arg1 likeCount:(out unsigned long long *)arg2;
- (id)likesForItemAtIndex:(long long)arg1;
- (id)commentForItemAtIndex:(long long)arg1;
- (id)assetsForItemAtIndex:(long long)arg1 maximumCount:(long long)arg2;
- (BOOL)hasMultipleAssetsForItemAtIndex:(long long)arg1;
- (id)assetForItemAtIndex:(long long)arg1;
- (long long)typeForItemAtIndex:(long long)arg1;
- (void)updateFromCloudFeedEntry;
- (id)cloudFeedCommentsEntry;
- (long long)sectionType;

@end

