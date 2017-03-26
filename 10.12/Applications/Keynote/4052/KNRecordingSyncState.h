//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSUUID;

@interface KNRecordingSyncState : NSObject <GSSPAutoEncodable, NSCopying>
{
    NSUUID *_outOfSyncToken;
    BOOL _canClearOutOfSyncToken;
}

@property(readonly, nonatomic) NSUUID *outOfSyncToken; // @synthesize outOfSyncToken=_outOfSyncToken;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(BOOL)arg1 withLocalOutOfSyncToken:(id)arg2;
- (BOOL)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg1;
@property(readonly, nonatomic, getter=isRecordingOutOfSync) BOOL recordingOutOfSync;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)initWithOutOfSyncToken:(id)arg1 canClearOutOfSyncToken:(BOOL)arg2;
- (void)saveToArchive:(struct RecordingSyncState *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct RecordingSyncState *)arg1 unarchiver:(id)arg2;
- (void)populateGSSPRecordingSyncState:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

