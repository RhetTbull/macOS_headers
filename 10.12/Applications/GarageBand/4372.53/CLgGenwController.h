//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CLgWindowController.h"

@interface CLgGenwController : CLgWindowController
{
    id genwID;
    id genwCreator;
    long long genwType1;
    long long genwType2;
}

- (id)genwStateDict;
- (id)layoutDictForWindowController;
- (BOOL)hasInspectorAndMainView;
- (BOOL)inspectorIsResizable;
- (void)showInspectors:(BOOL)arg1;
- (void)toggleInspectors;
- (BOOL)inspectorIsVisible;
- (id)focusedUnilibView;
- (void)firstResponderChanged;
- (void)resetNextKeyViews;
- (void)setIsPartBoxGenwForID:(long long)arg1;
- (void)setIsColorGenw;
- (long long)genwType2;
- (long long)genwType1;
- (BOOL)unilibViewIsVisible:(id)arg1;
- (id)allUnilibViews1;
- (id)visibleUnilibViews1;
- (void)setCurrentInspectorWidth:(double)arg1;
- (double)currentInspectorWidth;
- (id)windowTitle;
- (id)windowMainView;
- (id)inspectorView;
- (struct CGSize)windowWillResize:(id)arg1 toSize:(struct CGSize)arg2;
- (void)finalizeGenwCreation;
- (id)genwContentView;
- (void)calledByWindowClose;
- (void)windowWillClose:(id)arg1;
- (id)genwID;
- (void)dealloc;
- (id)initGenwControllerWithWindow:(id)arg1 genwID:(id)arg2 genwCreator:(id)arg3;

@end

