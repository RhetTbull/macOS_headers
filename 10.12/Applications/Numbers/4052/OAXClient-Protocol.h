//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class CXNamespace, NSString, OADDrawable, OADGroup, OADHyperlink, OADImage, OADParagraph, OADShape, OADTextField, OAXDrawingState, OAXTextFieldIdentity, OCPPackageRelationship, ODDDiagram;

@protocol OAXClient
+ (BOOL)sourceDrawableIsTopLevel:(struct _xmlNode *)arg1;
- (OADDrawable *)readGraphicData:(struct _xmlNode *)arg1 state:(OAXDrawingState *)arg2;
- (OADImage *)readOle:(struct _xmlNode *)arg1 state:(OAXDrawingState *)arg2;
- (void)postprocessHyperlink:(OADHyperlink *)arg1 relationship:(OCPPackageRelationship *)arg2 state:(OAXDrawingState *)arg3;
- (OADTextField *)readClientTextField:(struct _xmlNode *)arg1 identity:(OAXTextFieldIdentity *)arg2 paragraph:(OADParagraph *)arg3 state:(OAXDrawingState *)arg4;
- (void)readBlipExtWithURI:(NSString *)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(OADDrawable *)arg3 state:(OAXDrawingState *)arg4;
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg1 toDrawable:(OADDrawable *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromGraphicDataNode:(struct _xmlNode *)arg1 toDiagram:(ODDDiagram *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromGroupNode:(struct _xmlNode *)arg1 toGroup:(OADGroup *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg1 toImage:(OADImage *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg1 toShape:(OADShape *)arg2 state:(OAXDrawingState *)arg3;
- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(OADDrawable *)arg2 state:(OAXDrawingState *)arg3;
- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg1 inNamespace:(CXNamespace *)arg2 state:(OAXDrawingState *)arg3;
- (OADDrawable *)readClientDrawableFromXmlNode:(struct _xmlNode *)arg1 state:(OAXDrawingState *)arg2;

@optional
- (BOOL)chartAutoStrokeIsHollow;
- (BOOL)chartAutoFillIsHollow;
@end

