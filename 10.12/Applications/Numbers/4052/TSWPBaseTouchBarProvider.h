//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTouchBarProvider-Protocol.h"

@class NSString, NSTouchBar, TSWPTextEditor;

@interface TSWPBaseTouchBarProvider : NSObject <NSTouchBarProvider>
{
    TSWPTextEditor *_textEditor;
}

@property __weak TSWPTextEditor *textEditor; // @synthesize textEditor=_textEditor;
- (void).cxx_destruct;
- (void)validateTouchBar;
- (id)initWithEditor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly) NSTouchBar *touchBar; // @dynamic touchBar;

@end

