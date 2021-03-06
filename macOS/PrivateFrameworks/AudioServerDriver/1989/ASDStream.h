//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioServerDriver/ASDObject.h>

@class ASDStreamFormat, NSArray, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface ASDStream : ASDObject
{
    ASDStreamFormat *_physicalFormat;
    NSArray *_physicalFormats;
    NSObject<OS_dispatch_queue> *_physicalFormatQueue;
    NSMutableArray *_controls;
    NSObject<OS_dispatch_queue> *_controlQueue;
    NSString *_streamName;
    unsigned int _latency;
    BOOL _isTapStream;
    CDUnknownBlockType _readInputBlockUnretained;
    CDUnknownBlockType _convertInputBlockUnretained;
    CDUnknownBlockType _processInputBlockUnretained;
    CDUnknownBlockType _processOutputBlockUnretained;
    CDUnknownBlockType _mixOutputBlockUnretained;
    CDUnknownBlockType _processMixBlockUnretained;
    CDUnknownBlockType _convertMixBlockUnretained;
    CDUnknownBlockType _writeMixBlockUnretained;
    BOOL _isActive;
    BOOL _physicalFormatSettable;
    unsigned int _direction;
    unsigned int _startingChannel;
    unsigned int _terminalType;
    CDUnknownBlockType _readInputBlock;
    CDUnknownBlockType _convertInputBlock;
    CDUnknownBlockType _processInputBlock;
    CDUnknownBlockType _processOutputBlock;
    CDUnknownBlockType _mixOutputBlock;
    CDUnknownBlockType _processMixBlock;
    CDUnknownBlockType _convertMixBlock;
    CDUnknownBlockType _writeMixBlock;
}

@property(copy, nonatomic) CDUnknownBlockType writeMixBlock; // @synthesize writeMixBlock=_writeMixBlock;
@property(copy, nonatomic) CDUnknownBlockType convertMixBlock; // @synthesize convertMixBlock=_convertMixBlock;
@property(copy, nonatomic) CDUnknownBlockType processMixBlock; // @synthesize processMixBlock=_processMixBlock;
@property(copy, nonatomic) CDUnknownBlockType mixOutputBlock; // @synthesize mixOutputBlock=_mixOutputBlock;
@property(copy, nonatomic) CDUnknownBlockType processOutputBlock; // @synthesize processOutputBlock=_processOutputBlock;
@property(copy, nonatomic) CDUnknownBlockType processInputBlock; // @synthesize processInputBlock=_processInputBlock;
@property(copy, nonatomic) CDUnknownBlockType convertInputBlock; // @synthesize convertInputBlock=_convertInputBlock;
@property(copy, nonatomic) CDUnknownBlockType readInputBlock; // @synthesize readInputBlock=_readInputBlock;
@property(nonatomic) unsigned int terminalType; // @synthesize terminalType=_terminalType;
@property(nonatomic, getter=isPhysicalFormatSettable) BOOL physicalFormatSettable; // @synthesize physicalFormatSettable=_physicalFormatSettable;
@property(nonatomic) unsigned int startingChannel; // @synthesize startingChannel=_startingChannel;
@property(nonatomic) unsigned int direction; // @synthesize direction=_direction;
@property(nonatomic) BOOL isActive; // @synthesize isActive=_isActive;
- (void).cxx_destruct;
- (id)driverClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
@property(readonly, nonatomic) CDUnknownBlockType *writeMixBlockUnretainedPtr;
@property(readonly, nonatomic) CDUnknownBlockType *convertMixBlockUnretainedPtr;
@property(readonly, nonatomic) CDUnknownBlockType *processMixBlockUnretainedPtr;
@property(readonly, nonatomic) CDUnknownBlockType *mixOutputBlockUnretainedPtr;
@property(readonly, nonatomic) CDUnknownBlockType *processOutputBlockUnretainedPtr;
@property(readonly, nonatomic) CDUnknownBlockType *processInputBlockUnretainedPtr;
@property(readonly, nonatomic) CDUnknownBlockType *convertInputBlockUnretainedPtr;
@property(readonly, nonatomic) CDUnknownBlockType *readInputBlockUnretainedPtr;
- (id)channelNumberForChannelIndex:(unsigned int)arg1;
- (id)channelCategoryForChannelIndex:(unsigned int)arg1;
- (id)channelNameForChannelIndex:(unsigned int)arg1;
- (BOOL)changePhysicalFormat:(id)arg1;
- (BOOL)deviceChangedToSamplingRate:(double)arg1;
- (void)stopStream;
- (void)startStream;
@property(nonatomic) unsigned int latency; // @dynamic latency;
@property(nonatomic) BOOL isTapStream;
@property(copy, nonatomic) NSString *streamName; // @dynamic streamName;
- (id)controls;
- (void)removeControl:(id)arg1;
- (void)addControl:(id)arg1;
@property(copy, nonatomic) ASDStreamFormat *physicalFormat; // @dynamic physicalFormat;
@property(copy, nonatomic) NSArray *physicalFormats; // @dynamic physicalFormats;
- (void)removePhysicalFormat:(id)arg1;
- (void)addPhysicalFormat:(id)arg1;
- (BOOL)setProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int)arg4 andData:(const void *)arg5 forClient:(int)arg6;
- (BOOL)isPropertySettable:(const struct AudioObjectPropertyAddress *)arg1;
- (BOOL)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (BOOL)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (unsigned int)scope;
- (id)initWithDirection:(unsigned int)arg1 withPlugin:(id)arg2;
- (id)initWithPlugin:(id)arg1;

@end

