//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSAttributedString, NSBezierPath, NSColor, NSImage, NSString, PSMTabBarCell, PSMTabBarControl;

@protocol PSMTabStyle <NSObject>
- (BOOL)useLightControls;
- (NSColor *)accessoryTextColor;
- (void)fillPath:(NSBezierPath *)arg1;
- (NSColor *)accessoryStrokeColor;
- (NSColor *)accessoryFillColor;
- (void)drawTabBar:(PSMTabBarControl *)arg1 inRect:(struct CGRect)arg2 horizontal:(BOOL)arg3;
- (void)drawBackgroundInRect:(struct CGRect)arg1 color:(NSColor *)arg2 horizontal:(BOOL)arg3;
- (void)drawTabCell:(PSMTabBarCell *)arg1 highlightAmount:(double)arg2;
- (NSAttributedString *)attributedStringValueForTabCell:(PSMTabBarCell *)arg1;
- (NSAttributedString *)attributedObjectCountValueForTabCell:(PSMTabBarCell *)arg1;
- (float)desiredWidthOfTabCell:(PSMTabBarCell *)arg1;
- (float)minimumWidthOfTabCell:(PSMTabBarCell *)arg1;
- (struct CGRect)objectCounterRectForTabCell:(PSMTabBarCell *)arg1;
- (struct CGRect)indicatorRectForTabCell:(PSMTabBarCell *)arg1;
- (struct CGRect)iconRectForTabCell:(PSMTabBarCell *)arg1;
- (struct CGRect)closeButtonRectForTabCell:(PSMTabBarCell *)arg1;
- (struct CGRect)dragRectForTabCell:(PSMTabBarCell *)arg1 orientation:(int)arg2;
- (NSImage *)addTabButtonRolloverImage;
- (NSImage *)addTabButtonPressedImage;
- (NSImage *)addTabButtonImage;
- (float)topMarginForTabBarControl;
- (float)rightMarginForTabBarControl;
- (float)leftMarginForTabBarControl;
- (NSString *)name;
@end

