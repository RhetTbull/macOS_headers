//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ICExportable-Protocol.h"

@class NSString;

@interface GQDTFilterSpec : NSObject <ICExportable>
{
    unsigned short mColumnIndex;
    int mKeyScale;
    int mPredicate;
    struct __CFString *mKey1;
    struct __CFString *mKey2;
    int mDateScale;
    int mDateDirection;
    int mDateType;
}

@property(nonatomic) int dateDirection; // @synthesize dateDirection=mDateDirection;
@property(nonatomic) int dateScale; // @synthesize dateScale=mDateScale;
@property(nonatomic) int keyScale; // @synthesize keyScale=mKeyScale;
@property(nonatomic) unsigned short columnIndex; // @synthesize columnIndex=mColumnIndex;
- (void)dealloc;
- (struct __CFString *)key2;
- (struct __CFString *)key1;
- (void)setKey2:(struct __CFString *)arg1;
- (void)setKey1:(struct __CFString *)arg1;
- (void)setDateType:(int)arg1;
- (int)dateType;
- (void)setPredicate:(int)arg1;
- (int)predicate;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;
- (BOOL)encodeWithExporter:(id)arg1;
- (void)encodeAttributesWithExporter:(id)arg1;
- (char *)elementName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

