//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSManagedObject.h"

@class NSSet, NSString;

@interface iTermHostRecordMO : NSManagedObject
{
}

+ (id)entityName;
+ (id)hostRecordInContext:(id)arg1;
- (id)hostKey;

// Remaining properties
@property(retain, nonatomic) NSSet *directories; // @dynamic directories;
@property(retain, nonatomic) NSSet *entries; // @dynamic entries;
@property(retain, nonatomic) NSString *hostname; // @dynamic hostname;
@property(retain, nonatomic) NSString *username; // @dynamic username;

@end

