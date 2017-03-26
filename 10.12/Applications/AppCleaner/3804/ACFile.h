//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "QLPreviewItem-Protocol.h"

@class NSImage, NSString, NSURL;

@interface ACFile : NSObject <NSCopying, QLPreviewItem>
{
    BOOL _selected;
    BOOL _selectable;
    BOOL _protected;
    BOOL _sipProtected;
    NSURL *_URL;
    NSURL *_trashURL;
    NSString *_displayName;
    NSImage *_icon;
    unsigned long long _size;
}

+ (id)fileWithURL:(id)arg1;
@property(nonatomic, getter=isSIPProtected, setter=setSIPProtected:) BOOL sipProtected; // @synthesize sipProtected=_sipProtected;
@property(nonatomic, getter=isProtected) BOOL protected; // @synthesize protected=_protected;
@property(nonatomic, getter=isSelectable) BOOL selectable; // @synthesize selectable=_selectable;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(retain, nonatomic) NSImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSURL *trashURL; // @synthesize trashURL=_trashURL;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
- (BOOL)exists;
- (void)fetchSIPStatus;
- (void)fetchSize;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (id)fileName;
- (id)displayPath;
- (id)path;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;

@end

