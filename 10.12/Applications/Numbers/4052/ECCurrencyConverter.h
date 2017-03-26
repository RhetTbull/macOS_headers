//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ECCurrencyConverter : NSObject
{
    NSMutableDictionary *mXlToLassoCurrencyCode;
    NSMutableDictionary *mLassoToXlCurrencyCode;
    NSMutableDictionary *mXlAccountingFormat;
    NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;
}

+ (id)currencyConverter;
- (int)xlAccountFormatFromLasso:(id)arg1;
- (id)xlCurrencyCodeFromLasso:(id)arg1;
- (id)lassoCurrencyCodeFromXl:(id)arg1;
- (void)dealloc;
- (id)lassoCurrencyCodeForDollar;
- (void)populateDictionaries;

@end

