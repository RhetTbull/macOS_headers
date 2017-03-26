//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class EQLine, FPool, NSImage, NSMutableArray;

@interface EQEquation : NSObject <NSCoding, NSCopying>
{
    id mView;
    EQLine *mRootLine;
    NSImage *mImage;
    unsigned long long mAlignment;
    struct CGPoint mRootPosition;
    NSMutableArray *mWords;
    NSMutableArray *mShortcuts;
    FPool *mFunctionPool;
    BOOL _isHighlighted;
}

+ (BOOL)drawFlipped;
+ (id)equationPasteboardTypes;
+ (BOOL)removeZoneAttributes;
+ (id)defaultShortcuts;
- (double)defaultFontSize;
- (id)fontForZone:(id)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (unsigned long long)alignment;
- (void)updateWords;
- (void)setFunctionPool:(id)arg1;
- (id)functionPool;
- (BOOL)isSameAs:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)operationString;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)refreshRootLineWhileInitWithCoder;
- (id)selection;
- (id)PDFRepresentation;
- (id)PDFRepresentationWithSharewareSeal:(BOOL)arg1;
- (id)image;
- (id)shortcuts;
- (id)words;
- (void)localPosition:(struct CGPoint *)arg1;
- (void)globalPosition:(struct CGPoint *)arg1;
- (void)drawFlippedInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 flipped:(BOOL)arg2;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 useImage:(BOOL)arg2;
- (void)updateRootPosition:(struct CGRect)arg1;
- (struct CGSize)scrollBy:(struct CGSize)arg1;
- (void)updateImage;
- (void)drawRootLineAtPosition:(struct CGPoint)arg1;
- (double)imageHeight;
- (double)lineWidth;
- (id)color;
- (id)rootLine;
- (void)setView:(id)arg1;
- (id)view;
- (void)dealloc;
- (id)initWithPasteboard:(id)arg1;
- (id)initWithLine:(id)arg1;
- (id)initWithView:(id)arg1 text:(id)arg2;
- (id)initWithView:(id)arg1;
- (void)awake;
- (void)userDefaultsDidChange:(id)arg1;
- (void)refreshImage;
- (BOOL)isHighlighted;
- (void)setIsHighlighted:(BOOL)arg1;
- (id)functionPool;
- (struct CGPoint)rootPosition;
- (void)popDefaultAttributes;
- (void)pushDefaultAttributes:(id)arg1;

@end

