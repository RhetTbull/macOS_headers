//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "iTermBaseMinimapView.h"

@interface iTermSearchResultsMinimapView : iTermBaseMinimapView
{
    struct _NSRange _rangeOfVisibleLines;
    CDStruct_9d0a8532 _series;
    id <iTermSearchResultsMinimapViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <iTermSearchResultsMinimapViewDelegate> delegate; // @synthesize delegate=_delegate;
- (struct _NSRange)rangeOfVisibleLines;
- (CDStruct_9d0a8532)seriesAtIndex:(long long)arg1;
- (long long)numberOfSeries;
- (void)didDraw;
- (id)indexSet;
- (void)performInvalidate;
- (void)dealloc;
- (id)init;

@end

