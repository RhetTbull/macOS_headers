//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AACControllerRequest.h"

@interface AACChangeClockDomainClockSourceControllerRequest : AACControllerRequest
{
    unsigned short _clockDomainIndex;
    unsigned short _clockSourceIndex;
}

@property(nonatomic) unsigned short clockSourceIndex; // @synthesize clockSourceIndex=_clockSourceIndex;
@property(nonatomic) unsigned short clockDomainIndex; // @synthesize clockDomainIndex=_clockDomainIndex;
- (void)executeRequest;
- (id)informativeText;
- (id)mainText;
- (id)init;

@end

