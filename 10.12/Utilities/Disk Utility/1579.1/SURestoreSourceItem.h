//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSImage, NSString;

@interface SURestoreSourceItem : NSObject
{
    int _type;
    NSString *_name;
    NSImage *_icon;
}

@property int type; // @synthesize type=_type;
@property(retain) NSImage *icon; // @synthesize icon=_icon;
@property(retain) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithType:(int)arg1;

@end

