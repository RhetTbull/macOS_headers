//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSCEReference : NSObject
{
    struct TSCECReference mRef;
    NSString *mOverrideText;
    NSString *mOverrideTextAsTyped;
    unsigned char mStickyBits;
    BOOL mWasConstructedViaNames;
}

- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5;
- (id)referenceTextForAutocompleteWithCalculationEngine:(id)arg1 hostTableID:(struct __CFUUID *)arg2 stickyBits:(unsigned char)arg3 inputString:(id)arg4 inputStringIsComplete:(BOOL)arg5;
- (id)p_stringByUnescapingQuotedStringWithPossibleDollarPrefix:(id)arg1 partial:(BOOL)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 contextSheetName:(id)arg2;
- (id)referenceTextWithCalculationEngine:(id)arg1 hostTableID:(struct __CFUUID *)arg2;
- (struct __CFUUID *)tableID;
- (CDStruct_fc93c73e)rangeReference;
- (struct TSCECReference)cReference;
- (BOOL)wasConstructedViaNames;
- (void)setWasConstructedViaNames:(BOOL)arg1;
- (unsigned char)stickyBits;
- (void)setStickyBits:(unsigned char)arg1;
- (id)overrideTextAsTyped;
- (void)setOverrideTextAsTyped:(id)arg1;
- (id)overrideText;
- (void)setOverrideText:(id)arg1;
- (id)initWithCellReference:(CDStruct_de21cb60)arg1;
- (id)initWithRangeReference:(CDStruct_fc93c73e)arg1;

@end

