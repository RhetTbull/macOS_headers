//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NoteFormatter.h"

@interface SegmentedNoteFormatter : NoteFormatter
{
}

+ (id)sharedSegmentedNoteFormatter;
- (BOOL)allowsSegmentEditing;
- (id)formatterForSegmentTag:(long long)arg1 inObjectValue:(id)arg2;
- (BOOL)getObjectValue:(id *)arg1 forString:(id)arg2 forSegmentWithTag:(long long)arg3 inObjectValue:(id)arg4 errorDescription:(id *)arg5;
- (void)getObjectValue:(id *)arg1 incrementingSegmentWithTag:(long long)arg2 byIncrement:(long long)arg3 inObjectValue:(id)arg4;
- (struct _NSRange)substringRangeForSegmentWithTag:(long long)arg1 inObjectValue:(id)arg2;
- (void)segmentWithTag:(long long)arg1 hasPaddingAtLeft:(char *)arg2 atRight:(char *)arg3 inObjectValue:(id)arg4;
- (long long)defaultSelectedSegmentTagInObjectValue:(id)arg1;
- (long long)segmentFieldWidthForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentIndexForTag:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentTagForIndex:(long long)arg1 inObjectValue:(id)arg2;
- (long long)segmentCountInObjectValue:(id)arg1;

@end

