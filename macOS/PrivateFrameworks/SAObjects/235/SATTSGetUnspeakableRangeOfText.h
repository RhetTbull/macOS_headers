//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSString;

@interface SATTSGetUnspeakableRangeOfText : SABaseClientBoundCommand
{
}

+ (id)getUnspeakableRangeOfTextWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getUnspeakableRangeOfText;
- (BOOL)mutatingCommand;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSArray *texts;
@property(copy, nonatomic) NSString *locale;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

