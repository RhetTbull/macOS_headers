//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC4Dock10ImageCache : NSObject
{
    // Error parsing type: , name: _path
    // Error parsing type: , name: _queue
    // Error parsing type: , name: _imagesToCache
    // Error parsing type: , name: _timer
    // Error parsing type: , name: _purgeableSpace
}

- (void).cxx_destruct;
- (void)addImage:(struct CGImage *)arg1 url:(id)arg2 maxSize:(long long)arg3 index:(unsigned int)arg4;
- (id)image:(id)arg1 maxSize:(long long)arg2 index:(unsigned int)arg3;
- (id)init;

@end

