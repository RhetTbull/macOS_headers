//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PAPropertyDescriptor : NSObject
{
    BOOL _isSetter;
    NSString *_defaultsKey;
    NSString *_type;
}

@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, nonatomic) BOOL isSetter; // @synthesize isSetter=_isSetter;
@property(readonly, nonatomic) NSString *defaultsKey; // @synthesize defaultsKey=_defaultsKey;
- (void).cxx_destruct;
- (id)initWithDefaultsKey:(id)arg1 type:(id)arg2 isSetter:(BOOL)arg3;

@end

