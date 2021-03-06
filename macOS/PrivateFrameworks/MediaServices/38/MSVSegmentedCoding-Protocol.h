//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "NSSecureCoding.h"

@class NSString;

@protocol MSVSegmentedCoding <NSSecureCoding, NSObject>
- (void)didRestoreVersion:(long long)arg1 forSegment:(NSString *)arg2;
- (long long)versionForSegment:(NSString *)arg1;
- (NSString *)segmentForCodingKey:(NSString *)arg1;
@end

