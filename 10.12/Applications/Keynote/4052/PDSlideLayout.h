//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "PDSlideChild.h"

@class PDSlideMaster;

@interface PDSlideLayout : PDSlideChild
{
    int mSlideLayoutType;
    PDSlideMaster *mSlideMaster;
}

- (id)description;
- (void)doneWithContent;
- (id)parentSlideBase;
- (id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)parentTextStyleForTables;
- (id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4;
- (id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3;
- (id)transition;
- (id)background;
- (id)defaultTheme;
- (void)setSlideMaster:(id)arg1;
- (id)slideMaster;
- (void)setSlideLayoutType:(int)arg1;
- (int)slideLayoutType;
- (void)dealloc;
- (id)initWithSlideMaster:(id)arg1;

@end

