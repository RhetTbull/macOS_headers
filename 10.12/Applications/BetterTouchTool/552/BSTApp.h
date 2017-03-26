//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface BSTApp : NSObject <NSCoding>
{
    NSString *appIdentifier;
    double leftSnapSize;
    double rightSnapSize;
    struct CGRect topSnapSize;
    double topLeftSnapSize;
    double topRightSnapSize;
    double bottomRightSnapSize;
    double bottomLeftSnapSize;
    BOOL specificSnapsUsed;
    BOOL windowSnappingDisabled;
    struct CGSize minSize;
}

@property(nonatomic) struct CGSize minSize; // @synthesize minSize;
@property(nonatomic) BOOL windowSnappingDisabled; // @synthesize windowSnappingDisabled;
@property(nonatomic) BOOL specificSnapsUsed; // @synthesize specificSnapsUsed;
@property(nonatomic) double bottomLeftSnapSize; // @synthesize bottomLeftSnapSize;
@property(nonatomic) double bottomRightSnapSize; // @synthesize bottomRightSnapSize;
@property(nonatomic) double topRightSnapSize; // @synthesize topRightSnapSize;
@property(nonatomic) double topLeftSnapSize; // @synthesize topLeftSnapSize;
@property(nonatomic) struct CGRect topSnapSize; // @synthesize topSnapSize;
@property(nonatomic) double rightSnapSize; // @synthesize rightSnapSize;
@property(nonatomic) double leftSnapSize; // @synthesize leftSnapSize;
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 windowSnappingEnabled:(BOOL)arg2;

@end

