//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BSXPCSecureCoding.h"
#import "NSSecureCoding.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface RBSXPCServiceDefinition : NSObject <BSXPCSecureCoding, NSSecureCoding>
{
    NSString *_identifier;
    long long _variant;
    long long _scope;
}

+ (BOOL)supportsBSXPCSecureCoding;
+ (BOOL)supportsSecureCoding;
+ (id)definitionWithIdentifier:(id)arg1 variant:(long long)arg2 scope:(long long)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) long long variant; // @synthesize variant=_variant;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

