//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACDropzoneView;
@protocol NSDraggingInfo;

@protocol ACDropzoneViewDelegate <NSObject>
- (void)dropzoneView:(ACDropzoneView *)arg1 performDrag:(id <NSDraggingInfo>)arg2;
- (BOOL)dropzoneView:(ACDropzoneView *)arg1 validateDrag:(id <NSDraggingInfo>)arg2;
@end

