//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAVStroke : NSObject
{
}

+ (void)writeStroke:(id)arg1 toXmlWriter:(id)arg2 state:(id)arg3;
+ (void)writeLineEnd:(id)arg1 lineEndName:(id)arg2 toXmlWriter:(id)arg3 state:(id)arg4;
+ (id)readFromManager:(id)arg1;
+ (void)initialize;
+ (void)readFillStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (id)targetFgColorWithManager:(id)arg1;
+ (void)readJoinStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (void)readDashStyleFromManager:(id)arg1 toStroke:(id)arg2;
+ (id)readLineEndWithType:(id)arg1 width:(id)arg2 length:(id)arg3;
+ (unsigned char)readCapStyle:(id)arg1;
+ (unsigned char)readLineEndLength:(id)arg1;
+ (unsigned char)readLineEndWidth:(id)arg1;
+ (unsigned char)readLineEndType:(id)arg1;
+ (BOOL)readPresetDashStyle:(id)arg1;
+ (unsigned char)readCompoundType:(id)arg1;

@end

