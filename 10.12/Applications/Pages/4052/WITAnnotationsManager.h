//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WITAnnotationsManager : NSObject
{
    NSMutableArray *_ranges;
}

@property(retain) NSMutableArray *ranges; // @synthesize ranges=_ranges;
- (unsigned long long)rangesCount;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (id)annotationsAtIndex:(unsigned long long)arg1;
- (void)addAnnotation:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)dealloc;
- (id)init;

@end

