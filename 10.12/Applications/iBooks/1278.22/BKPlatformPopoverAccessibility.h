//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__BKPlatformPopoverAccessibility_super.h"

@interface BKPlatformPopoverAccessibility : __BKPlatformPopoverAccessibility_super
{
    BOOL _bkaxIsCloseDisabled;
}

+ (Class)bkaxBaseSafeCategoryClass;
+ (id)bkaxTargetClassName;
@property(nonatomic, setter=bkaxSetCloseDisabled:) BOOL bkaxIsCloseDisabled; // @synthesize bkaxIsCloseDisabled=_bkaxIsCloseDisabled;
- (void)bkaxPerformBlockPreventingPopoverClosing:(CDUnknownBlockType)arg1;
- (void)close;
- (void)bkaxSetDisableClose:(BOOL)arg1;
- (BOOL)bkaxDisableClose;

@end

