//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, TSPDocumentRevision;

@interface TSACollaborationValidatorCacheKey : NSObject <NSCopying>
{
    NSString *_shareToken;
    TSPDocumentRevision *_revision;
}

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithShareToken:(id)arg1 revision:(id)arg2;
- (id)init;

@end

