//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MAKitButton, MAKitPopUpButton;

@interface LGAlternativesChooserWindowController : NSObject
{
    id m_projectAlternativesWindow;
    MAKitPopUpButton *m_projectAlternativesPopupButton;
    MAKitButton *m_projectAlternativesOkButton;
    MAKitButton *m_projectAlternativesCancelButton;
    long long m_projectAlternativeIndex;
}

- (void)projectAlternativesOkButtonAction:(id)arg1;
- (void)projectAlternativesCancelButtonAction:(id)arg1;
- (void)setProjectAlternativeIndex:(long long)arg1;
- (long long)projectAlternativeIndex;
- (id)projectAlternativesPopupButton;
- (id)projectAlternativesWindow;
- (id)init;

@end

