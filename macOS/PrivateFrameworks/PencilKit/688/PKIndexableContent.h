//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CHRecognitionSessionIndexableContent, NSString;

@interface PKIndexableContent : NSObject
{
    CHRecognitionSessionIndexableContent *_chIndexableContent;
}

@property(retain) CHRecognitionSessionIndexableContent *chIndexableContent; // @synthesize chIndexableContent=_chIndexableContent;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *presentableTextRepresentation;
@property(readonly, nonatomic) NSString *indexableTextRepresentation;
- (id)initWithIndexableContent:(id)arg1;

@end

