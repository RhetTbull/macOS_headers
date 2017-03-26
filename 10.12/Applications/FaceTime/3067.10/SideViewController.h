//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class AliasSelectionViewController, EnableAccountViewController, ModernSignInViewController, PersonListViewController, RegionSelectionViewController;

@interface SideViewController : NSViewController
{
    BOOL _isTransitioning;
    PersonListViewController *_personListVC;
    ModernSignInViewController *_signInVC;
    EnableAccountViewController *_enableVC;
    AliasSelectionViewController *_aliasVC;
    RegionSelectionViewController *_regionVC;
    NSViewController *_currentVC;
}

+ (id)sharedInstance;
+ (void)configureButton:(id)arg1 withFont:(id)arg2;
@property(nonatomic) BOOL isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(retain, nonatomic) NSViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) RegionSelectionViewController *regionVC; // @synthesize regionVC=_regionVC;
@property(retain, nonatomic) AliasSelectionViewController *aliasVC; // @synthesize aliasVC=_aliasVC;
@property(retain, nonatomic) EnableAccountViewController *enableVC; // @synthesize enableVC=_enableVC;
@property(retain, nonatomic) ModernSignInViewController *signInVC; // @synthesize signInVC=_signInVC;
@property(retain, nonatomic) PersonListViewController *personListVC; // @synthesize personListVC=_personListVC;
- (void).cxx_destruct;
- (void)setNextResponder:(id)arg1;
- (void)awakeFromNib;
- (void)_transitionFrom:(id)arg1 to:(id)arg2 transition:(unsigned long long)arg3;
- (void)showContactCardForCurrentlySelectedPerson;
- (void)showPersonList;
- (void)showRegionSelection;
- (void)showAliasSelection;
- (void)showEnableAccount;
- (void)showSignIn;
- (void)_cleanupSignInVCs;
- (void)_setupSignInVCs;
- (void)keyDown:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

