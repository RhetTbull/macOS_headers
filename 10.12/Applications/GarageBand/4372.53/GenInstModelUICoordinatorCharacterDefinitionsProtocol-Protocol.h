//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol GenInstDrummer_TrackModelProtocol;

@protocol GenInstModelUICoordinatorCharacterDefinitionsProtocol <NSObject>
- (BOOL)isXYPadKey:(NSString *)arg1;
- (NSDictionary *)initialDrumRegionParameterValuesForDrummerTrackModel:(id <GenInstDrummer_TrackModelProtocol>)arg1;
- (NSArray *)knownParameterIDs;
- (NSDictionary *)parameterGenerateOptions;
- (NSDictionary *)parameterChangeConditions;
- (NSDictionary *)parameterDependencies;
- (NSDictionary *)parameterTemplates;
- (NSDictionary *)parameters;
@end

