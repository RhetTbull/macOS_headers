//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PanicCore/PCSheetController.h>

@class NSString, NSTextField;

__attribute__((visibility("hidden")))
@interface JavaScriptInputSheetController : PCSheetController
{
    NSTextField *oPromptField;
    NSString *iPrompt;
    NSString *iJavaScriptTextInput;
    NSString *iURLString;
}

@property(retain, nonatomic) NSString *URLString; // @synthesize URLString=iURLString;
@property(retain, nonatomic) NSString *prompt; // @synthesize prompt=iPrompt;
@property(retain, nonatomic) NSString *javascriptTextInput; // @synthesize javascriptTextInput=iJavaScriptTextInput;
- (long long)runModal;
- (void)endSheetWithReturnCodeFromSenderTag:(id)arg1;
- (id)nibName;
- (void)loadWindow;
- (void)dealloc;

@end

