//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLSNowPlayingStreamEventMetadata, NSDate;

@interface CLSNowPlayingStreamEvent : NSObject
{
    NSDate *_localStartDate;
    NSDate *_localEndDate;
    CLSNowPlayingStreamEventMetadata *_metadata;
}

+ (id)playbackStreamEventDateSortDescriptors;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CLSNowPlayingStreamEventMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDate *localEndDate; // @synthesize localEndDate=_localEndDate;
@property(readonly, nonatomic) NSDate *localStartDate; // @synthesize localStartDate=_localStartDate;
- (id)description;
- (id)initWithDuetKnowledgeEvent:(id)arg1;

@end

