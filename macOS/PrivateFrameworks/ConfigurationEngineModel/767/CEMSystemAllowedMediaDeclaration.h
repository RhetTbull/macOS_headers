//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ConfigurationEngineModel/CEMConfigurationBase.h>

#import "CEMRegisteredTypeProtocol.h"

@class CEMSystemAllowedMediaDeclaration_MediaItems, NSString;

@interface CEMSystemAllowedMediaDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>
{
    CEMSystemAllowedMediaDeclaration_MediaItems *_payloadLogoutEject;
    CEMSystemAllowedMediaDeclaration_MediaItems *_payloadMountControls;
    CEMSystemAllowedMediaDeclaration_MediaItems *_payloadUnmountControls;
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;
+ (id)buildWithIdentifier:(id)arg1 withLogoutEject:(id)arg2 withMountControls:(id)arg3 withUnmountControls:(id)arg4;
+ (id)restrictionPayloadKeys;
+ (id)allowedPayloadKeys;
+ (id)profileType;
+ (id)registeredIdentifier;
+ (id)registeredClassName;
@property(copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadUnmountControls; // @synthesize payloadUnmountControls=_payloadUnmountControls;
@property(copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadMountControls; // @synthesize payloadMountControls=_payloadMountControls;
@property(copy, nonatomic) CEMSystemAllowedMediaDeclaration_MediaItems *payloadLogoutEject; // @synthesize payloadLogoutEject=_payloadLogoutEject;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializePayloadWithAssetProviders:(id)arg1;
- (BOOL)loadPayload:(id)arg1 error:(id *)arg2;
- (id)assetReferences;
- (int)activationLevel;
- (BOOL)mustBeSupervised;
- (BOOL)multipleAllowed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

