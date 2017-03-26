//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "AbstractChannelStripController.h"

#import "MAMIDIChannelStripDataSource-Protocol.h"

@class NSString;

@interface MIDIChannelStripController : AbstractChannelStripController <MAMIDIChannelStripDataSource>
{
}

- (long long)currentMIDIActivity;
- (BOOL)valueForMIDIAssignAtIndex:(unsigned long long)arg1;
- (BOOL)maxValueForMIDIAssignAtIndex:(unsigned long long)arg1;
- (BOOL)minValueForMIDIAssignAtIndex:(unsigned long long)arg1;
- (id)nameForMIDIAssignAtIndex:(unsigned long long)arg1;
- (BOOL)MIDIBankLSB;
- (BOOL)MIDIBankMSB;
- (id)MIDIProgramName;
- (id)MIDIProgramNameOf:(BOOL)arg1;
- (BOOL)shouldInhibitExternalUpdates;
- (BOOL)isPannerBinaural;
@property(readonly, nonatomic) long long pannerType;
@property(readonly, nonatomic) int pannerFormat;
- (int)pan;
- (unsigned long long)recordEnableState;
- (unsigned long long)inputMonitorState;
- (BOOL)isDimmed;
- (BOOL)hasSoloSafeMode;
- (unsigned long long)soloState;
- (unsigned long long)muteStateForView:(id)arg1;
- (long long)alternateVolume;
- (id)volumeFormatter;
- (long long)faderVolume;
- (long long)volume;
- (id)instrumentName;
- (unsigned long long)allowedVisibleMask;
- (double)stripWidthForZoomLevel:(float)arg1;
- (struct ASSIGN_PARS *)assignPars;
- (struct GLOGINSTOLD *)pInst;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

