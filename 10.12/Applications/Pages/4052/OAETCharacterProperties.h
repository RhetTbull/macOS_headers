//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAETCharacterProperties : NSObject
{
}

+ (void)mapCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 toCharacterProperties:(id)arg3 state:(id)arg4;
+ (id)mapColorFromCharacterStyle:(id)arg1 paragraphStyle:(id)arg2 property:(int)arg3 state:(id)arg4;
+ (float)floatValueForProperty:(int)arg1 characterStyle:(id)arg2 paragraphStyle:(id)arg3;
+ (int)intValueForProperty:(int)arg1 characterStyle:(id)arg2 paragraphStyle:(id)arg3;
+ (id)valueForProperty:(int)arg1 characterStyle:(id)arg2 paragraphStyle:(id)arg3;

@end

