//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BKAccessibilitySafeCategory : NSObject
{
}

+ (void)_bkaxInstallSafeCategoryOnClass:(Class)arg1;
+ (void)_bkaxInstallSafeCategoryOnClassNamed:(id)arg1;
+ (void)_bkaxAddCategoryMethod:(struct objc_method *)arg1 toClass:(Class)arg2 isClass:(BOOL)arg3;
+ (void)_bkaxInitializeSafeCategory;
+ (void)bkaxAddSafeCategoryDependenciesToCollection:(id)arg1;
+ (Class)bkaxBaseSafeCategoryClass;
+ (Class)bkaxTargetClass;
+ (id)bkaxTargetClassName;

@end

