//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol TSDPasteboardImportableDrawableProvider;

@protocol TSDPasteboardImportableDrawableProviderDelegate <NSObject>
- (void)importableDrawableProviderWillIgnoreMediaCompatibilityOnAllDevicesRequirement:(id <TSDPasteboardImportableDrawableProvider>)arg1;
- (void)importableDrawableProvider:(id <TSDPasteboardImportableDrawableProvider>)arg1 needsMediaCompatibilityOnAllDevicesRequirementForMediaType:(long long)arg2 usingBlock:(void (^)(BOOL))arg3;
@end

