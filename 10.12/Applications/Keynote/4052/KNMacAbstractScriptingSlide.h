//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAScriptDrawableContainerInfoProxy.h"

#import "NSCopying-Protocol.h"

@class KNDocumentEditor, KNDocumentRoot, KNInteractiveCanvasController, KNMacCanvasViewController, KNSlideNode, KNTransitionCommandProvider, NSString, TMAScriptInfoProxy;

@interface KNMacAbstractScriptingSlide : TMAScriptDrawableContainerInfoProxy <NSCopying>
{
    KNInteractiveCanvasController *mInteractiveCanvasController;
    KNMacCanvasViewController *mCanvasViewController;
    KNDocumentEditor *mDocumentEditor;
    KNSlideNode *mNode;
    KNTransitionCommandProvider *mTransitionCommandProvider;
}

+ (id)scriptingSlideWithNode:(id)arg1 container:(id)arg2;
@property(readonly, nonatomic) KNDocumentEditor *p_documentEditor; // @synthesize p_documentEditor=mDocumentEditor;
@property(readonly, nonatomic) KNTransitionCommandProvider *p_transitionCommandProvider; // @synthesize p_transitionCommandProvider=mTransitionCommandProvider;
@property(retain, nonatomic) KNSlideNode *slideNode; // @synthesize slideNode=mNode;
- (void)becomeSelected;
- (id)p_newDocumentEditor;
- (id)p_slideCollectionEditor;
- (id)formulaReferenceName;
- (id)drawableContainer;
- (id)modelForSelection:(id)arg1;
- (id)childInfos;
- (id)handleClassicAddChartCommand:(id)arg1;
- (id)handleClassicStartScriptCommand:(id)arg1;
- (id)handleClassicJumpToScriptCommand:(id)arg1;
@property(readonly, nonatomic) TMAScriptInfoProxy *scriptingBodyPlaceholder;
@property(nonatomic) BOOL bodyVisible;
@property(readonly, nonatomic) TMAScriptInfoProxy *scriptingTitlePlaceholder;
@property(nonatomic) BOOL titleVisible;
- (id)objectSpecifierForInfoProxy:(id)arg1;
@property(readonly, nonatomic) KNDocumentRoot *documentRoot;
- (void)dealloc;
@property(readonly, nonatomic) NSString *keyInContainer;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSlideNode:(id)arg1 container:(id)arg2;

@end

