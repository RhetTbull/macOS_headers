//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSAlertDelegate-Protocol.h"

@class NSArray, NSString, NSView;

@interface iTermWarning : NSObject <NSAlertDelegate>
{
    NSString *_title;
    NSArray *_warningActions;
    NSArray *_actionToSelectionMap;
    NSView *_accessory;
    NSString *_identifier;
    long long _warningType;
    NSString *_heading;
    NSString *_cancelLabel;
    CDUnknownBlockType _showHelpBlock;
}

+ (BOOL)showingWarning;
+ (long long)savedSelectionForIdentifier:(id)arg1;
+ (id)selectionKeyForIdentifier:(id)arg1;
+ (BOOL)identifierIsSilenced:(id)arg1;
+ (id)permanentlySilenceKeyForIdentifier:(id)arg1;
+ (id)temporarySilenceKeyForIdentifier:(id)arg1;
+ (long long)alertValueForParameterIndex:(int)arg1;
+ (long long)remapSelection:(long long)arg1 withMapping:(id)arg2;
+ (void)unsilenceIdentifier:(id)arg1 ifSelectionEquals:(long long)arg2;
+ (long long)showWarningWithTitle:(id)arg1 actions:(id)arg2 actionMapping:(id)arg3 accessory:(id)arg4 identifier:(id)arg5 silenceable:(long long)arg6 heading:(id)arg7 cancelLabel:(id)arg8;
+ (long long)showWarningWithTitle:(id)arg1 actions:(id)arg2 actionMapping:(id)arg3 accessory:(id)arg4 identifier:(id)arg5 silenceable:(long long)arg6 heading:(id)arg7;
+ (long long)showWarningWithTitle:(id)arg1 actions:(id)arg2 accessory:(id)arg3 identifier:(id)arg4 silenceable:(long long)arg5 heading:(id)arg6;
+ (long long)showWarningWithTitle:(id)arg1 actions:(id)arg2 accessory:(id)arg3 identifier:(id)arg4 silenceable:(long long)arg5;
+ (long long)showWarningWithTitle:(id)arg1 actions:(id)arg2 identifier:(id)arg3 silenceable:(long long)arg4;
+ (id)warningHandler;
+ (void)setWarningHandler:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType showHelpBlock; // @synthesize showHelpBlock=_showHelpBlock;
@property(copy, nonatomic) NSString *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(copy, nonatomic) NSString *heading; // @synthesize heading=_heading;
@property(nonatomic) long long warningType; // @synthesize warningType=_warningType;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSView *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSArray *actionToSelectionMap; // @synthesize actionToSelectionMap=_actionToSelectionMap;
@property(retain, nonatomic) NSArray *warningActions; // @synthesize warningActions=_warningActions;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (BOOL)alertShowHelp:(id)arg1;
- (long long)runModalImpl;
- (long long)runModal;
@property(retain, nonatomic) NSArray *actionLabels;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

