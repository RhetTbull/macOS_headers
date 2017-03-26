//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GQPObjectHandler-Protocol.h"
#import "GQPObjectReader-Protocol.h"

@class GQDSStyle, GQDSStylesheet, NSString;

@interface GQPStyleReader : NSObject <GQPObjectReader, GQPObjectHandler>
{
    int mStyleType;
    struct __CFArray *mEntries;
    GQDSStylesheet *mStylesheet;
    int mCurrentProperty;
    BOOL mStyleIsIdentified;
    BOOL mStyleIdentiferEqualsParentIdentifier;
    char *mIdentifier;
    char *mName;
    char *mTabularInternalStyleName;
    char *mUid;
    char *mParentIdentifier;
    GQDSStyle *mStyle;
}

+ (void)initialize;
- (void)handleObject:(id)arg1;
- (int)donePrescanReading:(id)arg1;
- (int)doneReading:(id)arg1;
- (int)beginPrescanReadingFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (int)beginReadingFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;
- (void)dealloc;
- (id)initWithStyleType:(int)arg1;
- (void)handleDoubleValue:(double)arg1;
- (void)handleFloatValue:(float)arg1;
- (void)handleIntValue:(int)arg1;
- (void)handleBoolValue:(BOOL)arg1;
- (void)doneProperty;
- (BOOL)beginProperty:(const char *)arg1;
- (id)createPrescanStyle;
- (id)createStyle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

