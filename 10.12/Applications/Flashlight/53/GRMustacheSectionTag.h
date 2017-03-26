//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GRMustacheTag.h"

@class GRMustacheExpression, GRMustacheTemplateAST, NSString;

@interface GRMustacheSectionTag : GRMustacheTag
{
    GRMustacheExpression *_expression;
    BOOL _inverted;
    NSString *_templateString;
    struct _NSRange _innerRange;
    GRMustacheTemplateAST *_templateAST;
}

+ (id)sectionTagWithExpression:(id)arg1 inverted:(BOOL)arg2 templateString:(id)arg3 innerRange:(struct _NSRange)arg4 templateAST:(id)arg5;
- (BOOL)isInverted;
@property(readonly, retain, nonatomic) GRMustacheTemplateAST *templateAST; // @synthesize templateAST=_templateAST;
@property(readonly, retain, nonatomic) GRMustacheExpression *expression; // @synthesize expression=_expression;
- (id)initWithExpression:(id)arg1 inverted:(BOOL)arg2 templateString:(id)arg3 innerRange:(struct _NSRange)arg4 templateAST:(id)arg5;
- (BOOL)acceptTemplateASTVisitor:(id)arg1 error:(id *)arg2;
- (id)renderContentWithContext:(id)arg1 HTMLSafe:(char *)arg2 error:(id *)arg3;
- (unsigned long long)type;
- (id)innerTemplateString;
- (id)description;
- (void)dealloc;

@end

