//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSSplitView.h>

#import "CALayerDelegate-Protocol.h"

@class CALayer, NSScrollView, NSString, NSView;

@interface TPDocumentSplitView : NSSplitView <CALayerDelegate>
{
    BOOL _activityLogHostViewLoaded;
    NSScrollView *_pageNavigatorScrollView;
    NSScrollView *_activityLogScrollView;
    NSView *_documentHostView;
    NSView *_inspectorHostView;
    NSView *_activityLogHostView;
    CALayer *_backgroundLayer;
    CALayer *_activitySidebarDividerLayer;
    CALayer *_pageNavigatorDividerLayer;
    CALayer *_inspectorDividerLayer;
}

@property(nonatomic, getter=isActivityLogHostViewLoaded) BOOL activityLogHostViewLoaded; // @synthesize activityLogHostViewLoaded=_activityLogHostViewLoaded;
@property(retain, nonatomic) CALayer *inspectorDividerLayer; // @synthesize inspectorDividerLayer=_inspectorDividerLayer;
@property(retain, nonatomic) CALayer *pageNavigatorDividerLayer; // @synthesize pageNavigatorDividerLayer=_pageNavigatorDividerLayer;
@property(retain, nonatomic) CALayer *activitySidebarDividerLayer; // @synthesize activitySidebarDividerLayer=_activitySidebarDividerLayer;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) NSView *activityLogHostView; // @synthesize activityLogHostView=_activityLogHostView;
@property(nonatomic) NSView *inspectorHostView; // @synthesize inspectorHostView=_inspectorHostView;
@property(nonatomic) NSView *documentHostView; // @synthesize documentHostView=_documentHostView;
@property(nonatomic) NSScrollView *activityLogScrollView; // @synthesize activityLogScrollView=_activityLogScrollView;
@property(nonatomic) NSScrollView *pageNavigatorScrollView; // @synthesize pageNavigatorScrollView=_pageNavigatorScrollView;
@property(readonly, nonatomic) long long inspectorPanelIndex;
@property(readonly, nonatomic) long long canvasPanelIndex;
@property(readonly, nonatomic) long long activitySidebarPanelIndex;
@property(readonly, nonatomic) long long pageNavigatorPanelIndex;
- (void)p_resizeDividerLayers;
- (id)findSubViewOfType:(Class)arg1 inView:(id)arg2;
- (void)p_setupLayers;
- (id)p_pageNavigatorView;
- (void)setBackgroundPatternToImageNamed:(id)arg1;
- (void)restoreBackgroundPattern;
- (void)drawDividerInRect:(struct CGRect)arg1;
- (double)dividerThickness;
- (void)hideInspector;
- (void)showInspector;
@property(readonly, nonatomic, getter=isInspectorVisible) BOOL inspectorVisible;
- (void)toggleActivitySidebar;
- (void)hideActivitySidebar;
- (void)showActivitySidebar;
- (void)p_addActivityLogHostViewToViewHierarchy;
- (void)p_setupActivityLogConstraints;
@property(readonly, nonatomic, getter=isActivitySidebarVisible) BOOL activitySidebarVisible;
- (void)togglePageNavigator;
- (void)p_hidePageNavigator;
- (void)p_showPageNavigator;
- (void)documentDidUpdateZoom;
@property(readonly, nonatomic, getter=isPageNavigatorVisible) BOOL pageNavigatorVisible;
- (void)awakeFromNib;
- (void)layoutSublayersOfLayer:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

