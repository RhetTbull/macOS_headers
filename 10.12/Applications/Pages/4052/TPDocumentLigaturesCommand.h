//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TPDocumentSettingCommand.h"

@interface TPDocumentLigaturesCommand : TPDocumentSettingCommand
{
    BOOL _cmdInitiallyTurnedOnLigatures;
}

@property(nonatomic) BOOL cmdInitiallyTurnedOnLigatures; // @synthesize cmdInitiallyTurnedOnLigatures=_cmdInitiallyTurnedOnLigatures;
- (id)initFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;
- (id)actionString;
- (int)changeKind;
- (id)initWithDocumentRoot:(id)arg1 useLigatures:(BOOL)arg2;

@end

