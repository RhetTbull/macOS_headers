//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TSWPLayoutTarget;

@protocol TSWPOffscreenColumn <NSObject>
@property(readonly, nonatomic) unsigned long long nextWidowPullsDownFromCharIndex;
@property(readonly, nonatomic) struct _NSRange anchoredRange;
@property(readonly, nonatomic) unsigned long long startAnchoredCharIndex;
@property(readonly, nonatomic) struct _NSRange range;
@property(readonly, nonatomic) unsigned long long startCharIndex;
- (void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id <TSWPLayoutTarget>)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4;
@end

