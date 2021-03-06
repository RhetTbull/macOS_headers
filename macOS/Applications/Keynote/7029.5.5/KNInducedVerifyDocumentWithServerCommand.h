//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSKit/TSKCommand.h>

#import "GSSPAutoEncodable-Protocol.h"

@class NSArray;

@interface KNInducedVerifyDocumentWithServerCommand : TSKCommand <GSSPAutoEncodable>
{
    NSArray *_slideNodeIdList;
    NSArray *_masterSlideNodeIdList;
}

- (void).cxx_destruct;
- (id)tsa_documentRoot;
- (BOOL)losesSignificantUserEffortWhenShadowed;
- (BOOL)supportsCollaboration;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)commit;
- (void)p_verifyServerSlideNodeIdList:(id)arg1 clientSlideNodeList:(id)arg2 verifyName:(id)arg3;
- (BOOL)process;
- (id)initWithContext:(id)arg1 slideNodeIdList:(id)arg2 masterSlideNodeIdList:(id)arg3;
-     // Error parsing type: v32@0:8r^{InducedVerifyDocumentWithServerCommandArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}^{CommandArchive}BB}16@24, name: loadFromArchive:unarchiver:
-     // Error parsing type: v32@0:8^{InducedVerifyDocumentWithServerCommandArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}{RepeatedPtrField<TSP::UUID>=^{Arena}ii^{Rep}}^{CommandArchive}BB}16@24, name: saveToArchive:archiver:
- (void)populateGSSPCmdInducedVerifyKeynoteDocumentWithServer:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

