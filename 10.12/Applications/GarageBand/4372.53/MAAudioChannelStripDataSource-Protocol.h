//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MAChannelStripDataSource-Protocol.h"

@class NSArray, NSColor, NSString, NSView;
@protocol MAPlugInDataSource;

@protocol MAAudioChannelStripDataSource <MAChannelStripDataSource>
@property(readonly, nonatomic) int channelMode;
@property(readonly, nonatomic) BOOL hasMetaPlugIn;
@property(readonly, nonatomic) BOOL hasInputSource;
- (BOOL)canDeleteMultiOutputAux;
- (BOOL)canCreateMultiOutputAux;
- (float)clipLevel;
- (float)peakLevelAtIndex:(unsigned long long)arg1 usingScalingFunction:(CDUnknownFunctionPointerType)arg2;
- (float)levelAtIndex:(unsigned long long)arg1 usingScalingFunction:(CDUnknownFunctionPointerType)arg2;
- (unsigned long long)numLevels;
- (NSString *)labelAbbreviated:(BOOL)arg1;
- (double)msecProcessingDelay;
- (long long)alternateSubmasterIndex;
- (NSColor *)textColorForSubmasterAtIndex:(long long)arg1 highlighted:(BOOL)arg2;
- (NSString *)nameForSubmasterWithIndex:(long long)arg1;
- (BOOL)getSubmasterIndex:(long long *)arg1;
- (NSString *)longNameForOutputBusAtIndex:(long long)arg1;
- (NSString *)nameForOutputBusAtIndex:(long long)arg1;
- (NSString *)nameForOutputWithIndex:(long long)arg1 isBus:(BOOL)arg2 abbreviate:(BOOL)arg3;
- (NSString *)nameForOutputWithIndex:(long long)arg1 abbreviate:(BOOL)arg2;
- (BOOL)getOutputIndex:(long long *)arg1 outIsBus:(char *)arg2;
- (BOOL)isSourceValid;
- (NSString *)sourceName;
- (NSString *)nameForInputBusAtIndex:(long long)arg1 abbreviate:(BOOL)arg2;
- (NSString *)nameForInputWithIndex:(long long)arg1 channelMode:(int)arg2 abbreviate:(BOOL)arg3;
- (BOOL)getInputIndex:(long long *)arg1 outIsBus:(char *)arg2;
- (BOOL)sendInLowLatencyModeForSlot:(unsigned long long)arg1;
- (BOOL)sendIsMutedForSlot:(unsigned long long)arg1;
- (long long)sendModeForSlot:(unsigned long long)arg1;
- (long long)alternateSendVolumeForSlot:(unsigned long long)arg1;
- (long long)sendVolumeForSlot:(unsigned long long)arg1;
- (long long)sendOutputIndexForSlot:(unsigned long long)arg1;
- (unsigned long long)numUsedSendSlots;
- (unsigned long long)numSendSlots;
- (BOOL)getLibraryIndicatorType:(long long *)arg1 outSlot:(long long *)arg2 isMIDIPlugIn:(char *)arg3 forView:(NSView *)arg4;
- (BOOL)isLibraryVisibleForView:(NSView *)arg1;
- (void)closeLibraryForView:(NSView *)arg1;
- (void)showLibraryForView:(NSView *)arg1;
- (BOOL)allowsAutoOpenPlugIns;
- (BOOL)isFrozenSlot:(long long)arg1 isMIDIPlugIn:(BOOL)arg2;
- (id <MAPlugInDataSource>)currentPlugInDataSourceForSlot:(unsigned long long)arg1 isMIDIPlugIn:(BOOL)arg2;
- (id <MAPlugInDataSource>)currentPlugInDataSourceForSlot:(unsigned long long)arg1;
- (float)GRMFloatValueForSlot:(unsigned long long)arg1;
- (unsigned long long)slotForGRM;
- (NSArray *)EQPathPointsForSlot:(unsigned long long)arg1;
- (unsigned long long)slotForEQ;
- (unsigned long long)hasAudioInput;
- (unsigned long long)plugInSlotBase:(BOOL)arg1;
- (unsigned long long)plugInSlotBase;
- (unsigned long long)numUsedInsertSlots:(BOOL)arg1;
- (unsigned long long)numUsedInsertSlots;
- (unsigned long long)numInsertSlots:(BOOL)arg1;
- (unsigned long long)numInsertSlots;
- (NSString *)channelStripTitle;
- (double)inputGainDecibelsMax;
- (double)inputGainDecibelsMin;
- (double)inputGainDecibels;
- (double)inputGain;
- (BOOL)hasInputGain;
- (BOOL)phaseInvertEnabled;
- (BOOL)hasPhaseInvert;
- (BOOL)highPassFilterEnabled;
- (BOOL)hasHighPassFilter;
- (BOOL)phantomPowerEnabled;
- (BOOL)hasPhantomPower;
- (NSString *)sensitivityString;
- (BOOL)hasSensitivity;

@optional
- (long long)memoryUsage;
- (long long)GRMdBValueForSlot:(unsigned long long)arg1;
@end

