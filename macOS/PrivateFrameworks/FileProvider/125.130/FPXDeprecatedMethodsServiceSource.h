//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FileProvider/NSFileProviderServiceSource-Protocol.h>

@class FPXExtensionContext, NSFileProviderExtension, NSString;

__attribute__((visibility("hidden")))
@interface FPXDeprecatedMethodsServiceSource : NSObject <NSFileProviderServiceSource>
{
    NSString *_serviceName;
    NSString *_itemIdentifier;
    NSFileProviderExtension *_instance;
    FPXExtensionContext *_extensionContext;
}

- (void).cxx_destruct;
- (id)makeListenerEndpointAndReturnError:(id *)arg1;
@property(readonly, copy, nonatomic) NSString *serviceName;
- (id)initWithServiceName:(id)arg1 itemIdentifier:(id)arg2 instance:(id)arg3 extensionContext:(id)arg4;

@end

