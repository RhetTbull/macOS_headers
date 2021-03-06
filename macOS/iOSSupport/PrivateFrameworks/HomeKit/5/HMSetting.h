//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMSettingValue, NSString, NSUUID;
@protocol HMSettingManager;

@interface HMSetting : NSObject <NSSecureCoding>
{
    id _value;
    NSString *_keyPath;
    Class _valueClass;
    long long _type;
    id <HMSettingManager> _settingManager;
    NSUUID *_identifier;
    NSString *_name;
    unsigned long long _properties;
}

+ (BOOL)supportsSecureCoding;
@property unsigned long long properties; // @synthesize properties=_properties;
@property(copy) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMSettingManager> settingManager; // @synthesize settingManager=_settingManager;
@property long long type; // @synthesize type=_type;
@property(retain) Class valueClass; // @synthesize valueClass=_valueClass;
@property(copy) NSString *keyPath; // @synthesize keyPath=_keyPath;
@property(copy) id value; // @synthesize value=_value;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)merge:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)updateValue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)valueForUpdate:(id)arg1;
@property(readonly) HMSettingValue *internalValue;
@property(readonly, getter=isWritable) BOOL writable;
@property(readonly, copy) NSString *localizedTitle;
- (id)description;
- (id)_initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 type:(long long)arg3 value:(id)arg4 properties:(unsigned long long)arg5;
- (id)initWithInternal;

@end

