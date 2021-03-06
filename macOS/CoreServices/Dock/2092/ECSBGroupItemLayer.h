//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ECSBItemLayer.h"

@class ECImageGridLayer, ECSBGroup;

@interface ECSBGroupItemLayer : ECSBItemLayer
{
    _Bool _groupShown;
    ECSBGroup *_group;
    ECImageGridLayer *_miniGridLayer;
}

+ (unsigned long long)miniIconSizeForBounds:(struct CGRect)arg1 andScaleFactor:(float)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) ECImageGridLayer *miniGridLayer; // @synthesize miniGridLayer=_miniGridLayer;
@property(nonatomic) _Bool groupShown; // @synthesize groupShown=_groupShown;
@property(retain, nonatomic) ECSBGroup *group; // @synthesize group=_group;
- (void)setContentFromDataSource:(id)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(id)arg3;
- (_Bool)isGroupItem;
- (void)layout;
- (void)setValue:(id)arg1 forKey:(id)arg2 ofItem:(id)arg3;
- (void)reloadItemContentsWithDataSource:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)purgeItemContents;
- (void)scrollMiniGridToAvailableSpace;
- (void)scrollMiniGridToTop;
- (void)setLayoutRTL:(_Bool)arg1;
- (void)setScaleFactor:(float)arg1;
- (void)setCloseboxVisible:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setFaded:(_Bool)arg1;
- (void)setDarkenedForDrop:(_Bool)arg1;
- (void)setDarkened:(_Bool)arg1;
- (id)initWithScaleFactor:(float)arg1 layoutRTL:(_Bool)arg2;

@end

