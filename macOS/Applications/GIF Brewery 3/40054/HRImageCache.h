//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AFHTTPSessionManager;

@interface HRImageCache : NSObject
{
    AFHTTPSessionManager *_manager;
}

+ (id)shared;
@property(retain, nonatomic) AFHTTPSessionManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (id)getImageAtURLString:(id)arg1;
- (id)init;

@end

