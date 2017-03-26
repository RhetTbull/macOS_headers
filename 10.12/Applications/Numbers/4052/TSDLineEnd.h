//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "TSDMixing-Protocol.h"
#import "TSUKeyValueProxyLeaf-Protocol.h"

@class NSString;

@interface TSDLineEnd : NSObject <TSUKeyValueProxyLeaf, GSSPAutoEncodable, NSCopying, TSDMixing>
{
    struct CGPath *mPath;
    struct CGPath *mWrapPath;
    struct CGPoint mEndPoint;
    BOOL mIsFilled;
    NSString *mIdentifier;
    int mLineJoin;
}

+ (id)lineEndWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(BOOL)arg4 identifier:(id)arg5;
+ (id)lineEndWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(BOOL)arg3 identifier:(id)arg4;
+ (id)lineEndWithIdentifier:(id)arg1;
+ (id)lineEndWithType:(int)arg1;
+ (id)none;
+ (id)line;
+ (id)invertedArrow;
+ (id)openCircle;
+ (id)openSquare;
+ (id)filledSquare;
+ (id)filledArrow;
+ (id)openArrow;
+ (id)filledDiamond;
+ (id)filledCircle;
+ (id)simpleArrow;
+ (BOOL)isKeyValueProxyLeafType;
+ (id)instanceWithArchive:(const struct LineEndArchive *)arg1 unarchiver:(id)arg2;
+ (BOOL)icid_lineEnd:(id)arg1 isEqualToLineEnd:(id)arg2;
+ (id)icid_legacyFilledDiamond;
+ (id)icid_legacyFilledCircle;
+ (id)icid_legacyOpenArrow;
+ (id)icid_legacySimpleArrow;
@property(readonly, nonatomic) int lineJoin; // @synthesize lineJoin=mLineJoin;
@property(readonly, nonatomic) BOOL isFilled; // @synthesize isFilled=mIsFilled;
@property(readonly, nonatomic) struct CGPoint endPoint; // @synthesize endPoint=mEndPoint;
@property(readonly, nonatomic) struct CGPath *path; // @synthesize path=mPath;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=mIdentifier;
- (id)lineEndImageForContentsScale:(double)arg1 withSize:(struct CGSize)arg2 onRight:(BOOL)arg3;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) BOOL isNone;
@property(readonly, nonatomic) struct CGPath *wrapPath;
- (struct CGImage *)newLineEndImageOnRight:(BOOL)arg1 forContentsScale:(double)arg2 withSize:(struct CGSize)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)dealloc;
- (id)initWithPath:(struct CGPath *)arg1 endPoint:(struct CGPoint)arg2 isFilled:(BOOL)arg3 identifier:(id)arg4;
- (id)initWithPath:(struct CGPath *)arg1 wrapPath:(struct CGPath *)arg2 endPoint:(struct CGPoint)arg3 isFilled:(BOOL)arg4 identifier:(id)arg5 lineJoin:(int)arg6;
- (id)lineEndImageForPopupMenu:(double)arg1 onRight:(BOOL)arg2;
- (void)saveToArchive:(struct LineEndArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct LineEndArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPLineEnd:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithQDLineEnd:(id)arg1 state:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

