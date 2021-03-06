//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AddressBook/ABActionDelegate-Protocol.h>

@class NSString;

@interface ABDelegateCardAction : NSObject <ABActionDelegate>
{
    id _delegate;
}

@property(readonly) id delegate; // @synthesize delegate=_delegate;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2 transitionProvider:(id)arg3;
- (void)performActionForPerson:(id)arg1 identifier:(id)arg2;
- (BOOL)shouldEnableActionForPerson:(id)arg1 identifier:(id)arg2;
- (id)titleForPerson:(id)arg1 identifier:(id)arg2;
- (id)unlocalizedTitle;
@property(readonly) NSString *actionProperty;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

