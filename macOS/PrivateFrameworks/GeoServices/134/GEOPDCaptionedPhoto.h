//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOPDPhoto, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCaptionedPhoto : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_author;
    NSString *_caption;
    NSString *_licenseDescription;
    NSString *_licenseUrl;
    GEOPDPhoto *_photo;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _displayFullPhotoInline;
    BOOL _highQuality;
    BOOL _isBusinessOwned;
    BOOL _useGallery;
    struct {
        unsigned int has_displayFullPhotoInline:1;
        unsigned int has_highQuality:1;
        unsigned int has_isBusinessOwned:1;
        unsigned int has_useGallery:1;
        unsigned int read_unknownFields:1;
        unsigned int read_author:1;
        unsigned int read_caption:1;
        unsigned int read_licenseDescription:1;
        unsigned int read_licenseUrl:1;
        unsigned int read_photo:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_author:1;
        unsigned int wrote_caption:1;
        unsigned int wrote_licenseDescription:1;
        unsigned int wrote_licenseUrl:1;
        unsigned int wrote_photo:1;
        unsigned int wrote_displayFullPhotoInline:1;
        unsigned int wrote_highQuality:1;
        unsigned int wrote_isBusinessOwned:1;
        unsigned int wrote_useGallery:1;
    } _flags;
}

+ (BOOL)isValid:(id)arg1;
+ (id)captionedPhotosForPlaceData:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(BOOL)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasIsBusinessOwned;
@property(nonatomic) BOOL isBusinessOwned;
@property(nonatomic) BOOL hasHighQuality;
@property(nonatomic) BOOL highQuality;
@property(nonatomic) BOOL hasUseGallery;
@property(nonatomic) BOOL useGallery;
@property(nonatomic) BOOL hasDisplayFullPhotoInline;
@property(nonatomic) BOOL displayFullPhotoInline;
@property(retain, nonatomic) GEOPDPhoto *photo;
@property(readonly, nonatomic) BOOL hasPhoto;
- (void)_readPhoto;
@property(retain, nonatomic) NSString *licenseUrl;
@property(readonly, nonatomic) BOOL hasLicenseUrl;
- (void)_readLicenseUrl;
@property(retain, nonatomic) NSString *licenseDescription;
@property(readonly, nonatomic) BOOL hasLicenseDescription;
- (void)_readLicenseDescription;
@property(retain, nonatomic) NSString *author;
@property(readonly, nonatomic) BOOL hasAuthor;
- (void)_readAuthor;
@property(retain, nonatomic) NSString *caption;
@property(readonly, nonatomic) BOOL hasCaption;
- (void)_readCaption;
- (id)initWithData:(id)arg1;
- (id)init;

@end

