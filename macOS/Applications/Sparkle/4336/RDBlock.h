//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "RDBoxDecoration.h"

@interface RDBlock : RDBoxDecoration
{
    BOOL _isEditing;
}

@property(nonatomic) BOOL isEditing; // @synthesize isEditing=_isEditing;
- (BOOL)stretchToPageWidth;
- (BOOL)isFixedRatio;
- (BOOL)isBlock;
- (BOOL)isContainer;
- (void)setupItem;
- (BOOL)canBecomeWide;
- (void)addItemPropertiesDefaults;

@end

