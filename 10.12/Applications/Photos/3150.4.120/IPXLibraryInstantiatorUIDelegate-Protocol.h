//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSProgress, NSString, NSWindow;

@protocol IPXLibraryInstantiatorUIDelegate <NSObject>
- (NSWindow *)window;
- (void)showCompletion:(NSString *)arg1 withAction:(NSString *)arg2 reply:(void (^)(void))arg3;
- (void)showProgress:(NSProgress *)arg1 withTourButton:(BOOL)arg2;
- (void)requestUserConfirmationWithTitle:(NSString *)arg1 detail:(NSString *)arg2 defaultButtonTitle:(NSString *)arg3 alternateButtonTitle:(NSString *)arg4 confirm:(void (^)(BOOL))arg5;
@end

