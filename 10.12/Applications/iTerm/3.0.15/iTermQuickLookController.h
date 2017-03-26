//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewPanelDataSource-Protocol.h"
#import "QLPreviewPanelDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface iTermQuickLookController : NSObject <QLPreviewPanelDataSource, QLPreviewPanelDelegate>
{
    NSMutableArray *_files;
    struct CGRect _sourceRect;
}

+ (void)dismissSharedPanel;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) NSMutableArray *files; // @synthesize files=_files;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(long long)arg2;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (void)takeControl;
- (void)close;
- (void)showWithSourceRect:(struct CGRect)arg1 controller:(id)arg2;
- (void)addURL:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

