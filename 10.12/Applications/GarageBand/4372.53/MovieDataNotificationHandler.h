//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MovieDataNotificationHandler : NSObject
{
    struct CMovieData *_movieData;
}

+ (struct CDocumentLogic *)validDocWithMovieData:(struct CMovieData *)arg1 notification:(id)arg2;
@property(nonatomic) struct CMovieData *movieData; // @synthesize movieData=_movieData;
- (void)handleDocumentDidOpen:(id)arg1;
- (void)handleDocumentWillClose:(id)arg1;
- (id)init;
- (id)initWithMovieData:(struct CMovieData *)arg1;

@end

