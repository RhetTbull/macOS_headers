//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "aura_Object.h"

@protocol aura_IOStream <aura_Object>
@property(readonly, nonatomic) vector_ea850296 dspModules;
@property(readonly, nonatomic) vector_c6bb1d04 virtualPorts;
@property(readonly, nonatomic) unsigned int latency;
@property(readonly, nonatomic) vector_fefeec75 supportedFormats;
@property(readonly, nonatomic) struct AudioFormat format;
@property(readonly, nonatomic) unsigned int dspFlavor;
- (struct error_code)setFormat:(const struct AudioFormat *)arg1;
@end

