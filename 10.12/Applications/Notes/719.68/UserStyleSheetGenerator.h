//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFont, NSURL, NSUserDefaults;

@interface UserStyleSheetGenerator : NSObject
{
    NSUserDefaults *_userDefaults;
}

+ (id)keyPathsForValuesAffectingUserStyleSheetURLForSingleNoteWindow;
+ (id)keyPathsForValuesAffectingUserStyleSheetURLForMainWindow;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void).cxx_destruct;
- (id)archiveStyleSheet;
- (id)userStyleSheetWithTopMargin:(double)arg1 bottomMargin:(double)arg2;
@property(readonly, nonatomic) NSURL *userStyleSheetURLForSingleNoteWindow;
@property(readonly, nonatomic) NSURL *userStyleSheetURLForMainWindow;
- (void)_setupDefaultFontMenu;
- (id)_defaultFontChoices;
- (void)_registerDefaultDefaultFont;
@property(retain, nonatomic) NSFont *defaultFont;
- (void)dealloc;
- (id)init;

@end

