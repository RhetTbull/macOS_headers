//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IMBalloonPlugin, IMBalloonPluginDataSource, NSString;
@protocol IMTranscriptBalloonPlugInController;

@protocol SOBalloonPluginCache <NSObject>
- (void)setBalloonPlugin:(IMBalloonPlugin *)arg1 controller:(id <IMTranscriptBalloonPlugInController>)arg2 dataSource:(IMBalloonPluginDataSource *)arg3 forGUID:(NSString *)arg4;
- (id <IMTranscriptBalloonPlugInController>)balloonPluginControllerForGUID:(NSString *)arg1;
- (IMBalloonPlugin *)balloonPluginForGUID:(NSString *)arg1;
- (IMBalloonPluginDataSource *)dataSourceForGUID:(NSString *)arg1;
@end

