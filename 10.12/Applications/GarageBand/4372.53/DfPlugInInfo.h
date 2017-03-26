//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DfPlugInInfo : NSObject
{
    struct _LGPlugInInfo m_LgPlugInInfo;
}

- (int)numOutsForBus:(long long)arg1;
- (struct _LGPlugInInfo *)_getPtr;
@property(readonly) unsigned int auComponentType;
@property(readonly) NSString *nsShortName;
@property(readonly) NSString *nsName;
@property(readonly) const void *reference;
@property(readonly) int fCurrent;
@property(readonly) BOOL fIsLoaded;
@property(readonly) BOOL isMidiPlugin;
@property(readonly) int plugInIndex;
@property(readonly) unsigned int plugInID;
@property(readonly) unsigned int productID;
@property(readonly) unsigned int manufacturerID;
@property(readonly) BOOL fIsLogicPlugIn;
@property(readonly) int fInstrument;
@property(readonly) int numOutBuses;
@property(readonly) int numOutputs;
@property(readonly) int numInputs;
- (void)dealloc;
- (id)initPlugInInfoWith:(id)arg1 instID:(int)arg2 andSlot:(long long)arg3 isMidiPlugin:(BOOL)arg4 andPlugInIndex:(long long)arg5 useInputObject:(BOOL)arg6;
- (id)initPlugInInfoWithDocument:(id)arg1 instID:(int)arg2 andSlot:(long long)arg3 useInputObject:(BOOL)arg4;
- (id)initPlugInInfoWithDocument:(id)arg1 instID:(int)arg2 andSlot:(long long)arg3 isMidiPlugin:(BOOL)arg4 useInputObject:(BOOL)arg5;

@end

