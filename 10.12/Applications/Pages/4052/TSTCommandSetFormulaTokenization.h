//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

@interface TSTCommandSetFormulaTokenization : TSKCommand
{
    BOOL mTokenization;
}

- (id)actionString;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 tokenization:(BOOL)arg2;
- (id)initWithContext:(id)arg1;
@property(nonatomic) BOOL tokenization;

@end

