//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WorkflowKit/WFActionEnvironment.h>

@class NSString;

@interface WFWorkflowTypeActionEnvironment : WFActionEnvironment
{
    NSString *_workflowType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *workflowType; // @synthesize workflowType=_workflowType;
- (BOOL)isAppExtension;
- (BOOL)isWatchOS;
- (BOOL)isMemoryConstrained;
- (id)initWithWorkflowType:(id)arg1;

@end

