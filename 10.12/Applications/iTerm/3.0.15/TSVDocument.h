//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface TSVDocument : NSObject
{
    NSMutableDictionary *map_;
    NSMutableArray *columns_;
    NSMutableArray *records_;
}

@property(readonly, nonatomic) NSMutableArray *records; // @synthesize records=records_;
@property(retain, nonatomic) NSMutableArray *columns; // @synthesize columns=columns_;
- (id)valueInRecord:(id)arg1 forField:(id)arg2;
- (void)dealloc;
- (id)init;

@end

