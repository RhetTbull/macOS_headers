//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <CoreAudioKit/UITableViewDataSource-Protocol.h>
#import <CoreAudioKit/UITableViewDelegate-Protocol.h>
#import <CoreAudioKit/UITextFieldDelegate-Protocol.h>

@class AMSBTLEAdvertisementManager, NSString, NSTimer, UIActivityIndicatorView, UITextField;

@interface CABTMIDILocalPeripheralViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>
{
    AMSBTLEAdvertisementManager *advertisingManager;
    NSString *statusString;
    UITextField *serviceNameField;
    BOOL advertising;
    BOOL isErrorMessage;
    UIActivityIndicatorView *indicator;
    NSString *theServiceName;
    long long advertiseTimeout;
    long long fullRefreshCounter;
    NSTimer *advertiseTimer;
    NSTimer *messageTimer;
    BOOL didCleanup;
}

- (void)messageTimerFired:(id)arg1;
- (void)advertiseTimerFired:(id)arg1;
- (void)didReceiveMemoryWarning;
- (BOOL)disconnectLocalPeripheral;
- (BOOL)changeServiceNameTo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (BOOL)stopAdvertisingServiceWithCompletionBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)advertiseServiceWithName:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)advertisedServiceName;
- (void)advertiseServiceSwitchToggled:(id)arg1;
- (id)statusString;
- (void)setStatusString:(id)arg1 animateIndicator:(BOOL)arg2 isError:(BOOL)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)title;
- (void)updateAdvertiseUI;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)deactivateController:(id)arg1;
- (void)activateController:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)cleanup;
- (void)stopTimers;
- (void)loadView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

