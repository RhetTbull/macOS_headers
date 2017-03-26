//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, NSURL;

@protocol TSAccessibilityDesktopDescriptor <NSObject>

@optional
@property(readonly, nonatomic) NSString *tsaxDecrementActionDescription;
@property(readonly, nonatomic) NSString *tsaxIncrementActionDescription;
@property(readonly, nonatomic) NSString *tsaxShowMenuActionDescription;
@property(readonly, nonatomic) NSString *tsaxPressActionDescription;
@property(readonly, nonatomic) NSURL *tsaxURL;
@property(readonly, nonatomic) NSString *tsaxOrientation;
@property(readonly, nonatomic) double tsaxMaxValue;
@property(readonly, nonatomic) double tsaxMinValue;
@property(readonly, nonatomic) struct _NSRange tsaxRowIndexRange;
@property(readonly, nonatomic) struct _NSRange tsaxColumnIndexRange;
@property(readonly, nonatomic) unsigned long long tsaxIndex;
@property(readonly, nonatomic) id tsaxRowHeader;
@property(readonly, nonatomic) id tsaxColumnHeader;
@property(readonly, nonatomic) id tsaxHeader;
@property(readonly, nonatomic) id tsaxTopLevelUIElement;
@property(readonly, nonatomic) id tsaxWindow;
@property(readonly, nonatomic) BOOL tsaxIsEnabled;
@property(readonly, nonatomic) BOOL tsaxIsSelected;
@property(nonatomic, setter=tsaxSetFocused:) BOOL tsaxIsFocused;
@property(nonatomic, setter=tsaxSetSelectedChildren:) NSArray *tsaxSelectedChildren;
@property(readonly, nonatomic) NSArray *tsaxChildren;
@property(readonly, nonatomic) NSString *tsaxHelp;
@property(readonly, nonatomic) NSString *tsaxValueDescription;
@property(readonly, nonatomic) id tsaxValue;
@property(readonly, nonatomic) NSString *tsaxTitle;
@property(readonly, nonatomic) NSString *tsaxDescription;
@property(readonly, nonatomic) struct CGRect tsaxFrame;
@property(readonly, nonatomic) id tsaxParent;
@property(readonly, nonatomic) NSString *tsaxRoleDescription;
@property(readonly, nonatomic) NSString *tsaxSubrole;
@property(readonly, nonatomic) NSString *tsaxRole;
- (BOOL)tsaxDecrement;
- (BOOL)tsaxIncrement;
- (BOOL)tsaxShowMenu;
- (BOOL)tsaxPress;
@end

