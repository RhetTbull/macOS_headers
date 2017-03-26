//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSAccessibility.h"

#import "TSAccessibilityExtras-Protocol.h"

@class NSString;

@interface KNAccessibility : TSAccessibility <TSAccessibilityExtras>
{
}

- (id)canvasViewHelp;
- (id)canvasViewDescription;
- (void)addSafeCategoryNamesToCollection:(id)arg1;
- (void)performValidation;
- (void)addExtraSafeCategoryNamesToCollection:(id)arg1;
- (void)performExtraValidation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

