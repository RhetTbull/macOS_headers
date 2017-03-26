//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class GQDColor, NSString;

@interface GQDRShadow : NSObject <ICExportable, GQDNameMappable>
{
    float mAngle;
    float mOffset;
    int mRadius;
    float mOpacity;
    BOOL mEnabled;
    GQDColor *mColor;
}

+ (const struct StateSpec *)stateForReading;
+ (id)nullShadow;
- (id)color;
- (BOOL)enabled;
- (float)opacity;
- (int)radius;
- (float)offset;
- (float)angle;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setOpacity:(float)arg1;
- (void)setRadius:(int)arg1;
- (void)setOffset:(float)arg1;
- (void)setAngle:(float)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

