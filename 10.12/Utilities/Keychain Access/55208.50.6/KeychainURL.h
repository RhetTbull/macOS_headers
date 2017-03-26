//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface KeychainURL : NSObject
{
    unsigned long long _protocolType;
    unsigned long long _authenticationType;
    unsigned long long _port;
    NSString *_scheme;
    NSString *_resourceSpecifier;
    NSString *_host;
    NSString *_user;
    NSString *_password;
    NSString *_path;
    NSString *_address;
    NSString *_parameterString;
    NSURL *_nsURL;
    BOOL _rfc2396;
}

- (int)launch;
- (void)setAddress:(id)arg1;
- (id)address;
- (void)setParameterString:(id)arg1;
- (id)parameterString;
- (void)setPath:(id)arg1;
- (id)path;
- (void)setPassword:(id)arg1;
- (id)password;
- (void)setUser:(id)arg1;
- (id)user;
- (void)setPort:(unsigned long long)arg1;
- (unsigned long long)port;
- (void)setHost:(id)arg1;
- (id)host;
- (void)setResourceSpecifier:(id)arg1;
- (id)resourceSpecifier;
- (void)setScheme:(id)arg1;
- (id)scheme;
- (unsigned long long)authenticationType;
- (unsigned long long)protocolType;
- (void)setSchemeAndProtocolType:(unsigned long long)arg1 authenticationType:(unsigned long long)arg2;
- (void)setProtocolType:(id)arg1;
- (unsigned long long)defaultPortForProtocol:(unsigned long long)arg1;
- (id)betterStringByAddingPercentEscapes:(id)arg1;
- (id)URLStringRemovingPercentEscapes;
- (id)URLStringAddingPercentEscapes;
- (id)URLString;
- (id)rfc2396ResourceSpecifier;
- (id)URLWithRFC2396String:(id)arg1;
- (BOOL)isHierarchicalScheme:(id)arg1;
- (id)portMap;
- (id)nonHierarchicalSchemeMap;
- (id)schemeMap;
- (void)dealloc;
- (id)initURLWithType:(unsigned long long)arg1 authenticationType:(unsigned long long)arg2 account:(id)arg3 password:(id)arg4 host:(id)arg5 port:(unsigned long long)arg6 path:(id)arg7 address:(id)arg8;
- (id)initURLWithString:(id)arg1;

@end

