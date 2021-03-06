//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <WebKitLegacy/DOMUIEvent.h>

@class DOMNode;
@protocol DOMEventTarget;

@interface DOMMouseEvent : DOMUIEvent
{
}

- (void)initMouseEvent:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3 view:(id)arg4 detail:(int)arg5 screenX:(int)arg6 screenY:(int)arg7 clientX:(int)arg8 clientY:(int)arg9 ctrlKey:(BOOL)arg10 altKey:(BOOL)arg11 shiftKey:(BOOL)arg12 metaKey:(BOOL)arg13 button:(unsigned short)arg14 relatedTarget:(id)arg15;
@property(readonly) DOMNode *toElement;
@property(readonly) DOMNode *fromElement;
@property(readonly) int y;
@property(readonly) int x;
@property(readonly) int offsetY;
@property(readonly) int offsetX;
@property(readonly) id <DOMEventTarget> relatedTarget;
@property(readonly) unsigned short button;
@property(readonly) BOOL metaKey;
@property(readonly) BOOL altKey;
@property(readonly) BOOL shiftKey;
@property(readonly) BOOL ctrlKey;
@property(readonly) int clientY;
@property(readonly) int clientX;
@property(readonly) int screenY;
@property(readonly) int screenX;
- (void)initMouseEvent:(id)arg1:(BOOL)arg2:(BOOL)arg3:(id)arg4:(int)arg5:(int)arg6:(int)arg7:(int)arg8:(int)arg9:(BOOL)arg10:(BOOL)arg11:(BOOL)arg12:(BOOL)arg13:(unsigned short)arg14:(id)arg15;

@end

