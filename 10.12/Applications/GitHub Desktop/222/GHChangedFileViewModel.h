//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ReactiveViewModel/RVMViewModel.h>

#import "GHTreeNodeViewModel-Protocol.h"

@class NSArray, NSString, RACSignal;

@interface GHChangedFileViewModel : RVMViewModel <GHTreeNodeViewModel>
{
    BOOL _rename;
    NSString *_fileName;
    NSString *_renamedFileName;
    NSString *_fullDisplayName;
    RACSignal *_diffstatSignal;
}

@property(readonly, nonatomic) RACSignal *diffstatSignal; // @synthesize diffstatSignal=_diffstatSignal;
@property(readonly, nonatomic, getter=isRename) BOOL rename; // @synthesize rename=_rename;
@property(readonly, copy, nonatomic) NSString *fullDisplayName; // @synthesize fullDisplayName=_fullDisplayName;
@property(readonly, copy, nonatomic) NSString *renamedFileName; // @synthesize renamedFileName=_renamedFileName;
@property(readonly, copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
@property(readonly, nonatomic, getter=isLeaf) BOOL isLeaf;
@property(readonly, copy, nonatomic) NSArray *children;
- (id)initWithFileName:(id)arg1 renamedFileName:(id)arg2 diffstatSignal:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

