//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CNLDAPSearchBase : NSObject
{
    NSString *_distinguishedName;
    unsigned long long _scope;
}

+ (id)searchBaseWithDistinguishedName:(id)arg1 scope:(unsigned long long)arg2;
- (void).cxx_destruct;
@property unsigned long long scope; // @synthesize scope=_scope;
@property(copy) NSString *distinguishedName; // @synthesize distinguishedName=_distinguishedName;

@end

