//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADGraphicProperties;

@interface CHDMarker : NSObject
{
    unsigned int mSize;
    int mStyle;
    OADGraphicProperties *mGraphicProperties;
}

- (id)description;
- (void)setSize:(unsigned int)arg1;
- (unsigned int)size;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)dealloc;
- (id)init;

@end

