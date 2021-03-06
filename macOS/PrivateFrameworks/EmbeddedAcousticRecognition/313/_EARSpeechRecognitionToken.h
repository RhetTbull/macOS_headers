//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface _EARSpeechRecognitionToken : NSObject <NSCopying>
{
    struct Token _quasarToken;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct Token quasarToken; // @synthesize quasarToken=_quasarToken;
- (id)description;
@property(readonly, nonatomic) NSString *ipaPhoneSequence;
@property(readonly, nonatomic) NSString *phoneSequence;
@property(readonly, nonatomic) BOOL hasSpaceBefore;
@property(readonly, nonatomic) BOOL hasSpaceAfter;
@property(readonly, nonatomic) double confidence;
@property(readonly, nonatomic) double silenceStart;
@property(readonly, nonatomic) double end;
@property(readonly, nonatomic) double start;
@property(readonly, copy, nonatomic) NSString *tokenName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithQuasarToken:(const struct Token *)arg1;
- (id)initWithTokenName:(id)arg1 start:(double)arg2 end:(double)arg3 silenceStart:(double)arg4 confidence:(double)arg5 hasSpaceAfter:(BOOL)arg6 hasSpaceBefore:(BOOL)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

