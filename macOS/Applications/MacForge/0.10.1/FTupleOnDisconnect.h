//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FTupleOnDisconnect : NSObject
{
    NSString *pathString;
    NSString *action;
    id data;
    CDUnknownBlockType onComplete;
}

@property(copy, nonatomic) CDUnknownBlockType onComplete; // @synthesize onComplete;
@property(retain, nonatomic) id data; // @synthesize data;
@property(retain, nonatomic) NSString *action; // @synthesize action;
@property(retain, nonatomic) NSString *pathString; // @synthesize pathString;
- (void).cxx_destruct;

@end

