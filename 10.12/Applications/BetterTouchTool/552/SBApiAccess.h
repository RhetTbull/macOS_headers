//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface SBApiAccess : NSObject
{
}

+ (id)descriptionOfValue:(void *)arg1 beingVerbose:(BOOL)arg2;
+ (BOOL)accessibilityAttribute:(struct __CFString *)arg1 isSettableForElement:(struct __AXUIElement *)arg2;
+ (id)valueOfExistingAttribute:(struct __CFString *)arg1 ofUIElement:(struct __AXUIElement *)arg2;
+ (id)elementAtPosition:(struct CGPoint)arg1 forSystemWide:(struct __AXUIElement *)arg2;
+ (struct CGPoint)mousePosition;

@end

