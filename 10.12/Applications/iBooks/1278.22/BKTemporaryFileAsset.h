//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKAsset-Protocol.h"

@class NSDate, NSNumber, NSString, NSURL;

@interface BKTemporaryFileAsset : NSObject <BKAsset>
{
    BOOL _sample;
    BOOL _proof;
    BOOL _compressed;
    BOOL _locked;
    BOOL _shouldDisableOptimizeSpeed;
    BOOL _shouldDisableTouchEmulation;
    BOOL _computedRating;
    BOOL _development;
    short _contentType;
    short _state;
    short _desktopSupportLevel;
    NSString *_accountID;
    NSString *_assetID;
    NSString *_storeID;
    NSString *_temporaryAssetID;
    NSString *_author;
    NSString *_sortAuthor;
    NSString *_title;
    NSString *_sortTitle;
    NSURL *_url;
    NSString *_genre;
    NSString *_dataSourceIdentifier;
    long long _generation;
    long long _fileSize;
    NSNumber *_isExplicit;
    NSDate *_dataSourceInsertionDate;
    long long _pageCount;
    long long _rating;
    NSDate *_updateDate;
    NSDate *_expectedDate;
    NSDate *_lastOpenDate;
    NSNumber *_versionNumber;
    NSString *_versionNumberHumanReadable;
    NSString *_bookDescription;
    NSString *_comments;
    NSString *_kind;
    NSString *_year;
    NSString *_grouping;
    NSString *_pageProgressionDirection;
}

@property(getter=isDevelopment) BOOL development; // @synthesize development=_development;
@property(retain) NSString *pageProgressionDirection; // @synthesize pageProgressionDirection=_pageProgressionDirection;
@property BOOL computedRating; // @synthesize computedRating=_computedRating;
@property(retain) NSString *grouping; // @synthesize grouping=_grouping;
@property(retain) NSString *year; // @synthesize year=_year;
@property(retain) NSString *kind; // @synthesize kind=_kind;
@property(retain) NSString *comments; // @synthesize comments=_comments;
@property(retain) NSString *bookDescription; // @synthesize bookDescription=_bookDescription;
@property(retain) NSString *versionNumberHumanReadable; // @synthesize versionNumberHumanReadable=_versionNumberHumanReadable;
@property(retain) NSNumber *versionNumber; // @synthesize versionNumber=_versionNumber;
@property(retain) NSDate *lastOpenDate; // @synthesize lastOpenDate=_lastOpenDate;
@property(retain) NSDate *expectedDate; // @synthesize expectedDate=_expectedDate;
@property(retain) NSDate *updateDate; // @synthesize updateDate=_updateDate;
@property long long rating; // @synthesize rating=_rating;
@property long long pageCount; // @synthesize pageCount=_pageCount;
@property short desktopSupportLevel; // @synthesize desktopSupportLevel=_desktopSupportLevel;
@property BOOL shouldDisableTouchEmulation; // @synthesize shouldDisableTouchEmulation=_shouldDisableTouchEmulation;
@property BOOL shouldDisableOptimizeSpeed; // @synthesize shouldDisableOptimizeSpeed=_shouldDisableOptimizeSpeed;
@property(retain) NSDate *dataSourceInsertionDate; // @synthesize dataSourceInsertionDate=_dataSourceInsertionDate;
@property(retain) NSNumber *isExplicit; // @synthesize isExplicit=_isExplicit;
@property short state; // @synthesize state=_state;
@property short contentType; // @synthesize contentType=_contentType;
@property long long fileSize; // @synthesize fileSize=_fileSize;
@property long long generation; // @synthesize generation=_generation;
@property(getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property(getter=isCompressed) BOOL compressed; // @synthesize compressed=_compressed;
@property(getter=isProof) BOOL proof; // @synthesize proof=_proof;
@property(getter=isSample) BOOL sample; // @synthesize sample=_sample;
@property(retain) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
@property(retain) NSString *genre; // @synthesize genre=_genre;
@property(retain) NSURL *url; // @synthesize url=_url;
@property(retain) NSString *sortTitle; // @synthesize sortTitle=_sortTitle;
@property(retain) NSString *title; // @synthesize title=_title;
@property(retain) NSString *sortAuthor; // @synthesize sortAuthor=_sortAuthor;
@property(retain) NSString *author; // @synthesize author=_author;
@property(retain) NSString *temporaryAssetID; // @synthesize temporaryAssetID=_temporaryAssetID;
@property(retain) NSString *storeID; // @synthesize storeID=_storeID;
@property(retain) NSString *assetID; // @synthesize assetID=_assetID;
@property(retain) NSString *accountID; // @synthesize accountID=_accountID;
- (void).cxx_destruct;
@property(readonly, getter=isEphemeral) BOOL ephemeral;
@property(readonly) NSString *scrollDirection;
@property(readonly) long long metadataMigrationVersion;
@property(readonly) NSDate *purchaseDate;
@property(readonly) NSDate *releaseDate;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly) NSNumber *assetIsHidden;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSURL *permlink;
@property(readonly) NSString *sequenceDisplayName;
@property(readonly) NSString *seriesID;
@property(readonly) NSNumber *seriesIsCloudOnly;
@property(readonly) NSNumber *seriesIsHidden;
@property(readonly) NSNumber *seriesSortKey;
@property(readonly) unsigned long long storeFrontID;
@property(readonly) Class superclass;

@end

