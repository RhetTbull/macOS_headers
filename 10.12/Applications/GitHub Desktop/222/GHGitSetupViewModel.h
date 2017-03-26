//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ReactiveViewModel/RVMViewModel.h>

@class NSString, RACCommand, RACSignal;

@interface GHGitSetupViewModel : RVMViewModel
{
    NSString *_name;
    NSString *_email;
    RACCommand *_reloadConfiguration;
    RACSignal *_configurationWriteErrors;
}

@property(readonly, nonatomic) RACSignal *configurationWriteErrors; // @synthesize configurationWriteErrors=_configurationWriteErrors;
@property(readonly, nonatomic) RACCommand *reloadConfiguration; // @synthesize reloadConfiguration=_reloadConfiguration;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)writeSignalValues:(id)arg1 forConfigKey:(id)arg2;
- (id)readStringForConfigKey:(id)arg1;
- (id)init;

@end

