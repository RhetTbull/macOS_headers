//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

@class NSMenu, NSString;

@interface GHApplication : NSApplication
{
    NSMenu *_hiddenKeyCommands;
}

+ (id)applicationBecameActiveSignal;
+ (id)sharedApplication;
+ (void)load;
@property(retain, nonatomic) NSMenu *hiddenKeyCommands; // @synthesize hiddenKeyCommands=_hiddenKeyCommands;
- (void).cxx_destruct;
- (id)topWindowControllerOfClass:(Class)arg1;
@property(readonly, copy, nonatomic) NSString *bundleVersion;
- (void)sendEvent:(id)arg1;
- (void)reportException:(id)arg1;
- (BOOL)presentError:(id)arg1;

@end

