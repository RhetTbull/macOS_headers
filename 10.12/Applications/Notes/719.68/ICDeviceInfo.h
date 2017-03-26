//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface ICDeviceInfo : NSObject <NSCopying>
{
    BOOL _upgraded;
    BOOL _upgradable;
    BOOL _isOSXDevice;
    NSString *_name;
}

+ (void)logDeviceList:(id)arg1;
@property(readonly, nonatomic) BOOL isOSXDevice; // @synthesize isOSXDevice=_isOSXDevice;
@property(readonly, nonatomic) BOOL upgradable; // @synthesize upgradable=_upgradable;
@property(readonly, nonatomic) BOOL upgraded; // @synthesize upgraded=_upgraded;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)attributedStringWithAttributes:(id)arg1 asteriskColor:(struct NSColor *)arg2;
- (id)loggableDescription;
- (BOOL)shouldBeHidden;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 upgradable:(BOOL)arg2 upgraded:(BOOL)arg3;
- (id)init;

@end

