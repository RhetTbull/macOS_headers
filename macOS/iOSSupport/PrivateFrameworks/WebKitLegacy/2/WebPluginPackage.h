//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKitLegacy/WebBasePluginPackage.h>

@class NSBundle;

__attribute__((visibility("hidden")))
@interface WebPluginPackage : WebBasePluginPackage
{
    NSBundle *nsBundle;
}

- (id)bundle;
- (BOOL)load;
- (Class)viewFactory;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

