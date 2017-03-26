//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EPXFootnote, EPXImageBinary, EPXMetadata, EPXStylesheet, NSMutableArray, NSMutableSet;

@interface EPXSDocument : NSObject
{
    EPXMetadata *mMetadata;
    EPXStylesheet *mStylesheet;
    EPXFootnote *mFootnoteDoc;
    NSMutableArray *mEntries;
    NSMutableArray *mImageBinaries;
    NSMutableSet *mImageNames;
    NSMutableArray *mMediaBinaries;
    NSMutableSet *mMediaNames;
    EPXImageBinary *mCoverImage;
    BOOL isInGroup;
    BOOL _cancelled;
    NSMutableArray *_embeddedFonts;
    NSMutableSet *_embeddedFontBinaryUrls;
}

+ (id)p_addMediaBinaryIsAudioOnly:(BOOL)arg1 tspdata:(id)arg2 preferredName:(id)arg3 binaryNameSet:(id)arg4 binaryArray:(id)arg5;
+ (id)p_addBinaryWithClass:(Class)arg1 data:(id)arg2 preferredName:(id)arg3 binaryNameSet:(id)arg4 binaryArray:(id)arg5;
+ (id)cleanName:(id)arg1 binaryNameSet:(id)arg2;
@property(readonly, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property(retain, nonatomic) NSMutableSet *embeddedFontBinaryUrls; // @synthesize embeddedFontBinaryUrls=_embeddedFontBinaryUrls;
@property(retain, nonatomic) NSMutableArray *embeddedFonts; // @synthesize embeddedFonts=_embeddedFonts;
@property(nonatomic) BOOL isInGroup; // @synthesize isInGroup;
- (void)setCoverImage:(id)arg1 preferredName:(id)arg2;
- (id)coverImage;
- (id)addMediaBinaryWithTSPData:(id)arg1 preferredName:(id)arg2 audioOnly:(BOOL)arg3;
- (id)mediaBinaries;
- (id)addImageBinaryWithData:(id)arg1 preferredName:(id)arg2;
- (id)imageBinaries;
- (void)insertEntry:(id)arg1;
- (void)addEntry:(id)arg1;
- (id)entries;
- (BOOL)hasChapters;
- (id)footnotes;
- (BOOL)hasFootnotes;
- (id)stylesheet;
- (id)metadata;
- (void)cancel;
- (void)dealloc;
- (id)init;

@end

