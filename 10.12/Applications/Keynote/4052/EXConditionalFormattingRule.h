//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EXConditionalFormattingRule : NSObject
{
}

+ (void)write:(id)arg1 state:(id)arg2;
+ (void)readFrom:(struct _xmlNode *)arg1 x14:(BOOL)arg2 edConditionalFormatting:(id)arg3 edReference:(id)arg4 state:(id)arg5;
+ (void)initialize;
+ (int)edTimePeriodFromXmlTimePeriodString:(id)arg1;
+ (int)edOperatorFromXmlOperatorString:(id)arg1;
+ (int)edRuleTypeFromXmlRuleTypeString:(id)arg1;

@end

