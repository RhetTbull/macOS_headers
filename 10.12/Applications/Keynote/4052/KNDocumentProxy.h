//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDChangeSourceCommandPushingProxy.h"

@class KNDocumentEditor;

@interface KNDocumentProxy : TSDChangeSourceCommandPushingProxy
{
    KNDocumentEditor *mEditor;
}

- (id)newProxyForValue:(id)arg1 forKey:(id)arg2;
- (id)initWithTarget:(id)arg1 changeSource:(id)arg2 documentRoot:(id)arg3;
- (id)initWithTarget:(id)arg1 editor:(id)arg2 documentRoot:(id)arg3;

@end

