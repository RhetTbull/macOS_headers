//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GQDPath.h"

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDBezierPath : GQDPath <ICExportable, GQDNameMappable>
{
    struct CGPath *mPath;
    char *mPathStr;
}

+ (struct __CFString *)newCFStringFromPath:(struct CGPath *)arg1;
+ (const struct StateSpec *)stateForReading;
+ (struct CGPath *)newPathFromCString:(const char *)arg1;
@property(readonly) unsigned long long hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)horizontalFlip;
- (BOOL)verticalFlip;
- (BOOL)hasHorizontalFlip;
- (BOOL)hasVerticalFlip;
- (struct CGPath *)newBezierPath;
- (char *)pathStr;
- (struct CGPath *)path;
- (BOOL)isRectangular;
- (void)dealloc;
- (id)initWithPathString:(const char *)arg1;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (id)initWithCGPath:(struct CGPath *)arg1;
- (BOOL)encodeWithExporter:(id)arg1 elementName:(const char *)arg2;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

