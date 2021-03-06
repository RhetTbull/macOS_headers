//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TViewController.h"

@class NSString;

@interface TOpenWithChooseAppAccessoryViewController : TViewController
{
    _Bool _shouldShowAlwaysOpenCheckbox;
    _Bool _alwaysOpenWith;
    _Bool _shouldShowCautionIcon;
    _Bool _shouldShowAppSupportsDocText;
    _Bool _appSupportsDoc;
    _Bool _isFilteringApps;
    struct TFENodeVector _documentNodes;
}

+ (id)keyPathsForValuesAffectingAppSupportsDocText;
+ (id)keyPathsForValuesAffectingShouldShowCautionIcon;
+ (id)keyPathsForValuesAffectingShouldShowAppSupportsDocText;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct TFENodeVector documentNodes; // @synthesize documentNodes=_documentNodes;
@property(nonatomic) _Bool isFilteringApps; // @synthesize isFilteringApps=_isFilteringApps;
@property(nonatomic) _Bool appSupportsDoc; // @synthesize appSupportsDoc=_appSupportsDoc;
@property(nonatomic) _Bool shouldShowAppSupportsDocText; // @synthesize shouldShowAppSupportsDocText=_shouldShowAppSupportsDocText;
@property(nonatomic) _Bool shouldShowCautionIcon; // @synthesize shouldShowCautionIcon=_shouldShowCautionIcon;
@property(nonatomic) _Bool alwaysOpenWith; // @synthesize alwaysOpenWith=_alwaysOpenWith;
@property(nonatomic) _Bool shouldShowAlwaysOpenCheckbox; // @synthesize shouldShowAlwaysOpenCheckbox=_shouldShowAlwaysOpenCheckbox;
- (void)reset;
@property(readonly, nonatomic) NSString *appSupportsDocText;
- (id)nibName;
- (void)initCommon;

@end

