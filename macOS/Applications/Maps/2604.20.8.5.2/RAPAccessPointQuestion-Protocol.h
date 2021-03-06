//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RAPCommentQuestionProtocol-Protocol.h"
#import "RAPInstrumentableTarget-Protocol.h"

@class RAPPlaceCorrectableString;

@protocol RAPAccessPointQuestion <RAPCommentQuestionProtocol, RAPInstrumentableTarget>
@property(nonatomic) struct CLLocationCoordinate2D selectedCoordinate;
@property(readonly, nonatomic) BOOL showPin;
@property(readonly, nonatomic) unsigned long long mapType;
@property(readonly, nonatomic) struct CLLocationCoordinate2D originalCoordinate;
@property(readonly, nonatomic) CDStruct_02837cd9 visibleMapRect;

@optional
@property(retain, nonatomic) RAPPlaceCorrectableString *accessPointName;
@end

