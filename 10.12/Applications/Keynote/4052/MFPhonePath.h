//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "MFPath.h"

@class TSUBezierPath;

@interface MFPhonePath : MFPath
{
    TSUBezierPath *m_path;
    int m_state;
}

- (void)appendBezierPath:(id)arg1 dc:(id)arg2;
- (id)getBezierPath;
- (int)fill:(id)arg1;
- (int)stroke:(id)arg1;
- (int)widen:(id)arg1;
- (int)flatten;
- (int)closeFigure;
- (struct CGPoint)currentPoint;
- (int)abort;
- (int)end;
- (int)begin;
- (BOOL)isOpen;
- (int)state;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1 state:(int)arg2;
- (id)init;

@end

