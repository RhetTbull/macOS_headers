//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface TSWPTab : NSObject <GSSPAutoEncodable, NSCopying>
{
    double _position;
    int _alignment;
    NSString *_leader;
}

+ (id)tab;
+ (id)displayStringFromTabLeader:(id)arg1;
+ (id)stringFromTabAlignment:(int)arg1 isRTL:(BOOL)arg2;
+ (int)tabAlignmentFromString:(id)arg1 isRTL:(BOOL)arg2;
+ (id)tabLeaderFromDisplayString:(id)arg1;
+ (id)tabStopLeaderStringArrowRTL;
+ (id)tabStopLeaderStringArrow;
+ (id)tabStopLeaderStringUnderscore;
+ (id)tabStopLeaderStringDash;
+ (id)tabStopLeaderStringPoint;
+ (id)tabStopDisplayStringArrow;
+ (id)tabStopDisplayStringUnderscore;
+ (id)tabStopDisplayStringDash;
+ (id)tabStopDisplayStringPoint;
+ (id)tabStopDisplayStringNone;
+ (id)tabStopAlignmentStringDecimal;
+ (id)tabStopAlignmentStringRight;
+ (id)tabStopAlignmentStringCenter;
+ (id)tabStopAlignmentStringLeft;
@property(copy, nonatomic) NSString *leader; // @synthesize leader=_leader;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(nonatomic) double position; // @synthesize position=_position;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToPosition:(double)arg1;
- (long long)compare:(id)arg1;
- (long long)compareToPosition:(double)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)saveToArchive:(struct TabArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TabArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (id)init;
- (void)dealloc;
- (void)setPositionInInches:(double)arg1;
- (double)positionInInches;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPTab:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

