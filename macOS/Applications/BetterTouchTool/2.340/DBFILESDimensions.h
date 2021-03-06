//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DBSerializable.h"
#import "NSCopying.h"

@class NSNumber, NSString;

@interface DBFILESDimensions : NSObject <DBSerializable, NSCopying>
{
    NSNumber *_height;
    NSNumber *_width;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(readonly, nonatomic) NSNumber *height; // @synthesize height=_height;
- (void).cxx_destruct;
- (BOOL)isEqualToDimensions:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithHeight:(id)arg1 width:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

