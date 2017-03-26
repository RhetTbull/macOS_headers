//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Mantle/MTLModel.h>

#import "MTLManagedObjectSerializing-Protocol.h"

@class NSArray, NSString;

@interface GHGitUser : MTLModel <MTLManagedObjectSerializing>
{
    NSString *_name;
    NSString *_email;
    NSArray *_users;
}

+ (id)gitUserWithEmail:(id)arg1 name:(id)arg2;
+ (id)managedObjectKeysByPropertyKey;
+ (id)relationshipModelClassesByPropertyKey;
+ (id)propertyKeysForManagedObjectUniquing;
+ (id)managedObjectEntityName;
@property(retain, nonatomic) NSArray *users; // @synthesize users=_users;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

