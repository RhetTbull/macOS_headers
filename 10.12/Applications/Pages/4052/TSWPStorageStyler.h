//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPStorage;

@interface TSWPStorageStyler : NSObject
{
    TSWPStorage *_storage;
    int _attributeArrayKind;
}

@property(readonly, retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (void)performStylingInRange:(struct _NSRange)arg1 undoTransaction:(struct TSWPStorageTransaction *)arg2;
- (void)applyStyle:(id)arg1 range:(struct _NSRange)arg2 undoTransaction:(struct TSWPStorageTransaction *)arg3;
- (id)replacementStyleForStyle:(id)arg1 range:(struct _NSRange)arg2;
- (void)dealloc;
- (id)initWithStorage:(id)arg1 attributeArrayKind:(int)arg2;

@end

