//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WITOfficeArt : NSObject
{
}

+ (BOOL)anchorMovesWithText:(id)arg1;
+ (void)mapTextWrap:(id)arg1 anchor:(id)arg2 isFloating:(BOOL)arg3 documentState:(id)arg4;
+ (void)mapSectionDrawablesWithDocumentState:(id)arg1;
+ (BOOL)map:(id)arg1 textState:(id)arg2;
+ (struct CGPoint)positionForDrawable:(id)arg1;
+ (void)recursivelySetTextWrap:(id)arg1 toDrawable:(id)arg2;
+ (id)newOAMapper:(id)arg1;
+ (long long)zIndexOf:(id)arg1 textState:(id)arg2;
+ (id)objectOf:(id)arg1;
+ (void)i_mapOfficeArt:(id)arg1 drawables:(id)arg2 documentState:(id)arg3;
+ (BOOL)validateOfficeArt:(id)arg1 floating:(char *)arg2 textState:(id)arg3;
+ (BOOL)inlineDrawableInsideTableIsValid:(id)arg1 documentState:(id)arg2;

@end

