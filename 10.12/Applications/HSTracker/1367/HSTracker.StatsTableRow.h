//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HSTracker.StatsTableRow : NSObject
{
    // Error parsing type: , name: classIcon
    // Error parsing type: , name: opponentClassName
    // Error parsing type: , name: record
    // Error parsing type: , name: winRate
    // Error parsing type: , name: confidenceInterval
    // Error parsing type: , name: totalGames
    // Error parsing type: , name: winRateNumber
    // Error parsing type: , name: confidenceWindow
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
@property(nonatomic) double confidenceWindow; // @synthesize confidenceWindow;
@property(nonatomic) double winRateNumber; // @synthesize winRateNumber;
@property(nonatomic) long long totalGames; // @synthesize totalGames;
@property(nonatomic, copy) NSString *confidenceInterval; // @synthesize confidenceInterval;
@property(nonatomic, copy) NSString *winRate; // @synthesize winRate;
@property(nonatomic, copy) NSString *record; // @synthesize record;
@property(nonatomic, copy) NSString *opponentClassName; // @synthesize opponentClassName;
@property(nonatomic, copy) NSString *classIcon; // @synthesize classIcon;

@end

