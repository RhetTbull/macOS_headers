//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"

@class GQDWPLayoutFrame, NSString;

@interface GQDIBAText : NSObject <GQDNameMappable>
{
    GQDWPLayoutFrame *_layoutFrame;
    struct CGRect _textRect;
}

+ (const struct StateSpec *)stateForReading;
+ (BOOL)layoutFrameIsEmpty:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGRect textRect; // @synthesize textRect=_textRect;
@property(retain, nonatomic) GQDWPLayoutFrame *layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(readonly, nonatomic) BOOL isEmpty;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

