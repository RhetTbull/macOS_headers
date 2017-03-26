//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSDocument.h>

@class MGDocumentWindowController;

@interface MGDocument : NSDocument
{
    unsigned long long _editorCount;
    MGDocumentWindowController *_mainWindowController;
}

+ (void)initialize;
@property(nonatomic) MGDocumentWindowController *mainWindowController; // @synthesize mainWindowController=_mainWindowController;
- (id)printOperationWithSettings:(id)arg1 error:(id *)arg2;
- (void)objectDidEndEditing:(id)arg1;
- (void)objectDidBeginEditing:(id)arg1;
- (BOOL)isBeingEdited;
- (void)presentError:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)viewControllerDidLoadView:(id)arg1;
- (void)viewControllerWillLoadView:(id)arg1;
- (id)mainViewController;
- (void)removeWindowController:(id)arg1;
- (void)makeWindowControllers;
- (void)canCloseDocumentWithDelegate:(id)arg1 shouldCloseSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (void)dealloc;
- (id)handlePresentCommand:(id)arg1;
- (void)setPresenting:(BOOL)arg1;
- (BOOL)presenting;

@end

