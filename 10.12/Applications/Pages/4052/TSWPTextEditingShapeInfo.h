//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSWPShapeInfo.h"

@protocol TSWPTextEditingDelegate;

@interface TSWPTextEditingShapeInfo : TSWPShapeInfo
{
    id <TSWPTextEditingDelegate> _delegate;
}

@property(nonatomic) id <TSWPTextEditingDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)displaysInstructionalText;
- (BOOL)isSelectable;
- (Class)repClass;
- (Class)layoutClass;

@end

