//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSError, NSMutableData, NSURL;

@interface CLSWebResponse : NSObject
{
    NSURL *_requestURL;
    unsigned long long _statusCode;
    id _body;
    NSError *_error;
    NSDictionary *_responseHeaders;
    NSMutableData *_responseData;
}

@property(readonly, retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(copy, nonatomic) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id body; // @synthesize body=_body;
@property(nonatomic) unsigned long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSURL *requestURL; // @synthesize requestURL=_requestURL;
- (void)appendData:(id)arg1;
@property(readonly, nonatomic) BOOL wasSuccessful;
- (id)description;
- (void)dealloc;
- (id)init;

@end

