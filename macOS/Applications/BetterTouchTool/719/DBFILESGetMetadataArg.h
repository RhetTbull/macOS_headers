//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DBSerializable-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface DBFILESGetMetadataArg : NSObject <DBSerializable, NSCopying>
{
    NSString *_path;
    NSNumber *_includeMediaInfo;
    NSNumber *_includeDeleted;
    NSNumber *_includeHasExplicitSharedMembers;
}

+ (id)deserialize:(id)arg1;
+ (id)serialize:(id)arg1;
@property(readonly, nonatomic) NSNumber *includeHasExplicitSharedMembers; // @synthesize includeHasExplicitSharedMembers=_includeHasExplicitSharedMembers;
@property(readonly, nonatomic) NSNumber *includeDeleted; // @synthesize includeDeleted=_includeDeleted;
@property(readonly, nonatomic) NSNumber *includeMediaInfo; // @synthesize includeMediaInfo=_includeMediaInfo;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (BOOL)isEqualToGetMetadataArg:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithPath:(id)arg1;
- (id)initWithPath:(id)arg1 includeMediaInfo:(id)arg2 includeDeleted:(id)arg3 includeHasExplicitSharedMembers:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

