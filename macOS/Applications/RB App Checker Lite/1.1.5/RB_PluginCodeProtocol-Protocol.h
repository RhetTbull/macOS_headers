//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMenu, NSMutableOrderedSet, NSString, NSView, NSWindowController<RB_ControllerProtocol>;

@protocol RB_PluginCodeProtocol <NSObject>
- (BOOL)runWithItemSet:(NSMutableOrderedSet *)arg1;
- (NSView *)viewForContent:(NSView *)arg1 andController:(NSWindowController<RB_ControllerProtocol> *)arg2;

@optional
+ (NSMenu *)dockMenuWithTitle:(NSString *)arg1;
- (BOOL)canPrint;
- (void)print:(id)arg1;
- (void)timeout;
- (void)willClose;
@end

