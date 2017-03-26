//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewItem-Protocol.h"

@class NSDate, NSString, NSURL;

@interface SPInfoDocument : NSObject <QLPreviewItem>
{
    NSURL *_URL;
    NSString *_name;
    NSString *_category;
    NSDate *_dateLastOpened;
    long long _size;
}

@property(readonly) long long size; // @synthesize size=_size;
@property(readonly, retain) NSDate *dateLastOpened; // @synthesize dateLastOpened=_dateLastOpened;
@property(readonly, copy) NSString *category; // @synthesize category=_category;
@property(readonly, copy) NSString *name; // @synthesize name=_name;
@property(readonly, retain) NSURL *URL; // @synthesize URL=_URL;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)_initWithURL:(id)arg1 name:(id)arg2 category:(id)arg3 dateLastOpened:(id)arg4 size:(long long)arg5;
- (id)initWithURL:(id)arg1;
- (id)initWithMetadataItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id previewItemDisplayState;
@property(readonly) Class superclass;

@end

