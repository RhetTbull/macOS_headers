//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryLinkContactsEvent : CNChangeHistoryEvent
{
    CNContact *_fromContact;
    CNContact *_toContact;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) CNContact *toContact; // @synthesize toContact=_toContact;
@property(readonly, nonatomic) CNContact *fromContact; // @synthesize fromContact=_fromContact;
- (void).cxx_destruct;
- (void)acceptEventVisitor:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFromContact:(id)arg1 toContact:(id)arg2;
- (id)init;

@end

