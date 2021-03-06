//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBObject.h"

@class NSNumber, NSString, _AMiCalDocument;

@interface _AMiCalWindow : SBObject
{
}

- (void)show;
- (void)saveIn:(id)arg1 as:(id)arg2;
- (void)moveTo:(id)arg1;
- (BOOL)exists;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property BOOL zoomed;
@property(readonly) BOOL zoomable;
@property BOOL visible;
@property(readonly) BOOL resizable;
@property(readonly) BOOL modal;
@property BOOL miniaturized;
@property(readonly) BOOL miniaturizable;
@property(readonly) BOOL floating;
@property(copy) NSNumber *index;
@property(readonly) BOOL titled;
@property(readonly) BOOL closeable;
@property(readonly, copy) _AMiCalDocument *document;
@property struct CGRect bounds;
- (id)id;
@property(copy) NSString *name;

@end

