//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ECMultiScaleImage : NSObject
{
    NSString *_name;
    float _scaleFactor;
    id _image;
    _Bool _scaleFactorChanged;
}

+ (id)imageWithName:(id)arg1 usingScaleFactor:(float)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) id image; // @synthesize image=_image;
- (id)initWithName:(id)arg1 usingScaleFactor:(float)arg2;

@end

