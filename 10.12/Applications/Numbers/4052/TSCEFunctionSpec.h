//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TSCEFunctionSpec : NSObject
{
    NSString *mFunctionName;
    short mMinArguments;
    short mMaxArguments;
    short mRepeatingGroupSize;
    NSArray *mArguments;
    NSArray *mRepeatingArguments;
    BOOL mIsOperator;
    int mShipVersion;
    int mFunctionIndex;
}

+ (id)functionSpecForFunctionIndex:(int)arg1;
+ (id)specWithFunctionName:(id)arg1 minArgs:(id)arg2 maxArgs:(id)arg3 repeatingGroupSize:(id)arg4 isOperator:(int)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;
+ (id)specDictionary;
@property(readonly, nonatomic) short repeatingGroupSize; // @synthesize repeatingGroupSize=mRepeatingGroupSize;
@property(readonly, nonatomic) int versionShippedIn; // @synthesize versionShippedIn=mShipVersion;
@property(readonly, nonatomic) BOOL isOperator; // @synthesize isOperator=mIsOperator;
@property(readonly, nonatomic) short maxArguments; // @synthesize maxArguments=mMaxArguments;
@property(readonly, nonatomic) short minArguments; // @synthesize minArguments=mMinArguments;
@property(readonly) int functionIndex; // @synthesize functionIndex=mFunctionIndex;
- (id)nativeSyntaxStringForArgument:(int)arg1;
- (id)argumentSpecForIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long numArguments;
@property(readonly, nonatomic) NSArray *arguments;
- (id)displayStringForLocale:(id)arg1;
- (id)localizedToolTipStringForLocale:(id)arg1;
- (id)localizedFunctionNameForLocale:(id)arg1;
@property(readonly, nonatomic) NSString *functionName;
- (void)dealloc;
- (id)initWithFunctionName:(id)arg1 minArgs:(int)arg2 maxArgs:(int)arg3 repeatingGroupSize:(int)arg4 isOperator:(BOOL)arg5 shipVersion:(int)arg6 arguments:(id)arg7 functionIndex:(int)arg8;
- (id)description;
- (void)p_ValidateArguments;

@end

