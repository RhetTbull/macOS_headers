//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AXValidatingElement.h"

#import "AXGuide-Protocol.h"

@interface AXDomGuide : AXValidatingElement <AXGuide>
{
}

+ (void)initialize;
- (void)validateSelf;
- (void)axSetGuideType:(int)arg1;
- (int)axGetGuideType;
- (void)axSetOffset:(float)arg1;
- (float)axGetOffset;

@end

