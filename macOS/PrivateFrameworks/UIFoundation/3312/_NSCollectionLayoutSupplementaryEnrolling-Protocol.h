//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUUID;

@protocol _NSCollectionLayoutSupplementaryEnrolling <NSObject>
- (void)pruneUncommitedEnrollments;
- (void)commitEnrollment:(NSUUID *)arg1;
- (long long)countForKind:(NSString *)arg1;
- (long long)kindIndexForEnrollmentIdentifier:(NSUUID *)arg1;
- (NSUUID *)enrollSupplementaryForKind:(NSString *)arg1;
@end

