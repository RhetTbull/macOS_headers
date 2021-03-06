//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSProgress, TMAAudioRecordingCoordinator, TSDMovieInfo, TSPObject;
@protocol TMAAlertPresenter, TSDInfo;

@protocol TMAAudioRecordingCoordinatorDelegate <NSObject>
- (void)audioRecordingCoordinatorDidFinish:(TMAAudioRecordingCoordinator *)arg1;
- (void)audioRecordingCoordinator:(TMAAudioRecordingCoordinator *)arg1 willProcessRecordingWithProgress:(NSProgress *)arg2;
- (void)audioRecordingCoordinator:(TMAAudioRecordingCoordinator *)arg1 didRequestToSelectObjectWithInfo:(TSPObject<TSDInfo> *)arg2 selectionFlags:(unsigned long long)arg3;
- (void)audioRecordingCoordinator:(TMAAudioRecordingCoordinator *)arg1 didRequestToInsertRecording:(TSDMovieInfo *)arg2;
- (id <TMAAlertPresenter>)alertPresenterForAudioRecordingCoordinator:(TMAAudioRecordingCoordinator *)arg1;
- (void)audioRecordingCoordinator:(TMAAudioRecordingCoordinator *)arg1 didUpdateHUDViewCenter:(struct CGPoint)arg2;
- (struct CGPoint)audioRecordingCoordinatorHUDViewCenter:(TMAAudioRecordingCoordinator *)arg1;
@end

