//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "CalUIOccurrenceDelegate-Protocol.h"

@class CalUIDotOccurrence, CalUIOccurrence, NSColor;

@protocol CalUIDotOccurrenceDelegate <CalUIOccurrenceDelegate>
- (BOOL)occurrenceHasValidColumnLayout:(CalUIDotOccurrence *)arg1;
- (BOOL)shouldOccurrenceShowAllDayString:(CalUIOccurrence *)arg1;
- (BOOL)shouldOccurrenceShowEndTime:(CalUIOccurrence *)arg1;
- (BOOL)shouldOccurrenceShowStartTime:(CalUIOccurrence *)arg1;
- (double)desiredHeightForOccurrence:(CalUIOccurrence *)arg1;
- (BOOL)shouldOccurrenceDrawDot:(CalUIOccurrence *)arg1;
- (BOOL)shouldOccurrenceDrawBackground:(CalUIOccurrence *)arg1;
- (BOOL)occurrenceAlwaysDrawsBackground:(CalUIOccurrence *)arg1;

@optional
- (NSColor *)dateColor;
- (NSColor *)titleColor;
@end

