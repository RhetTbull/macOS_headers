//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MailSupport/MSAttachmentInfo.h>

@class NSString;

@interface MFComposeAttachmentInfo : MSAttachmentInfo
{
    BOOL _isBasicImage;
    BOOL _isDisplayableImage;
    NSString *_className;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) BOOL isDisplayableImage; // @synthesize isDisplayableImage=_isDisplayableImage;
@property(readonly, nonatomic) BOOL isBasicImage; // @synthesize isBasicImage=_isBasicImage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 filename:(id)arg2 isBasicImage:(BOOL)arg3 isDisplayableImage:(BOOL)arg4 className:(id)arg5;

@end

