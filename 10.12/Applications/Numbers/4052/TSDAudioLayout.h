//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDMediaLayout.h"

@interface TSDAudioLayout : TSDMediaLayout
{
}

- (struct CGRect)boundsForCollaboratorHUDForSelectionPath:(id)arg1;
- (int)wrapType;
- (BOOL)canFlip;
- (BOOL)allowsConnections;
- (struct CGRect)alignmentFrame;
- (struct CGRect)computeAlignmentFrameInRoot:(BOOL)arg1;
- (BOOL)shouldDisplayGuides;
- (id)layoutGeometryFromInfo;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (BOOL)resizeMayChangeAspectRatio;
- (BOOL)supportsRotation;
- (id)initWithInfo:(id)arg1;

@end

