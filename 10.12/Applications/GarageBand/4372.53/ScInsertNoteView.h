//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSView.h>

@interface ScInsertNoteView : NSView
{
    int m_currentValue;
}

+ (void)getElemRects:(struct CGRect *)arg1;
+ (void)drawImage:(int)arg1 inRect:(struct CGRect)arg2 respectFlipped:(BOOL)arg3;
+ (int)imageIndexFromSimpleInsertID:(int)arg1;
- (void)setCurrentValue:(int)arg1;
- (int)currentValue;
- (int)elementAtLocalPoint:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 currentValue:(int)arg2;

@end

