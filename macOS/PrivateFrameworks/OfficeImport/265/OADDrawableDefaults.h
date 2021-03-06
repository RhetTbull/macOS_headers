//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class OADDrawableCategoryDefaults;

@interface OADDrawableDefaults : NSObject
{
    OADDrawableCategoryDefaults *mShapeDefaults;
    OADDrawableCategoryDefaults *mLineDefaults;
    OADDrawableCategoryDefaults *mTextDefaults;
}

@property(retain, nonatomic) OADDrawableCategoryDefaults *textDefaults; // @synthesize textDefaults=mTextDefaults;
@property(retain, nonatomic) OADDrawableCategoryDefaults *lineDefaults; // @synthesize lineDefaults=mLineDefaults;
@property(retain, nonatomic) OADDrawableCategoryDefaults *shapeDefaults; // @synthesize shapeDefaults=mShapeDefaults;
- (void).cxx_destruct;
- (id)description;
- (id)addTextDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (void)addDefaults;
- (_Bool)isEmpty;

@end

