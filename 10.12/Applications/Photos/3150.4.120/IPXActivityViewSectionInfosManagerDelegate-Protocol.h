//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXActivityViewSectionInfosChange, IPXActivityViewSectionInfosManager;

@protocol IPXActivityViewSectionInfosManagerDelegate <NSObject>
- (void)activityViewSectionInfosManager:(IPXActivityViewSectionInfosManager *)arg1 sectionInfosDidChange:(IPXActivityViewSectionInfosChange *)arg2;
- (void)activityViewSectionInfosManager:(IPXActivityViewSectionInfosManager *)arg1 sectionInfosDidLoad:(IPXActivityViewSectionInfosChange *)arg2;
@end

