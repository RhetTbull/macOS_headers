//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GRMustacheTemplateASTNode-Protocol.h"

@class GRMustacheTemplateAST, NSString;

@interface GRMustachePartialNode : NSObject <GRMustacheTemplateASTNode>
{
    NSString *_name;
    GRMustacheTemplateAST *_templateAST;
}

+ (id)partialNodeWithTemplateAST:(id)arg1 name:(id)arg2;
@property(readonly, retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, retain, nonatomic) GRMustacheTemplateAST *templateAST; // @synthesize templateAST=_templateAST;
- (id)initWithTemplateAST:(id)arg1 name:(id)arg2;
- (id)resolveTemplateASTNode:(id)arg1;
- (BOOL)acceptTemplateASTVisitor:(id)arg1 error:(id *)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

