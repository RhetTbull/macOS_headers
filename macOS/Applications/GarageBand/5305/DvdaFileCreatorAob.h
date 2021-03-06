//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DvdaAudioData, NSMutableData;

@interface DvdaFileCreatorAob : NSObject
{
    double param_theAlphaDiv;
    double param_scrTime_increment;
    unsigned int param_scrTime3_increment;
    int param_unitFrames;
    unsigned int param_frameSize;
    unsigned int param_numAudioFramesInBlock;
    unsigned char param_audioDataInfo[6];
    double state_scrTime;
    unsigned int state_unitIndex;
    int state_packetIndex;
    int state_numOfPackets;
    unsigned int state_audioFramePosition;
    unsigned int state_remAudioFrames;
    unsigned int state_thisFramesLength;
    unsigned int state_firstUnitPTS;
    double state_firstUnitPTS_last;
    unsigned int state_firstUnitByte;
    int state_firstUnitFrameDiff;
    NSMutableData *audioBlockData;
    DvdaAudioData *dvdaAudioData;
}

- (id)newWholeAobData;
- (void)cleanupAobBytes;
- (void)getAobBytes:(void *)arg1 range:(struct _NSRange)arg2;
- (BOOL)prepareAobBytes;
- (void)packAudioData:(id)arg1 appendingToData:(id)arg2;
- (void)param_update;
- (BOOL)param_init;
- (void)addPaddingPacket:(id)arg1 withBytes:(unsigned short)arg2;
- (void)addPrivateHeader:(id)arg1 withStuffingBytes:(unsigned short)arg2;
- (void)addPacketHeader17:(id)arg1 withAudioSize:(unsigned int)arg2 stuffingBytes:(unsigned int)arg3;
- (void)addPacketHeader14:(id)arg1 withAudioSize:(unsigned int)arg2 stuffingBytes:(unsigned int)arg3;
- (void)addPacketHeader9:(id)arg1 withAudioSize:(unsigned int)arg2 stuffingBytes:(unsigned int)arg3;
- (void)addSystemHeader:(id)arg1;
- (void)addPackHeader:(id)arg1;
- (unsigned int)numOfAobAudioBytes;
- (void)dealloc;
- (id)initFileCreatorAob:(id)arg1;

@end

