//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__TSDEditorControllerAccessibility_super.h"

@class NSArray, TSKSelectionPathAccessibility;

@interface TSDEditorControllerAccessibility : __TSDEditorControllerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (id)tsaxEditorForEditAction:(SEL)arg1 withSender:(id)arg2;
@property(readonly, nonatomic) NSArray *tsaxCurrentEditors;
@property(readonly, nonatomic) id tsaxTextInputEditor;
- (void)tsaxSetSelectionPath:(id)arg1 withFlags:(unsigned long long)arg2;
@property(retain, nonatomic, setter=tsaxSetSelectionPath:) TSKSelectionPathAccessibility *tsaxSelectionPath;

@end

