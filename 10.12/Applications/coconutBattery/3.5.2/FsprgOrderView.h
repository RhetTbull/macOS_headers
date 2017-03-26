//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "WebDocumentView-Protocol.h"

@class NSString, WebDataSource;

@interface FsprgOrderView : NSView <WebDocumentView>
{
    WebDataSource *dataSource;
    BOOL needsLayout;
}

- (void)dealloc;
- (void)viewWillMoveToHostWindow:(id)arg1;
- (void)viewDidMoveToHostWindow;
- (void)layout;
- (void)drawRect:(struct CGRect)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (BOOL)needsLayout;
- (void)dataSourceUpdated:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)dataSource;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

