//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSSPAutoEncodable-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@interface TSDExteriorTextWrap : NSObject <GSSPAutoEncodable, NSCopying, NSMutableCopying>
{
    BOOL _isHTMLWrap;
    int _type;
    int _direction;
    int _fitType;
    double _margin;
    double _alphaThreshold;
}

+ (id)exteriorTextWrapWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
+ (id)exteriorTextWrap;
@property(readonly, nonatomic) double alphaThreshold; // @synthesize alphaThreshold=_alphaThreshold;
@property(readonly, nonatomic) double margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) int fitType; // @synthesize fitType=_fitType;
@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL isHTMLWrap; // @synthesize isHTMLWrap=_isHTMLWrap;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
- (id)init;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;
- (void)populateGSSPExteriorTextWrap:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (void)saveToArchive:(struct ExteriorTextWrapArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ExteriorTextWrapArchive *)arg1;

@end

