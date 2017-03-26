//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GQDDrawable.h"

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class GQDWPExternalTextWrap, NSString;

@interface GQDGroup : GQDDrawable <ICExportable, GQDNameMappable>
{
    struct __CFArray *mDrawables;
    GQDWPExternalTextWrap *mExternalTextWrap;
}

+ (const struct StateSpec *)stateForReading;
- (id)externalTextWrap;
- (struct __CFArray *)drawables;
- (void)dealloc;
- (void)setExternalTextWrap:(id)arg1;
- (void)setDrawables:(struct __CFArray *)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;
- (id)initWithTSDDrawableInfo:(id)arg1 exporter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

