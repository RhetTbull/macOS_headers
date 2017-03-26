//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableArray, NSString;

@interface DfMagicMentorSongPart : NSObject
{
    NSString *m_name;
    NSString *m_subChapterName;
    NSMutableArray *m_sections;
    NSDictionary *m_properties;
}

+ (id)songPartWithName:(id)arg1 subChapterName:(id)arg2;
+ (id)songPartWithName:(id)arg1 subChapterName:(id)arg2 sections:(id)arg3;
- (void)setProperties:(id)arg1;
- (id)properties;
- (void)addSection:(id)arg1;
- (id)sections;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (long long)markerClockFrom:(long long)arg1 inDirection:(int)arg2;
- (long long)sectionIndexForClock:(long long)arg1;
- (id)markerForClock:(long long)arg1;
- (long long)length;
- (long long)endClock;
- (long long)startClock;
- (id)markerAtIndex:(unsigned long long)arg1;
- (id)lastMarker;
- (id)firstMarker;
- (id)subChapterName;
- (id)name;
- (BOOL)hasKeepOnExportProperty;
- (void)dealloc;
- (id)initWithName:(id)arg1 subChapterName:(id)arg2 sections:(id)arg3;
- (id)initWithName:(id)arg1 subChapterName:(id)arg2;

@end

