//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAITBlip : NSObject
{
}

+ (id)imageBulletDataFromBlipRef:(id)arg1 drawingState:(id)arg2;
+ (id)imageInfoFromBlipRef:(id)arg1 blipArray:(id)arg2 firstBlipIndex:(int)arg3 recolorInfo:(id)arg4 imageAdjustmentsOK:(BOOL)arg5 tileTechnique:(id)arg6 drawingState:(id)arg7;
+ (struct CGSize)tileSizeFromImageNSData:(id)arg1 tileTechnique:(id)arg2;
+ (id)imageNSDataFromImageNSData:(id)arg1 blipType:(int)arg2 effects:(id)arg3 imageAdjustmentsOK:(BOOL)arg4 returnBlipType:(int *)arg5 returnImageAdjustments:(id *)arg6 drawingState:(id)arg7;
+ (id)imageNSDataFromPictNSData:(id)arg1 returnBlipType:(int *)arg2 returnUsePictAsOriginal:(char *)arg3 returnHasMathType:(char *)arg4;
+ (id)imageNSDataFromMetafileNSData:(id)arg1 tileTechnique:(id)arg2 recolorInfo:(id)arg3 returnBlipType:(int *)arg4 drawingState:(id)arg5;
+ (id)preferredSubBlipFromBlip:(id)arg1;
+ (id)imageTSPDataFromImageNSData:(id)arg1 baseImageName:(id)arg2 blipType:(int)arg3 desiredSize:(struct CGSize)arg4 context:(id)arg5;
+ (id)imageNSDataByStrippingOrientationFromImageNSData:(id)arg1;
+ (id)missingImageNSDataFromBaseImageName:(id)arg1 returnBlipType:(int *)arg2;
+ (id)imageNameFromBaseImageName:(id)arg1 blipType:(int)arg2;
+ (id)baseImageNameFromBlipName:(id)arg1;
+ (id)tsuColorsFromOADColors:(id)arg1 drawingState:(id)arg2;

@end

