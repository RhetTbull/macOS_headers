//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXActionActivityProvider-Protocol.h>

@class NSString;
@protocol SXContactsPresenter, SXMailPresenter;

@interface SXEmailActionActivityProvider : NSObject <SXActionActivityProvider>
{
    id <SXMailPresenter> _mailPresenter;
    id <SXContactsPresenter> _contactsPresenter;
}

@property(readonly, nonatomic) id <SXContactsPresenter> contactsPresenter; // @synthesize contactsPresenter=_contactsPresenter;
@property(readonly, nonatomic) id <SXMailPresenter> mailPresenter; // @synthesize mailPresenter=_mailPresenter;
- (void).cxx_destruct;
- (void)addToContacts:(id)arg1;
- (void)composeMailTo:(id)arg1 subject:(id)arg2;
- (id)activityGroupForAction:(id)arg1;
- (id)initWithMailPresenter:(id)arg1 contactsPresenter:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

