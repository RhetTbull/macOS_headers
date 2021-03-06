//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface iTermMetaFrustrationDetector : NSObject
{
    double _lastTime;
    unsigned long long _state;
    BOOL _lastWasLeft;
    id <iTermMetaFrustrationDetector> _delegate;
}

@property(nonatomic) __weak id <iTermMetaFrustrationDetector> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)eventIsEsc:(id)arg1;
- (BOOL)eventIsBackspace:(id)arg1;
- (BOOL)eventIsCandidate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)didSendKeyEvent:(id)arg1;

@end

