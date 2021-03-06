//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;
@protocol ContaineeProtocol, ContainerProtocol;

@protocol ContainerDelegate <NSObject>

@optional
- (void)container:(UIViewController<ContainerProtocol> *)arg1 didResignContainee:(UIViewController<ContaineeProtocol> *)arg2 finished:(BOOL)arg3;
- (void)container:(UIViewController<ContainerProtocol> *)arg1 didPresentContainee:(UIViewController<ContaineeProtocol> *)arg2 finished:(BOOL)arg3;
- (void)container:(UIViewController<ContainerProtocol> *)arg1 willResignContainee:(UIViewController<ContaineeProtocol> *)arg2 animated:(BOOL)arg3;
- (void)container:(UIViewController<ContainerProtocol> *)arg1 willPresentContainee:(UIViewController<ContaineeProtocol> *)arg2 animated:(BOOL)arg3;
- (void)container:(UIViewController<ContainerProtocol> *)arg1 containee:(UIViewController<ContaineeProtocol> *)arg2 didChangeLayout:(unsigned long long)arg3;
- (void)container:(UIViewController<ContainerProtocol> *)arg1 containee:(UIViewController<ContaineeProtocol> *)arg2 willChangeLayout:(unsigned long long)arg3;
- (void)container:(UIViewController<ContainerProtocol> *)arg1 didChangeChangeStyle:(unsigned long long)arg2;
- (void)container:(UIViewController<ContainerProtocol> *)arg1 willChangeStyle:(unsigned long long)arg2;
@end

