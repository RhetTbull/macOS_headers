//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDMedia-Protocol.h"
#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class GQDBezierPath, GQDFilteredImage, NSString;

@interface GQDImageMedia : NSObject <ICExportable, GQDNameMappable, GQDMedia>
{
    GQDFilteredImage *mFilteredImage;
    GQDBezierPath *mAlphaMask;
}

+ (const struct StateSpec *)stateForReading;
- (id)alphaMask;
- (id)imageBinary;
- (id)filteredImage;
- (struct __CFString *)displayName;
- (struct CGSize)naturalsize;
- (void)dealloc;
- (void)setAlphaMask:(id)arg1;
- (void)setFilteredImage:(id)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

