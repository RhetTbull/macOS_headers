//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LineBufferPosition : NSObject
{
    long long absolutePosition_;
    int yOffset_;
    BOOL extendsToEndOfLine_;
}

+ (id)position;
@property(nonatomic) BOOL extendsToEndOfLine; // @synthesize extendsToEndOfLine=extendsToEndOfLine_;
@property(nonatomic) int yOffset; // @synthesize yOffset=yOffset_;
@property(nonatomic) long long absolutePosition; // @synthesize absolutePosition=absolutePosition_;
- (id)predecessor;
- (id)description;

@end

