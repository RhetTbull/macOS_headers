//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton;

@interface LoveRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_keyPathPopup;
    NSPopUpButton *_operatorPopup;
    NSPopUpButton *_likedStatePopup;
}

@property(readonly) NSPopUpButton *likedStatePopup; // @synthesize likedStatePopup=_likedStatePopup;
@property(readonly) NSPopUpButton *operatorPopup; // @synthesize operatorPopup=_operatorPopup;
@property(readonly) NSPopUpButton *keyPathPopup; // @synthesize keyPathPopup=_keyPathPopup;
- (void)dealloc;
- (id)predicateWithSubpredicates:(id)arg1;
- (id)displayableSubpredicatesOfPredicate:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (void)loadViewsIfNecessary;
- (id)itemTitles;

@end

