//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDInfoCommand.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSString;

@interface TSDDrawableAccessibilityDescriptionCommand : TSDInfoCommand <GSSPAutoEncodable>
{
    NSString *_accessibilityDescription;
    NSString *_oldAccessibilityDescription;
}

@property(readonly, nonatomic) NSString *oldAccessibilityDescription; // @synthesize oldAccessibilityDescription=_oldAccessibilityDescription;
@property(readonly, nonatomic) NSString *accessibilityDescription; // @synthesize accessibilityDescription=_accessibilityDescription;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)p_do;
- (id)actionString;
- (id)propertyNameForTransform;
- (void)rollback;
- (id)makeInverse;
- (BOOL)supportsCollaboration;
- (void)redo;
- (void)undo;
- (void)commit;
- (BOOL)process;
- (void)dealloc;
- (id)initWithDrawableInfo:(id)arg1 accessibilityDescription:(id)arg2;
- (void)deallocSOS;
- (void)populateGSSPCmdInfoSetAccessibilityDescription:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;
- (id)initWithGSSPMessage:(id)arg1 andContext:(struct GSSPDecodeConversionContext *)arg2;

@end

