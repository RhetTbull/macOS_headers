//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSView;
@protocol IPXEditorialWidgetItemDelegate;

@interface IPXEditorialWidgetItem : NSObject
{
    NSString *_uuid;
    BOOL _selected;
    NSView *_contentView;
    NSString *_identifier;
    double _cornerRadius;
    id <IPXEditorialWidgetItemDelegate> _delegate;
}

@property(nonatomic) __weak id <IPXEditorialWidgetItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedTitle;
- (void)cellDidAddContentView;
- (void)cellDidChangeBackingProperties;
- (void)cellDidEndLiveResize;
- (void)cellWillStartLiveResize;
- (void)cellDidChangeSize:(struct CGSize)arg1;
- (id)hitTest:(struct CGPoint)arg1 proposedView:(id)arg2;
- (void)unloadContentData;
- (void)loadContentData;
@property(readonly, nonatomic) BOOL showsSelectionIndicator;
- (id)uuid;
- (id)initWithContentView:(id)arg1 identifier:(id)arg2;

@end

