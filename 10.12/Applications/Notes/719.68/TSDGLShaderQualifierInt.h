//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDGLShaderQualifier.h"

@interface TSDGLShaderQualifierInt : TSDGLShaderQualifier
{
    int _GLintValue;
    int _proposedGLintValue;
}

@property(nonatomic) int proposedGLintValue; // @synthesize proposedGLintValue=_proposedGLintValue;
@property(readonly, nonatomic) int GLintValue; // @synthesize GLintValue=_GLintValue;
- (id)description;
- (void)setGLUniformWithShader:(id)arg1;

@end

