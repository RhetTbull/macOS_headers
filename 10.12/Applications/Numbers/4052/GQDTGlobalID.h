//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQDNameMappable-Protocol.h"
#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDTGlobalID : NSObject <ICExportable, GQDNameMappable>
{
    struct __CFString *mHexString;
}

+ (const struct StateSpec *)stateForReading;
@property(readonly, copy) NSString *description;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (void)dealloc;
- (id)_initEmpty;
- (id)initWithCFStringRef:(struct __CFString *)arg1;
- (id)init;
- (char *)elementName;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

