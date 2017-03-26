//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GRChartView, GRDataSet, GRPieDataSet, NSArray, NSColor, NSMenu, NSMenuItem, NSMutableArray, NSNumberFormatter, NSWindow, SMCPUInfo, SMCPUMonitor, SMDiskInfo, SMNetworkInfo, SMProcessController;

@interface SMBase : NSObject
{
    NSMenuItem *_showExtendedInIcon;
    NSMenuItem *_showStandardInIcon;
    NSMenuItem *_showNetworkInIcon;
    NSMenuItem *_showDiskInIcon;
    NSMenuItem *_showMemoryInIcon;
    NSMenuItem *_showApplicationIcon;
    NSMenuItem *_showExtendedInIconDock;
    NSMenuItem *_showStandardInIconDock;
    NSMenuItem *_showNetworkInIconDock;
    NSMenuItem *_showDiskInIconDock;
    NSMenuItem *_showMemoryInIconDock;
    NSMenuItem *_showApplicationIconDock;
    NSMenu *_dockMenu;
    SMCPUMonitor *_cpuController;
    SMCPUInfo *_cpuInfo;
    SMNetworkInfo *_networkInfo;
    SMDiskInfo *_diskInfo;
    SMProcessController *_processController;
    NSWindow *_processWindow;
    NSNumberFormatter *_sizeFormatter;
    NSNumberFormatter *_bytesFormatter;
    NSNumberFormatter *_secondsFormatter;
    NSNumberFormatter *_minutesFormatter;
    GRChartView *_dockView;
    NSMutableArray *_inArray;
    NSMutableArray *_outArray;
    GRPieDataSet *_pieSet;
    GRDataSet *_inSet;
    GRDataSet *_outSet;
    NSColor *_inColor;
    NSColor *_outColor;
    int _dockIconType;
    NSArray *_pieArray;
    NSArray *_pieColorArray;
}

+ (id)sharedInstance;
@property(retain) NSArray *pieColorArray; // @synthesize pieColorArray=_pieColorArray;
@property(retain) NSArray *pieArray; // @synthesize pieArray=_pieArray;
- (void).cxx_destruct;
- (void)setOutArray:(id)arg1;
- (void)setInArray:(id)arg1;
- (void)setOutColor:(id)arg1;
- (void)setInColor:(id)arg1;
- (id)chart:(id)arg1 colorForDataSet:(id)arg2 element:(unsigned long long)arg3;
- (double)chart:(id)arg1 yValueForDataSet:(id)arg2 element:(unsigned long long)arg3;
- (unsigned long long)chart:(id)arg1 numberOfElementsForDataSet:(id)arg2;
- (void)showMemoryInDockIcon:(id)arg1;
- (void)showDiskInDockIcon:(id)arg1;
- (void)showNetworkInDockIcon:(id)arg1;
- (void)setupDockIconForLineChart;
- (void)showNothingInDockIcon:(id)arg1;
- (void)showStandardInDockIcon:(id)arg1;
- (void)showExtendedInDockIcon:(id)arg1;
- (void)selectDockMenu:(id)arg1;
- (void)selectMenu:(id)arg1;
- (void)updateDockIcon;
- (id)monitoredView;
@property(readonly) int dockIconType; // @synthesize dockIconType=_dockIconType;
- (void)showDiskStats:(id)arg1;
- (void)showNetworkStats:(id)arg1;
- (void)showProcessWindow:(id)arg1;
- (void)clearHistory:(id)arg1;
- (void)showStandardWindow:(id)arg1;
- (void)showExtendedWindow:(id)arg1;
- (id)descriptionForBytesPerSecond:(unsigned long long)arg1;
- (id)descriptionForSize:(id)arg1 delta:(id)arg2;
- (id)sizeDescriptionForSize:(unsigned long long)arg1;
- (id)descriptionForTimeInterval:(double)arg1;
- (void)awakeFromNib;
- (id)init;
- (id)locString:(id)arg1;

@end

