//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSArray.h>

@class NSObject, NSString, TPPaginatedPageController;
@protocol TMAScriptingContainerInfo><TPPageContainerInfo;

@interface TPScriptPageArray : NSArray
{
    NSObject<TMAScriptingContainerInfo><TPPageContainerInfo> *_container;
    TPPaginatedPageController *_pageController;
    NSString *_key;
}

- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 pageController:(id)arg2 key:(id)arg3;

@end

