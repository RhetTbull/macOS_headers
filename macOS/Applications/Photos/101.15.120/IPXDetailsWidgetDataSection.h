//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXDataSection.h>

@class PXSectionedDataSource;
@protocol IPXEditorialWidget;

__attribute__((visibility("hidden")))
@interface IPXDetailsWidgetDataSection : PXDataSection
{
    BOOL _showingPlaceholder;
    id <IPXEditorialWidget> _widget;
    PXSectionedDataSource *_dataSource;
}

@property(readonly, nonatomic) BOOL showingPlaceholder; // @synthesize showingPlaceholder=_showingPlaceholder;
@property(readonly, nonatomic) PXSectionedDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) id <IPXEditorialWidget> widget; // @synthesize widget=_widget;
- (void).cxx_destruct;
- (id)objectAtIndex:(long long)arg1;
- (long long)count;
- (id)initWithOutlineObject:(id)arg1;
- (id)initWithWidget:(id)arg1 dataSource:(id)arg2 showingPlaceholder:(BOOL)arg3;

@end

