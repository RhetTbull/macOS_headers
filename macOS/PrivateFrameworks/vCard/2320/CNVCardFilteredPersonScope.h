//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;

@interface CNVCardFilteredPersonScope : NSObject
{
    NSSet *_blacklist;
    unsigned long long _filterOptions;
}

@property(readonly) unsigned long long filterOptions; // @synthesize filterOptions=_filterOptions;
@property(readonly) NSSet *blacklist; // @synthesize blacklist=_blacklist;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithBlacklist:(id)arg1 options:(unsigned long long)arg2;

@end

