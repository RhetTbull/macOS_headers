//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreSuggestionsInternals/SGPipelineDissector.h>

@class SGSqlEntityStore;

@interface SGMetricsDissector : SGPipelineDissector
{
    SGSqlEntityStore *_store;
}

- (void).cxx_destruct;
- (void)dissectInternal:(id)arg1 inContext:(id)arg2;
- (id)initWithEntityStore:(id)arg1;

@end

