//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GQDDrawable.h"

#import "ICExportable-Protocol.h"

@class GQDSStyle, NSString;

@interface GQDBGPlaceholder : GQDDrawable <ICExportable>
{
    GQDSStyle *mStyle;
    BOOL mIsVisible;
}

- (BOOL)isVisible;
- (id)placeholderStyle;
- (void)dealloc;
- (int)graphicKind;
- (void)setIsVisible:(BOOL)arg1;
- (void)setStyle:(id)arg1;
- (id)initWithNativePlaceholder:(id)arg1 exporter:(id)arg2 masterOwned:(BOOL)arg3;
- (id)initWithNativePlaceholder:(id)arg1 exporter:(id)arg2;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

