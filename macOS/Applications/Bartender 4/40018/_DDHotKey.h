//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DDHotKey.h"

@class NSValue;

@interface _DDHotKey : DDHotKey
{
    id target;
    SEL action;
    id object;
    CDUnknownBlockType task;
    unsigned short keyCode;
    unsigned long long modifierFlags;
    unsigned int hotKeyID;
    NSValue *hotKeyRef;
}

@property(copy, nonatomic) CDUnknownBlockType task; // @synthesize task;
@property(retain, nonatomic) NSValue *hotKeyRef; // @synthesize hotKeyRef;
@property(nonatomic) unsigned int hotKeyID; // @synthesize hotKeyID;
@property(nonatomic) unsigned long long modifierFlags; // @synthesize modifierFlags;
@property(nonatomic) unsigned short keyCode; // @synthesize keyCode;
@property(retain, nonatomic) id object; // @synthesize object;
@property(nonatomic) SEL action; // @synthesize action;
@property(retain, nonatomic) id target; // @synthesize target;
- (void)dealloc;
- (void)unregisterHotKey;
- (BOOL)registerHotKey;
- (id)actionString;
- (void)invokeWithEvent:(id)arg1;
- (Class)class;

@end

