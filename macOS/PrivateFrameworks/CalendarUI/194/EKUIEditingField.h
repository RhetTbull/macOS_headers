//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CalendarUI/CalUIAutoCompleteField.h>

#import "CalUIResizingTextFieldDelegate.h"

@class EKUIGadget, NSString;

@interface EKUIEditingField : CalUIAutoCompleteField <CalUIResizingTextFieldDelegate>
{
    EKUIGadget *_gadget;
}

- (void).cxx_destruct;
@property __weak EKUIGadget *gadget; // @synthesize gadget=_gadget;
- (void)configureText;
- (BOOL)canBecomeKeyView;
- (BOOL)becomeFirstResponder;
- (id)initWithGadget:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

