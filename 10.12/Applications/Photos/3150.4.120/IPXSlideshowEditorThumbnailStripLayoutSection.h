//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSPasteboardWriting-Protocol.h"

@class NSString;

@interface IPXSlideshowEditorThumbnailStripLayoutSection : NSObject <NSPasteboardWriting>
{
    unsigned long long _index;
    struct _NSRange _itemRange;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) struct _NSRange itemRange; // @synthesize itemRange=_itemRange;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (id)pasteboardPropertyListForType:(id)arg1;
- (id)writableTypesForPasteboard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

