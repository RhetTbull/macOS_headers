//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/NSCopying-Protocol.h>
#import <EmailFoundation/NSMutableCopying-Protocol.h>

@interface EFByteSet : NSObject <NSCopying, NSMutableCopying>
{
    unsigned char _bitString[32];
}

+ (id)asciiWhitespaceSet;
- (BOOL)byteIsMember:(unsigned char)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithCString:(const char *)arg1;
- (id)init;
- (id)initWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)initWithRange:(struct _NSRange)arg1;

@end

