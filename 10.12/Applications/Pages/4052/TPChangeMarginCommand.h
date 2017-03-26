//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@interface TPChangeMarginCommand : TSKCommand
{
    int _margin;
    double _marginValue;
    BOOL _coalesceable;
}

@property(readonly, nonatomic, getter=isCoalesceable) BOOL coalesceable; // @synthesize coalesceable=_coalesceable;
@property(readonly, nonatomic) int margin; // @synthesize margin=_margin;
- (id)actionString;
- (BOOL)canCoalesceWithCommand:(id)arg1 coalescingKind:(long long)arg2;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)initWithContext:(id)arg1 margin:(int)arg2 value:(double)arg3 coalesceable:(BOOL)arg4;

@end

