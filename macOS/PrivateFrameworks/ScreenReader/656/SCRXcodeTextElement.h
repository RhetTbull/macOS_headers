//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ScreenReader/SCRStandardText.h>

__attribute__((visibility("hidden")))
@interface SCRXcodeTextElement : SCRStandardText
{
    BOOL __justInsertedSpaceOnEmptyLine;
}

@property(nonatomic) BOOL _justInsertedSpaceOnEmptyLine; // @synthesize _justInsertedSpaceOnEmptyLine=__justInsertedSpaceOnEmptyLine;
- (BOOL)_readCharacter:(id)arg1 forward:(BOOL)arg2;
- (BOOL)readPreviousCharacter:(id)arg1;
- (BOOL)readNextCharacter:(id)arg1;
- (id)wordRangeBeforePosition:(id)arg1;
- (id)wordRangeAfterPosition:(id)arg1;
- (BOOL)ignoreTextMarkerRange:(id)arg1;
- (id)attributedStringWithoutPlaceholderSymbolsForString:(id)arg1;
- (void)handleTextChangeWithUserInfo:(id)arg1;
- (void)handleTextSelectionChange;
- (void)_selectionDidChange:(id)arg1;
- (BOOL)isXcodeTextElement;

@end

