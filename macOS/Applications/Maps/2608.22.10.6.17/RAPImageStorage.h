//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol RAPImageStorageDelegate;

__attribute__((visibility("hidden")))
@interface RAPImageStorage : NSObject
{
    id <RAPImageStorageDelegate> _delegate;
}

+ (id)baseFilePath;
+ (id)filePathForSubmissionIdentifier:(id)arg1;
+ (id)filePathForSubmissionIdentifier:(id)arg1 imageIdentifier:(id)arg2;
- (void).cxx_destruct;
- (BOOL)removeImageForSubmissionIdentifier:(id)arg1 imageIdentifier:(id)arg2;
- (BOOL)saveImageWithSubmissionIdentifier:(id)arg1 imageIdentifier:(id)arg2 imageData:(id)arg3;
- (id)initWithDelegate:(id)arg1;

@end

