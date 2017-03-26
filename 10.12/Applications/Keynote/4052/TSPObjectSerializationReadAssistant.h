//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSPDecoderReadCoordinatorDelegate-Protocol.h"

@class NSDictionary, NSString, TSPComponent, TSPObjectContext;

@interface TSPObjectSerializationReadAssistant : NSObject <TSPDecoderReadCoordinatorDelegate>
{
    TSPObjectContext *_context;
    NSDictionary *_identifierToObjectUUIDDictionary;
    NSDictionary *_dataInfos;
    TSPComponent *_rootObjectComponent;
    BOOL _resetObjectUUIDs;
    BOOL _shouldDecodeMissingDataAsRemote;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isCrossAppPaste;
@property(readonly, nonatomic) BOOL isCrossDocumentPaste;
@property(readonly, nonatomic) long long sourceType;
@property(readonly, nonatomic) BOOL hasDocumentVersionUUID;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
- (BOOL)shouldDecodeMissingDataAsRemote;
- (id)dataInfoForIdentifier:(long long)arg1;
- (id)cachedDataForIdentifier:(long long)arg1;
- (id)objectUUIDForExternalReferenceToIdentifier:(long long)arg1;
- (long long)objectIdentifierForUUID:(id)arg1;
- (BOOL)shouldResolveExternalReferencesUsingObjectUUID;
- (BOOL)canResolveExternalReferences;
- (id)rootObjectComponent;
- (BOOL)processMetadataObject:(id)arg1 error:(id *)arg2;
- (id)metadataComponent;
- (id)cachedMetadataObject;
- (id)decodeObjectWithData:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)initWithContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

