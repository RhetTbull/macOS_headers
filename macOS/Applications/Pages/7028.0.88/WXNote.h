//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXNote : NSObject
{
}

+ (void)writeEndnotesWithState:(id)arg1;
+ (void)writeFootnotesWithState:(id)arg1;
+ (void)write:(id)arg1 state:(id)arg2;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 skipNextSib:(char *)arg3 state:(id)arg4;
+ (void)writeSeparator:(id)arg1 ID:(long long)arg2 content:(id)arg3 state:(id)arg4;

@end

