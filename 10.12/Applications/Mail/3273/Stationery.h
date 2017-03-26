//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MCParsedMessage, NSArray, NSBundle, NSDictionary, NSImage, NSMutableDictionary, NSString;

@interface Stationery : NSObject
{
    NSString *_html;
    NSMutableDictionary *_imageData;
    NSImage *_thumbnailImage;
    NSArray *_colors;
    NSString *_defaultColor;
    BOOL _isCustom;
    NSString *_uniqueIDForBaseURL;
    NSDictionary *_descriptionDictionary;
    NSDictionary *_localizedDescriptionDictionary;
    NSBundle *_bundle;
}

@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, copy, nonatomic) NSDictionary *localizedDescriptionDictionary; // @synthesize localizedDescriptionDictionary=_localizedDescriptionDictionary;
@property(copy, nonatomic) NSDictionary *descriptionDictionary; // @synthesize descriptionDictionary=_descriptionDictionary;
@property(copy, nonatomic) NSString *uniqueIDForBaseURL; // @synthesize uniqueIDForBaseURL=_uniqueIDForBaseURL;
@property(readonly, nonatomic) BOOL isCustom; // @synthesize isCustom=_isCustom;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
@property(copy, nonatomic) NSString *bundlePath;
- (void)_addValueToDescription:(id)arg1 forKey:(id)arg2;
- (BOOL)saveToPath:(id)arg1 error:(id *)arg2;
- (void)setValue:(id)arg1 forHeader:(id)arg2;
- (id)addImageWithData:(id)arg1 name:(id)arg2;
- (void)setHTML:(id)arg1;
- (void)setStationeryName:(id)arg1;
- (void)setMinimumWidth:(double)arg1;
@property(readonly, copy, nonatomic) NSDictionary *headers;
- (id)setThumbnailImage:(id)arg1;
- (id)thumbnailImage;
@property(readonly, copy, nonatomic) NSString *thumbnailImagePath;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *folderName;
@property(readonly, copy, nonatomic) NSString *stationeryID;
- (void)changeFolderAndDisplayNameTo:(id)arg1;
- (id)fontsForColor:(id)arg1;
- (id)imagesInCompositeImagesForColor:(id)arg1;
- (id)backgroundImagePathsForColor:(id)arg1 previousColor:(id)arg2;
- (id)imagePathsForColor:(id)arg1;
- (id)nextColorAfterColor:(id)arg1;
@property(readonly, nonatomic) double letterWidth;
@property(readonly, nonatomic) double letterTopMargin;
- (void)_loadColorsIfNeeded;
@property(readonly, copy, nonatomic) NSString *defaultColor;
@property(readonly, copy, nonatomic) NSArray *colors;
@property(readonly, copy, nonatomic) NSImage *backgroundTile;
@property(readonly, copy, nonatomic) NSString *pathToBackgroundTile;
@property(readonly, nonatomic) BOOL hasImages;
- (id)_localizeHtml:(id)arg1 withTable:(id)arg2;
- (id)_html;
- (id)_attachmentsForImages:(id)arg1 typeIsBackground:(BOOL)arg2;
@property(readonly, nonatomic) MCParsedMessage *parsedMessage;
@property(nonatomic) BOOL userCreatedCustomStationery;
- (id)init;
- (id)initWithPath:(id)arg1;

@end

