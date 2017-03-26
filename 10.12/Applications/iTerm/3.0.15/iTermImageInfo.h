//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPasteboardItemDataProvider-Protocol.h"

@class NSData, NSDictionary, NSMutableDictionary, NSPasteboardItem, NSString, iTermAnimatedImageInfo, iTermImage;

@interface iTermImageInfo : NSObject <NSPasteboardItemDataProvider>
{
    NSData *_data;
    NSString *_uniqueIdentifier;
    NSDictionary *_dictionary;
    CDUnknownBlockType _queuedBlock;
    BOOL _preserveAspectRatio;
    BOOL _paused;
    unsigned short _code;
    iTermImage *_image;
    NSString *_filename;
    NSMutableDictionary *_embeddedImages;
    iTermAnimatedImageInfo *_animatedImage;
    struct CGSize _size;
    struct NSEdgeInsets _inset;
}

@property(retain, nonatomic) iTermAnimatedImageInfo *animatedImage; // @synthesize animatedImage=_animatedImage;
@property(retain, nonatomic) NSMutableDictionary *embeddedImages; // @synthesize embeddedImages=_embeddedImages;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) BOOL paused; // @synthesize paused=_paused;
@property(nonatomic) unsigned short code; // @synthesize code=_code;
@property(nonatomic) struct NSEdgeInsets inset; // @synthesize inset=_inset;
@property(copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property(nonatomic) BOOL preserveAspectRatio; // @synthesize preserveAspectRatio=_preserveAspectRatio;
@property(retain, nonatomic) iTermImage *image; // @synthesize image=_image;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)pasteboard:(id)arg1 item:(id)arg2 provideDataForType:(id)arg3;
@property(readonly, nonatomic) NSPasteboardItem *pasteboardItem;
@property(readonly, nonatomic) NSString *nameForNewSavedTempFile;
- (id)imageWithCellSize:(struct CGSize)arg1;
@property(readonly, nonatomic) BOOL animated;
- (id)dictionary;
@property(readonly, nonatomic) NSString *imageType;
- (void)setImageFromImage:(id)arg1 data:(id)arg2;
- (void)dealloc;
- (void)loadFromDictionaryIfNeeded;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithDictionary:(id)arg1;
- (id)initWithCode:(unsigned short)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

