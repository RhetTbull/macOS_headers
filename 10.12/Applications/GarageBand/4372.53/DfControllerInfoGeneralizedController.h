//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "DfControllerInfo.h"

@class DfTrack;

@interface DfControllerInfoGeneralizedController : DfControllerInfo
{
    DfTrack *m_track;
}

- (float)currentNormalizedValue;
- (long long)currentEventValue;
- (id)stringFromEventValue:(long long)arg1;
- (float)displayValueFromEventValue:(long long)arg1;
- (void)setInitialValues;
- (void)dealloc;
- (id)initWithGeneralizedController:(CDStruct_5115be14)arg1 andTrack:(id)arg2 retainTrack:(BOOL)arg3;

@end

