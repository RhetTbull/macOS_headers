//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GSSPJsonObjectComparatorContext, NSString;

@interface GSSPJsonObjectComparator : NSObject
{
    NSString *_fieldName;
    GSSPJsonObjectComparator *_parent;
    NSObject *_serverObject;
    NSObject *_clientObject;
    GSSPJsonObjectComparatorContext *_context;
}

+ (id)jsonNSDictionaryForSosString:(id)arg1 withObjectContext:(id)arg2 andFilterRules:(id)arg3;
+ (id)jsonNSDictionaryForObject:(id)arg1 withObjectContext:(id)arg2 andFilterRules:(id)arg3;
+ (BOOL)compareServerObject:(id)arg1 againstClientObject:(id)arg2 withPendingRecalc:(BOOL)arg3 successMessage:(id)arg4 failureMessage:(id)arg5 mismatchedCallback:(CDUnknownBlockType)arg6;
+ (id)createCopyStringForMismatchedJsonObjectForServerObject:(id)arg1 andClientObject:(id)arg2;
+ (id)p_nsstringForObject:(id)arg1;
+ (BOOL)compareServerObject:(id)arg1 againstClientObject:(id)arg2 withComparatorContext:(id)arg3;
+ (int)compareServerObject:(id)arg1 againstClientObject:(id)arg2 withFieldName:(id)arg3 andParent:(id)arg4 comparatorContext:(id)arg5;
+ (Class)getComparatorClassForServerObject:(id)arg1 andClientObject:(id)arg2 withFieldName:(id)arg3 andParent:(id)arg4;
+ (id)nsnullToNil:(id)arg1;
+ (id)getRulesForGSSPClass:(Class)arg1;
+ (id)getRulesForSosType:(id)arg1;
+ (id)getRules;
@property(readonly, nonatomic) GSSPJsonObjectComparatorContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) GSSPJsonObjectComparator *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSObject *clientObject; // @synthesize clientObject=_clientObject;
@property(readonly, nonatomic) NSObject *serverObject; // @synthesize serverObject=_serverObject;
@property(readonly, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
- (int)p_compareServerObject:(id)arg1 againstClientObject:(id)arg2;
- (int)compare;
- (void)reportMismatchedWithMessage:(id)arg1 serverObject:(id)arg2 clientObject:(id)arg3;
- (void)getPathToComparator:(id)arg1;
- (void)dealloc;
- (id)initWithServerObject:(id)arg1 clientObject:(id)arg2 fieldName:(id)arg3 parent:(id)arg4 comparatorContext:(id)arg5;

@end

