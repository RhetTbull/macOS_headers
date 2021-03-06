//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WFNaming.h"
#import "WFParameterState.h"

@class NSString, WFContact, WFEmailAddress, WFPhoneNumber;

@interface WFContactFieldEntry : NSObject <WFNaming, WFParameterState>
{
    long long _type;
    WFContact *_contact;
    WFPhoneNumber *_phoneNumber;
    WFEmailAddress *_emailAddress;
}

+ (long long)predictedEntryTypeForHandleValue:(id)arg1;
@property(readonly, nonatomic) WFEmailAddress *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, nonatomic) WFPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) WFContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)containedVariables;
- (void)processWithVariableSource:(id)arg1 parameter:(id)arg2 userInputRequiredHandler:(CDUnknownBlockType)arg3 valueHandler:(CDUnknownBlockType)arg4;
- (id)serializedRepresentation;
- (id)underlyingObject;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
@property(readonly, copy, nonatomic) NSString *wfName;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithHandleString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

