//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

@interface NSAttributedString (MapsFormatStrings)
+ (id)_maps_attributedStringWithBindingFormat:(id)arg1 replacements:(id)arg2 attributes:(id)arg3;
+ (id)attributedStringWithText:(id)arg1 highlightRanges:(id)arg2 font:(id)arg3 highlightedFont:(id)arg4 highlightedTextColor:(id)arg5 unhighlightedTextColor:(id)arg6;
+ (id)attributedStringWithText:(id)arg1 highlightRanges:(id)arg2 font:(id)arg3 highlightedFont:(id)arg4 highlightedTextColor:(id)arg5;
+ (id)attributedStringWithText:(id)arg1 boldInRange:(id)arg2 font:(id)arg3 bold:(id)arg4;
+ (id)unsafeBoldCharacterSet;
- (id)_maps_attributedStringByApplyingBindingFormatReplacements:(id)arg1;
- (id)_maps_attributedStringByApplyingBindingFormatReplacements:(id)arg1 defaultReplacementAttributes:(id)arg2;
- (id)_maps_attributedStringByAppendingRidesharingSpecialPricingBadge:(id)arg1 representativeContentFont:(id)arg2;
@property(readonly, copy) NSAttributedString *_maps_attributedStringByReplacingWhitespaceToAvoidOrphanWords;
@end

