//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _IMAVControlAuxiliary : NSObject
{
}

- (id)controlBar;
- (void)setControlBar:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (double)doubleValue;
- (void)setFloatValue:(float)arg1;
- (float)floatValue;
- (void)setIntValue:(int)arg1;
- (int)intValue;
- (void)setIntegerValue:(long long)arg1;
- (long long)integerValue;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (long long)tag;
- (void)setTag:(long long)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (id)dictionaryRepresentation;
- (void)_performControlDidChange;
- (id)initWithControl:(id)arg1;

@end

