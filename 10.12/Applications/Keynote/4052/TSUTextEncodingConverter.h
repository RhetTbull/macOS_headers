//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSUTextEncodingConverter : NSObject
{
    unsigned int _from;
    unsigned int _to;
    struct OpaqueTECObjectRef *_converter;
}

- (id)convertToString:(id)arg1;
- (id)convert:(id)arg1;
- (id)initWithEncoding:(unsigned long long)arg1;
- (id)initWithEncoding:(unsigned long long)arg1 to:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long to; // @dynamic to;
@property(readonly, nonatomic) unsigned long long from; // @dynamic from;

@end

