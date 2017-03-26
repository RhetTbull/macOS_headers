//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SPInfoSystem : NSObject
{
    NSString *_machineName;
    NSString *_macModelString;
    NSString *_processorString;
    NSString *_totalMemoryString;
    NSString *_memoryKindString;
    NSString *_mainGraphicsString;
    NSString *_altGraphicsString;
    NSString *_serialString;
    NSString *_configCode;
    NSString *_osTitleString;
    NSString *_osVersionString;
    NSString *_osBuildString;
    NSString *_osBootVolumeName;
    BOOL _isBeta;
}

@property(readonly) BOOL isBeta; // @synthesize isBeta=_isBeta;
@property(readonly) NSString *osBuildString; // @synthesize osBuildString=_osBuildString;
@property(readonly) NSString *osVersionString; // @synthesize osVersionString=_osVersionString;
@property(readonly) NSString *osTitleString; // @synthesize osTitleString=_osTitleString;
@property(readonly) NSString *altGraphicsString; // @synthesize altGraphicsString=_altGraphicsString;
@property(readonly) NSString *mainGraphicsString; // @synthesize mainGraphicsString=_mainGraphicsString;
@property(readonly) NSString *totalMemoryString; // @synthesize totalMemoryString=_totalMemoryString;
@property(readonly) NSString *processorString; // @synthesize processorString=_processorString;
@property(readonly) NSString *macModelString; // @synthesize macModelString=_macModelString;
@property(readonly) NSString *machineName; // @synthesize machineName=_machineName;
@property(readonly) NSString *serialString; // @synthesize serialString=_serialString;
@property(readonly) NSString *osBootVolumeName;
- (id)lastUpdateCheck;
- (long long)updatesAvailable;
- (void)loadGraphicsInfo;
- (void)loadMemoryInfo;
- (void)dealloc;
- (id)init;

@end

