//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreLocation/NSCopying-Protocol.h>
#import <CoreLocation/NSSecureCoding-Protocol.h>

@class _CLLSLMapRoadSegment;

@interface _CLLSLHeadingSupplInfo : NSObject <NSCopying, NSSecureCoding>
{
    _CLLSLMapRoadSegment *_roadSegment;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) _CLLSLMapRoadSegment *roadSegment; // @synthesize roadSegment=_roadSegment;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

