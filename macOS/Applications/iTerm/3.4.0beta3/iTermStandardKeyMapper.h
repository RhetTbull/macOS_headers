//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "iTermKeyMapper.h"

@class NSEvent, NSString;

@interface iTermStandardKeyMapper : NSObject <iTermKeyMapper>
{
    NSEvent *_event;
    id <iTermStandardKeyMapperDelegate> _delegate;
    CDStruct_e34b728c _configuration;
}

- (void).cxx_destruct;
@property(nonatomic) CDStruct_e34b728c configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <iTermStandardKeyMapperDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)keyMapperShouldBypassPreCocoaForEvent:(id)arg1;
- (id)keyMapperDataForPostCocoaEvent:(id)arg1;
- (id)keyMapperStringForPreCocoaEvent:(id)arg1;
- (void)keyMapperSetEvent:(id)arg1;
- (BOOL)shouldSquelchKeystrokeWithString:(id)arg1 modifiers:(unsigned long long)arg2;
- (BOOL)keycodeShouldHaveNumericKeypadFlag:(unsigned short)arg1;
- (id)dataForFunctionKeyPress;
- (BOOL)shouldSendOptionModifiedKeypress;
- (id)dataBySettingMetaFlagOnFirstByte:(id)arg1;
- (id)dataByPrependingEsc:(id)arg1;
- (id)dataForOptionModifiedKeypress;
- (id)dataWhenOptionPressed;
- (int)optionKeyBehavior;
- (id)dataForRegularKeypress;
- (id)postCocoaData;
- (unsigned short)controlCodeForEvent:(id)arg1;
- (id)preCocoaString;
- (BOOL)keyMapperWantsKeyEquivalent:(id)arg1;
- (id)keyMapperDataForKeyUp:(id)arg1;
- (void)updateConfigurationWithEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

