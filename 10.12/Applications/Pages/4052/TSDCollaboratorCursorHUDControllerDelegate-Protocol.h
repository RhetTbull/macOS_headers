//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TSDCollaboratorCursorHUDController;

@protocol TSDCollaboratorCursorHUDControllerDelegate <NSObject>
@property(readonly, nonatomic) double visibleCanvasWidth;
@property(readonly, nonatomic) double contentsScale;
- (void)positionDidUpdateForCollaboratorHUDController:(TSDCollaboratorCursorHUDController *)arg1;
- (void)updatePositionForCollaboratorHUDController:(TSDCollaboratorCursorHUDController *)arg1;
- (void)removeCollaboratorHUDController:(TSDCollaboratorCursorHUDController *)arg1;
- (void)addCollaboratorHUDController:(TSDCollaboratorCursorHUDController *)arg1;
@end

