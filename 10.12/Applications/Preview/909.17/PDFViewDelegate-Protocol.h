//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, PDFActionRemoteGoTo, PDFView;

@protocol PDFViewDelegate <NSObject>

@optional
- (void)PDFViewOpenPDF:(PDFView *)arg1 forRemoteGoToAction:(PDFActionRemoteGoTo *)arg2;
- (void)PDFViewPerformPrint:(PDFView *)arg1;
- (void)PDFViewPerformGoToPage:(PDFView *)arg1;
- (void)PDFViewPerformFind:(PDFView *)arg1;
- (NSString *)PDFViewPrintJobTitle:(PDFView *)arg1;
- (void)PDFViewWillClickOnLink:(PDFView *)arg1 withURL:(NSURL *)arg2;
- (double)PDFViewWillChangeScaleFactor:(PDFView *)arg1 toScale:(double)arg2;
@end

