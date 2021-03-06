//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CoreUtils/CUReadWriteRequestable-Protocol.h>

@class CBCentralManager, NSString;
@protocol OS_dispatch_queue;

@interface CUBTScalablePipe : NSObject <CUReadWriteRequestable>
{
    CBCentralManager *_btCentral;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    BOOL _forceConnection;
    int _state;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
    CDUnknownBlockType _stateChangedHandler;
}

@property(copy, nonatomic) CDUnknownBlockType stateChangedHandler; // @synthesize stateChangedHandler=_stateChangedHandler;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) BOOL forceConnection; // @synthesize forceConnection=_forceConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)writeWithRequest:(id)arg1;
- (void)readWithRequest:(id)arg1;
- (void)invalidate;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

