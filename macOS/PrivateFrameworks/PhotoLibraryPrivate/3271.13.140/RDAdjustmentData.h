//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDAdjustmentDataModel.h>

@interface RDAdjustmentData : RDAdjustmentDataModel
{
    unsigned char _updateRenderTypeOnce;
}

+ (void)deleteStaleModelsWithLibrary:(id)arg1 withReason:(unsigned short)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (void)deleteAdjustmentDataWithVersionIds:(id)arg1 database:(id)arg2 withReason:(unsigned short)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)deleteAdjustmentDataWithUuid:(id)arg1 forVersion:(id)arg2 withReason:(unsigned short)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)deleteAdjustmentDataWithFilter:(id)arg1 withReason:(unsigned short)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)newWithAdjustmentData:(id)arg1 context:(id)arg2;
+ (id)newWithAdjustmentData:(id)arg1;
+ (id)newWithVersion:(id)arg1;
- (BOOL)generateFingerprintWithError:(id *)arg1;
- (BOOL)generateFingerprintWithVersion:(id)arg1 error:(id *)arg2;
- (long long)computeOrientation;
- (id)adjustmentEnvelope;
- (void)setVersionId:(long long)arg1;
- (void)setRenderTypes:(long long)arg1;
- (void)updateRenderTypeDependencies;
- (BOOL)isRenderType:(unsigned long long)arg1;
- (short)modelType;
- (void)setModelDefaults;

@end

