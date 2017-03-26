//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSUCompoundValueStandInParent-Protocol.h"

@class NSDictionary, NSString, NSValue;
@protocol TSUCompoundValueStandInParent;

@interface TSUCompoundValueStandIn : NSObject <TSUCompoundValueStandInParent>
{
    NSDictionary *mKeyValueDictionary;
    NSString *mParentKey;
    id <TSUCompoundValueStandInParent> mParent;
}

+ (id)p_compoundValueFromKeyValueDictionary:(id)arg1;
+ (id)p_keyValueDictionaryFromCompoundValue:(id)arg1 forNewStandIn:(id)arg2;
- (void)setCompoundValueFromStandIn:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, nonatomic) NSValue *compoundValue;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithCompoundValue:(id)arg1 forKey:(id)arg2 ofParent:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

