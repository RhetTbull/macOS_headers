//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSKCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class KNShow, KNShowValue, NSString;

@interface KNCommandShowSetValue : TSKCommand <GSSPAutoEncodable>
{
    NSString *_property;
    KNShowValue *_value;
    KNShow *_show;
    KNShowValue *_oldValue;
}

@property(readonly, nonatomic) KNShow *show; // @synthesize show=_show;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void)rollback;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
@property(readonly, nonatomic) id value;
- (BOOL)process;
- (id)actionString;
- (void)dealloc;
- (id)initWithShow:(id)arg1 property:(id)arg2 value:(id)arg3;
- (void)didInitFromSOS;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)deallocSOS;
- (void)populateGSSPCmdShowSetValue:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

