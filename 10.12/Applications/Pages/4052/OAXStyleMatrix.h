//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAXStyleMatrix : NSObject
{
}

+ (void)writeStyleMatrix:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)writeReference:(id)arg1 name:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (id)readReferenceFromNode:(struct _xmlNode *)arg1;
+ (BOOL)readReferenceFromParentNode:(struct _xmlNode *)arg1 name:(const char *)arg2 inNamespace:(id)arg3 color:(id *)arg4 index:(unsigned int *)arg5;
+ (void)readFromNode:(struct _xmlNode *)arg1 toStyleMatrix:(id)arg2 packagePart:(id)arg3 drawingState:(id)arg4;

@end

