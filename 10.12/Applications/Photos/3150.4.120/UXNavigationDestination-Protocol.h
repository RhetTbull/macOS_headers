//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString, UXAuxiliaryNavigationStore;

@protocol UXNavigationDestination <NSObject, NSSecureCoding>
@property(readonly, nonatomic) UXAuxiliaryNavigationStore *auxiliaryNavigationStore;
@property(readonly, nonatomic) NSString *destinationTitle;
@property(readonly, nonatomic) NSString *destinationType;
@end

