//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSImage, NSString;

__attribute__((visibility("hidden")))
@interface BTTMenuItem : NSObject
{
    NSString *title;
    id representedObject;
    SEL action;
    id target;
    NSImage *icon;
}

@property(retain, nonatomic) NSImage *icon; // @synthesize icon;
@property(nonatomic) id target; // @synthesize target;
@property(nonatomic) SEL action; // @synthesize action;
@property(retain, nonatomic) id representedObject; // @synthesize representedObject;
@property(copy, nonatomic) NSString *title; // @synthesize title;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3 representedObject:(id)arg4;

@end

