//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MAChannelStripDataSource-Protocol.h"

@class NSString;

@protocol MAMIDIChannelStripDataSource <MAChannelStripDataSource>
- (long long)currentMIDIActivity;
- (BOOL)valueForMIDIAssignAtIndex:(unsigned long long)arg1;
- (BOOL)maxValueForMIDIAssignAtIndex:(unsigned long long)arg1;
- (BOOL)minValueForMIDIAssignAtIndex:(unsigned long long)arg1;
- (NSString *)nameForMIDIAssignAtIndex:(unsigned long long)arg1;
- (BOOL)MIDIBankLSB;
- (BOOL)MIDIBankMSB;
- (NSString *)MIDIProgramName;
@end

