//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ABUserInterfaceAction-Protocol.h"

@class ABMainWindowViewModel, NSString;

@interface ABAbstractMainWindowViewModelUIAction : NSObject <ABUserInterfaceAction>
{
    ABMainWindowViewModel *_mainWindowViewModel;
}

@property(readonly, retain) ABMainWindowViewModel *mainWindowViewModel; // @synthesize mainWindowViewModel=_mainWindowViewModel;
- (void)performWithSender:(id)arg1;
- (BOOL)validateWithMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithMainWindowViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

