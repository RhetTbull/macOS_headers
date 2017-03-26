//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FFNumericEntryDelegate-Protocol.h"

@class PETimecodeDisplayViewController;

@interface PENumericEntryManager : NSObject <FFNumericEntryDelegate>
{
    PETimecodeDisplayViewController *_timecodeDisplayViewController;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedNumericEntryManager;
@property(retain, nonatomic) PETimecodeDisplayViewController *timecodeDisplayViewController; // @synthesize timecodeDisplayViewController=_timecodeDisplayViewController;
- (void)updateTimecodeDisplay;
- (void)setNumericEntryShowsSubframes:(BOOL)arg1;
- (void)setNumericEntryDirection:(int)arg1;
- (void)setNumericEntryType:(int)arg1;
- (void)setNumericEntryValue:(id)arg1;
- (void)numericEntryDidEnd;
- (void)numericEntryWillBegin;
- (void)dealloc;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

