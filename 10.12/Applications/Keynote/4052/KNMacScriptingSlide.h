//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "KNMacAbstractScriptingSlide.h"

@class KNMacScriptingMasterSlide, NSDictionary;

@interface KNMacScriptingSlide : KNMacAbstractScriptingSlide
{
}

- (id)p_slideCollectionEditor;
- (id)p_newDocumentEditor;
- (void)becomeSelected;
- (id)objectSpecifier;
- (id)keyInContainer;
@property(nonatomic) BOOL skipped;
@property(readonly, nonatomic) unsigned long long slideNumber;
@property(retain, nonatomic) NSDictionary *transitionProperties;
@property(retain, nonatomic) id presenterNotes;
- (id)p_noteTextStorage;
@property(retain, nonatomic) KNMacScriptingMasterSlide *master;

@end

