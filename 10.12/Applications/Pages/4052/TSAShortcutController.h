//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSPObject.h"

@class NSMutableDictionary, TSADocumentRoot, TSURetainedPointerKeyDictionary;

@interface TSAShortcutController : TSPObject
{
    NSMutableDictionary *_shortcutToStyleDictionary;
    TSURetainedPointerKeyDictionary *_styleToShortcutDictionary;
    TSADocumentRoot *_documentRoot;
}

+ (id)localizedStringForShortcut:(id)arg1;
@property(nonatomic) TSADocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ShortcutControllerArchive *)arg1 archiver:(id)arg2;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ShortcutControllerArchive *)arg1 unarchiver:(id)arg2;
- (id)commandsForUpdatingShortcutsFromPropagationMap:(id)arg1;
- (void)removeStylesNotInTheme;
- (void)setStyle:(id)arg1 forShortcut:(id)arg2;
- (id)styleForShortcut:(id)arg1;
- (id)shortcutForStyle:(id)arg1;
@property(readonly, nonatomic) BOOL hasShortcuts;
- (void)documentWillUnload;
- (void)documentDidLoad;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1;

@end

