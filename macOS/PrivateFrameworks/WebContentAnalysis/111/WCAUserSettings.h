//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WCAUserSettings : NSObject
{
    NSDictionary *_userSettings;
    NSString *_userName;
}

@property(copy) NSString *userName; // @synthesize userName=_userName;
- (id)_userSettingsForUser:(id)arg1;
- (BOOL)overridesAllowed;
- (id)whiteListAllowedSites;
- (id)contentFilterOverriddenSites;
- (int)websiteRestrictionType;
- (void)dealloc;
- (id)initWithUserName:(id)arg1;

@end

