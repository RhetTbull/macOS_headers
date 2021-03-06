//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TextInputCore/MCKeyboardInput.h>

@class NSString;

@interface MCDeleteInput : MCKeyboardInput
{
    BOOL _deleteBySyllable;
    BOOL _shouldDeleteAcceptCandidateInput;
    NSString *_deletedText;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL shouldDeleteAcceptCandidateInput; // @synthesize shouldDeleteAcceptCandidateInput=_shouldDeleteAcceptCandidateInput;
@property(readonly, nonatomic) BOOL deleteBySyllable; // @synthesize deleteBySyllable=_deleteBySyllable;
@property(readonly, nonatomic) NSString *deletedText; // @synthesize deletedText=_deletedText;
- (BOOL)canComposeNew:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeletedText:(id)arg1 deleteBySyllable:(BOOL)arg2 shouldDeleteAcceptCandidateInput:(BOOL)arg3;
- (id)init;

@end

