//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MxlVoiceRange : NSObject
{
    long long staffNumber1;
    long long staffLinearID7;
    long long voiceNumber1;
    struct MxlXPos startXPos;
    struct MxlXPos stopXPos;
}

- (long long)voiceNumber1;
- (long long)staffNumber1;
- (long long)staffLinearID7;
- (long long)stop_line_x;
- (long long)stop_abs_x;
- (long long)start_line_x;
- (long long)start_abs_x;
- (void)dealloc;
- (id)initWithVoice1:(struct ScVoice *)arg1;

@end

