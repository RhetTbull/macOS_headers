//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "ABAbstractMainWindowViewModelUIAction.h"

@protocol ABPersonMergingControllerDelegate;

@interface ABConfirmSuggestedContactUIAction : ABAbstractMainWindowViewModelUIAction
{
    id <ABPersonMergingControllerDelegate> _mergeDelegate;
}

+ (id)multiValueWithLabeledValues:(id)arg1 labeledWith:(id)arg2 valueTransform:(CDUnknownBlockType)arg3;
+ (id)multivalueWithPostalAddresses:(id)arg1;
+ (id)multiValueWithPhoneNumbers:(id)arg1;
+ (id)multiValueWithEmailAddresses:(id)arg1;
- (id)suggestedContactWithIdentifier:(id)arg1;
- (void)augmentPerson:(id)arg1 withDataFromSuggestedRecordWithIdentifier:(id)arg2;
- (void)performWithSender:(id)arg1;
- (BOOL)validateWithMenuItem:(id)arg1;
- (void)dealloc;
- (id)initWithMainWindowViewModel:(id)arg1 mergeDelegate:(id)arg2;

@end

