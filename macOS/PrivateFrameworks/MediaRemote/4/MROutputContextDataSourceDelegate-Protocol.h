//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MRAVOutputDevice, MROutputContextDataSource;

@protocol MROutputContextDataSourceDelegate <NSObject>
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 outputDevice:(MRAVOutputDevice *)arg2 didChangeVolumeControlCapabilities:(unsigned int)arg3;
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 outputDevice:(MRAVOutputDevice *)arg2 didChangeVolume:(float)arg3;
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 didRemoveOutputDevice:(MRAVOutputDevice *)arg2;
- (void)outputContextDataSource:(MROutputContextDataSource *)arg1 didAddOutputDevice:(MRAVOutputDevice *)arg2;
@end

