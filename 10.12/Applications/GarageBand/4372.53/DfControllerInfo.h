//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DfControllerInfo : NSObject
{
    CDStruct_5115be14 m_GeneralizedController;
    long long m_eventMinValue;
    long long m_eventDefaultValue;
    long long m_eventMaxValue;
    float m_displayMinValue;
    float m_displayDefaultValue;
    float m_displayMaxValue;
    NSString *m_Unit;
    NSString *m_Name;
    NSString *m_ParentName;
    unsigned int m_IsContinous:1;
    unsigned int m_IsCenterBased:1;
    unsigned int m_IsQuantized:1;
    BOOL m_retained;
}

+ (id)controllerInfoFromGeneralizedController:(CDStruct_5115be14)arg1 andObject:(id)arg2 retainObject:(BOOL)arg3;
- (void)dealloc;
- (id)stringFromEventValue:(long long)arg1;
- (void)setParentName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setIsQuantized:(BOOL)arg1;
- (void)setIsCenterBased:(BOOL)arg1;
- (void)setIsContinous:(BOOL)arg1;
- (void)setUnit:(id)arg1;
- (void)setDisplayMaxValue:(float)arg1;
- (void)setDisplayDefaultValue:(float)arg1;
- (void)setDisplayMinValue:(float)arg1;
- (void)setEventMaxValue:(long long)arg1;
- (void)setEventDefaultValue:(long long)arg1;
- (void)setEventMinValue:(long long)arg1;
- (void)setGeneralizedController:(CDStruct_5115be14)arg1;
- (float)currentNormalizedValue;
- (long long)currentEventValue;
- (id)parentName;
- (id)name;
- (BOOL)isQuantized;
- (BOOL)isCenterBased;
- (BOOL)isContinous;
- (id)unit;
- (float)displayMaxValue;
- (float)displayDefaultValue;
- (float)displayMinValue;
- (long long)eventMaxValue;
- (long long)eventDefaultValue;
- (long long)eventMinValue;
- (CDStruct_5115be14)generalizedController;

@end

