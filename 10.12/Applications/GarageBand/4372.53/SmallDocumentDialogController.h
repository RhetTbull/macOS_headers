//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SmallDialogController.h"

@class NSString;

@interface SmallDocumentDialogController : SmallDialogController
{
    NSString *nibWindowTitle;
}

+ (id)sharedController;
+ (id)sharedController:(id)arg1;
+ (id)existingSharedController;
+ (id)existingSharedController:(id)arg1;
- (struct CSong *)song;
- (void)loadDefaultFrame:(BOOL)arg1;
- (void)saveDefaultFrame;
- (id)defaultFrameKey;
- (id)windowTitle;
- (id)windowRightTitle;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (int)parentViewClass;

@end

