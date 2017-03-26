//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface DfGuardWindowController : NSObject
{
    NSMutableDictionary *_guardWindows;
}

+ (void)setWindowUnmovableForSpaces:(id)arg1;
- (id)availableScreens;
- (void)applicationDidChangeScreenParameters:(id)arg1;
- (void)destroyGuardWindows;
- (void)createGuardWindows;
- (void)dealloc;
- (void)_removeGuardWindowForScreen:(id)arg1;
- (void)_removeGuardWindowForScreenWithScreenNumber:(id)arg1;
- (void)_createGuardWindowForScreen:(id)arg1;
- (id)screenWithScreenNumber:(id)arg1;
- (BOOL)screenIsMirroring:(id)arg1;
- (id)screenNumber:(id)arg1;

@end

