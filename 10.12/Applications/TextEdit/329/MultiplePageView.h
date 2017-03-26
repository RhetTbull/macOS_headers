//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSColor, NSPrintInfo;

@interface MultiplePageView : NSView
{
    NSPrintInfo *printInfo;
    NSColor *lineColor;
    NSColor *marginColor;
    unsigned long long numPages;
    long long layoutOrientation;
}

- (struct CGPoint)locationOfPrintRect:(struct CGRect)arg1;
- (struct CGRect)rectForPage:(long long)arg1;
- (BOOL)knowsPageRange:(struct _NSRange *)arg1;
- (struct CGRect)rectForSmartMagnificationAtPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (long long)layoutOrientation;
- (void)setLayoutOrientation:(long long)arg1;
- (id)marginColor;
- (void)setMarginColor:(id)arg1;
- (id)lineColor;
- (void)setLineColor:(id)arg1;
- (unsigned long long)pageNumberForPoint:(struct CGPoint)arg1;
- (struct CGRect)pageRectForPageNumber:(unsigned long long)arg1;
- (struct CGRect)documentRectForPageNumber:(unsigned long long)arg1;
- (struct CGSize)documentSizeInPage;
- (void)dealloc;
- (double)pageSeparatorHeight;
- (unsigned long long)numberOfPages;
- (void)setNumberOfPages:(unsigned long long)arg1;
- (id)printInfo;
- (void)setPrintInfo:(id)arg1;
- (void)updateFrame;
- (BOOL)isOpaque;
- (BOOL)isFlipped;
- (id)initWithFrame:(struct CGRect)arg1;

@end

