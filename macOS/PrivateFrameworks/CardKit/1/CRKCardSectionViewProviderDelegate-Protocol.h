//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CardKit/NSObject-Protocol.h>

@protocol CRKCardSectionViewProviding, CRKFeedbackDelegate;

@protocol CRKCardSectionViewProviderDelegate <NSObject>

@optional
- (double)boundingWidthForProvider:(id <CRKCardSectionViewProviding>)arg1;
- (BOOL)cardSectionDisplayRequiresUserConsentForProvider:(id <CRKCardSectionViewProviding>)arg1;
- (id <CRKFeedbackDelegate>)defaultFeedbackDelegateForProvider:(id <CRKCardSectionViewProviding>)arg1;
@end

