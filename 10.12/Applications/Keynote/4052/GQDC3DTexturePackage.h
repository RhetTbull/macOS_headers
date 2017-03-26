//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDC3DTexturePackage : NSObject <ICExportable, GQDNameMappable>
{
    struct __CFDictionary *mDictionary;
    struct __CFString *mFillName;
    struct __CFString *mSeriesName;
    struct __CFString *mTextureSetID;
}

+ (const struct StateSpec *)stateForReading;
- (void)setTextureSetID:(struct __CFString *)arg1;
- (struct __CFString *)textureSetID;
- (void)setSeriesName:(struct __CFString *)arg1;
- (struct __CFString *)seriesName;
- (void)setFillName:(struct __CFString *)arg1;
- (struct __CFString *)fillName;
- (void)setDictionary:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)dictionary;
- (void)dealloc;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;
- (id)tsch3dFillSetIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

