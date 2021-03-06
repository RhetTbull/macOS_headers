//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BSXPCCoder, NSError, NSObject<OS_xpc_object>, RBSXPCMessageReply;

@interface RBSXPCMessage : NSObject
{
    NSObject<OS_xpc_object> *_xpc_message;
    BSXPCCoder *_payload;
    SEL _method;
}

+ (id)messageForXPCMessage:(id)arg1;
+ (id)messageForMethod:(SEL)arg1 varguments:(id)arg2;
+ (id)messageForMethod:(SEL)arg1 arguments:(id)arg2;
+ (id)messageWithEncoder:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) SEL method; // @synthesize method=_method;
- (id)decodeArgumentCollection:(Class)arg1 withClass:(Class)arg2 atIndex:(unsigned long long)arg3 allowNil:(BOOL)arg4 error:(out id *)arg5;
- (id)decodeArgumentWithClass:(Class)arg1 atIndex:(unsigned long long)arg2 allowNil:(BOOL)arg3 error:(out id *)arg4;
- (id)invokeOnConnection:(id)arg1 withReturnClass:(Class)arg2 error:(out id *)arg3;
- (id)invokeOnConnection:(id)arg1 withReturnCollectionClass:(Class)arg2 entryClass:(Class)arg3 error:(out id *)arg4;
- (oneway void)sendToConnection:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)sendToConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)sendToConnection:(id)arg1 error:(out id *)arg2;
- (oneway void)sendToConnection:(id)arg1;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) RBSXPCMessageReply *reply;
@property(readonly, nonatomic) BOOL isEmpty;
- (id)_initWithMessage:(id)arg1;
- (id)init;

@end

