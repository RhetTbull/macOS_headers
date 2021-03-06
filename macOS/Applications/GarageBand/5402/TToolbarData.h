//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TToolbarData : NSObject
{
    int _featureID;
    NSString *_identifier;
    NSString *_label;
    NSString *_tooltip;
    NSString *_imageName;
}

+ (id)toolbarDataWithIdentifier:(id)arg1 label:(id)arg2 tooltip:(id)arg3 imageName:(id)arg4 featureID:(int)arg5;
- (void).cxx_destruct;
@property(nonatomic) int featureID; // @synthesize featureID=_featureID;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 label:(id)arg2 tooltip:(id)arg3 imageName:(id)arg4 featureID:(int)arg5;

@end

