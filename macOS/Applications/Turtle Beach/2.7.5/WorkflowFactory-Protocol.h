//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject, Workflow;

@protocol WorkflowFactory <NSObject>
- (Workflow *)createWorkflow:(NSObject *)arg1 forDelegate:(id <WorkflowDelegate>)arg2;
@end

