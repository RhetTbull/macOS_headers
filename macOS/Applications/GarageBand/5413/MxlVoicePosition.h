//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MxlDirection;

@interface MxlVoicePosition : NSObject
{
    long long staffNumber2;
    long long voiceNumber2;
    MxlDirection *theDirection;
    struct MxlXPos positionXPos;
}

@property(retain) MxlDirection *theDirection; // @synthesize theDirection;
- (long long)voiceNumber2;
- (long long)staffLinID2;
- (long long)staffNumber2;
- (long long)position_line_x;
- (long long)position_abs_x;
- (void)dealloc;
- (id)initWithStaffNum:(long long)arg1 voiceNum:(long long)arg2;

@end

