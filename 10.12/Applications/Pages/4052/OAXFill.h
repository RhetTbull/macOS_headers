//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAXFill : NSObject
{
}

+ (id)readImageFillFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 forDrawable:(id)arg3 drawingState:(id)arg4;
+ (id)relationshipIdForBlipRef:(id)arg1 state:(id)arg2;
+ (void)writeBlipRef:(id)arg1 ofDrawable:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)writeImageFill:(id)arg1 ofDrawable:(id)arg2 to:(id)arg3 state:(id)arg4;
+ (void)write:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (id)readBlipRefFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 forDrawable:(id)arg3 drawingState:(id)arg4 forBullet:(BOOL)arg5;
+ (id)readFillFromXmlNode:(struct _xmlNode *)arg1 packagePart:(id)arg2 drawingState:(id)arg3;
+ (id)contentTypeForBlipType:(int)arg1;
+ (void)writeTile:(id)arg1 to:(id)arg2;
+ (void)writePatternFill:(id)arg1 to:(id)arg2;
+ (void)writeGradientFill:(id)arg1 to:(id)arg2;
+ (void)writeSolidFill:(id)arg1 to:(id)arg2;
+ (id)presetPatternFillTypeEnumMap;
+ (id)pathGradientFillTypeEnumMap;
+ (id)tileFlipModeEnumMap;
+ (id)readPresetPatternFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readTile:(struct _xmlNode *)arg1 tile:(id)arg2;
+ (void)readStretch:(struct _xmlNode *)arg1 stretch:(id)arg2;
+ (id)readGradientFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readPathGradientFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)readLinearGradientFillFromXmlNode:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readGradientFillFromXmlNode:(struct _xmlNode *)arg1 toGradientFill:(id)arg2 drawingState:(id)arg3;
+ (id)readSolidFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readGroupFillFromXmlNode:(struct _xmlNode *)arg1;
+ (id)readNullFillFromXmlNode:(struct _xmlNode *)arg1;

@end

