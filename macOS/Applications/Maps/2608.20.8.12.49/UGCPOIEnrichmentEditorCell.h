//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UGCHairlineView;

__attribute__((visibility("hidden")))
@interface UGCPOIEnrichmentEditorCell : UIView
{
    UGCHairlineView *_topHairlineView;
    UGCHairlineView *_bottomHairlineView;
    BOOL _hasHeaderEmphasis;
}

+ (id)editorCellWithContentView:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) BOOL hasHeaderEmphasis; // @synthesize hasHeaderEmphasis=_hasHeaderEmphasis;
@property(nonatomic) BOOL showBottomHairline;
@property(nonatomic) BOOL showTopHairline;
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

