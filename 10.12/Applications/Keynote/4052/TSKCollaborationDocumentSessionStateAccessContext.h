//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSKCollaborationDocumentSessionStateAccessContext : NSObject
{
    BOOL _couldAccessSessionState;
    CDUnknownBlockType _readBlock;
    CDUnknownBlockType _writeBlock;
    CDUnknownBlockType _mainThreadReadBlock;
}

@property(nonatomic) BOOL couldAccessSessionState; // @synthesize couldAccessSessionState=_couldAccessSessionState;
@property(readonly, nonatomic) CDUnknownBlockType mainThreadReadBlock; // @synthesize mainThreadReadBlock=_mainThreadReadBlock;
@property(readonly, nonatomic) CDUnknownBlockType writeBlock; // @synthesize writeBlock=_writeBlock;
@property(readonly, nonatomic) CDUnknownBlockType readBlock; // @synthesize readBlock=_readBlock;
- (void)dealloc;
- (id)init;
- (id)initWithReadBlock:(CDUnknownBlockType)arg1 writeBlock:(CDUnknownBlockType)arg2 mainThreadReadBlock:(CDUnknownBlockType)arg3;

@end

