//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class GCDAsyncSocket, GCDAsyncUdpSocket, NSData, NSDictionary, NSMutableArray, NSNetService, NSNetServiceBrowser, NSObject<OS_dispatch_source>, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface Wijourno : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    long long _numberOfTrys;
    NSObject<OS_dispatch_source> *_timer;
    BOOL connected;
    BOOL _changedPWD;
    long long _pwdWrong;
    BOOL _wasConnected;
    BOOL _tryingToReconnect;
    BOOL _isServer;
    BOOL _currentlyConnected;
    NSString *_userPassword;
    NSTimer *_reconnectTimer;
    id <WijournoDelegate> _delegate;
    GCDAsyncSocket *_asyncSocket;
    GCDAsyncUdpSocket *_udpSocket;
    NSString *_password;
    NSNetService *_netService;
    NSNetServiceBrowser *_netServiceBrowser;
    NSMutableArray *_connectedSockets;
    NSMutableArray *_serverAddresses;
    NSMutableArray *_udpServerAddresses;
    NSString *_lastConnectedUUID;
    NSMutableArray *_availableNetServices;
    NSMutableArray *_trustedAddresses;
    NSMutableArray *_trustedSockets;
    NSDictionary *_infoDict;
    NSString *_lastConnectedIdentifier;
    NSString *_lastConnectedIP;
    long long _lastConnectedPort;
    NSString *_givenServiceName;
    NSData *_lastConnectedTCPAddress;
    NSData *_lastConnectedUDPAddress;
}

@property(retain, nonatomic) NSData *lastConnectedUDPAddress; // @synthesize lastConnectedUDPAddress=_lastConnectedUDPAddress;
@property(retain, nonatomic) NSData *lastConnectedTCPAddress; // @synthesize lastConnectedTCPAddress=_lastConnectedTCPAddress;
@property(retain, nonatomic) NSString *givenServiceName; // @synthesize givenServiceName=_givenServiceName;
@property(nonatomic) long long lastConnectedPort; // @synthesize lastConnectedPort=_lastConnectedPort;
@property(copy, nonatomic) NSString *lastConnectedIP; // @synthesize lastConnectedIP=_lastConnectedIP;
@property(copy, nonatomic) NSString *lastConnectedIdentifier; // @synthesize lastConnectedIdentifier=_lastConnectedIdentifier;
@property(retain, nonatomic) NSDictionary *infoDict; // @synthesize infoDict=_infoDict;
@property(readonly) BOOL currentlyConnected; // @synthesize currentlyConnected=_currentlyConnected;
@property(retain, nonatomic) NSMutableArray *trustedSockets; // @synthesize trustedSockets=_trustedSockets;
@property(retain, nonatomic) NSMutableArray *trustedAddresses; // @synthesize trustedAddresses=_trustedAddresses;
@property(retain, nonatomic) NSMutableArray *availableNetServices; // @synthesize availableNetServices=_availableNetServices;
@property(copy, nonatomic) NSString *lastConnectedUUID; // @synthesize lastConnectedUUID=_lastConnectedUUID;
@property(retain, nonatomic) NSMutableArray *udpServerAddresses; // @synthesize udpServerAddresses=_udpServerAddresses;
@property(retain, nonatomic) NSMutableArray *serverAddresses; // @synthesize serverAddresses=_serverAddresses;
@property(retain, nonatomic) NSMutableArray *connectedSockets; // @synthesize connectedSockets=_connectedSockets;
@property(retain, nonatomic) NSNetServiceBrowser *netServiceBrowser; // @synthesize netServiceBrowser=_netServiceBrowser;
@property(retain, nonatomic) NSNetService *netService; // @synthesize netService=_netService;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) GCDAsyncUdpSocket *udpSocket; // @synthesize udpSocket=_udpSocket;
@property(retain, nonatomic) GCDAsyncSocket *asyncSocket; // @synthesize asyncSocket=_asyncSocket;
@property(nonatomic) id <WijournoDelegate> delegate; // @synthesize delegate=_delegate;
@property BOOL isServer; // @synthesize isServer=_isServer;
@property(retain, nonatomic) NSTimer *reconnectTimer; // @synthesize reconnectTimer=_reconnectTimer;
@property(nonatomic) BOOL tryingToReconnect; // @synthesize tryingToReconnect=_tryingToReconnect;
@property(nonatomic) BOOL wasConnected; // @synthesize wasConnected=_wasConnected;
@property(copy, nonatomic) NSString *userPassword; // @synthesize userPassword=_userPassword;
- (void).cxx_destruct;
- (void)dealloc;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2;
- (void)netServiceDidStop:(id)arg1;
- (void)netServiceBrowserWillSearch:(id)arg1;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceBrowserDidStopSearch:(id)arg1;
- (void)netServiceDidResolveAddress:(id)arg1;
- (void)netService:(id)arg1 didUpdateTXTRecordData:(id)arg2;
- (void)connectReally;
- (void)connectWithIP:(id)arg1 andPort:(long long)arg2 andPassword:(id)arg3 andUUID:(id)arg4;
- (void)connectToNextAddress;
- (void)reconnectToLastAddress;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socketDidSecure:(id)arg1;
- (void)disconnectClient;
- (void)reconnectClient;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (void)socket:(id)arg1 didAcceptNewSocket:(id)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (double)socket:(id)arg1 shouldTimeoutReadWithTag:(long long)arg2 elapsed:(double)arg3 bytesDone:(unsigned long long)arg4;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)serverSocket:(id)arg1 didReadCommand:(id)arg2 andDictionary:(id)arg3;
- (void)trustSocket:(id)arg1 withClientDictionary:(id)arg2 saveToCurrentDeviceDictionary:(id)arg3;
- (void)doNotTrustSocket:(id)arg1 withClientDictionary:(id)arg2 saveToCurrentDeviceDictionary:(id)arg3;
- (BOOL)socket:(id)arg1 consumeSimpleData:(id)arg2 withTag:(long long)arg3;
- (void)socket:(id)arg1 didReceiveTrust:(struct __SecTrust *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)sendNewUUID:(id)arg1 toSocket:(id)arg2;
- (void)udpSocket:(id)arg1 didReceiveData:(id)arg2 fromAddress:(id)arg3 withFilterContext:(id)arg4;
- (void)udpSocket:(id)arg1 didNotSendDataWithTag:(long long)arg2 dueToError:(id)arg3;
- (void)udpSocket:(id)arg1 didSendDataWithTag:(long long)arg2;
- (void)udpSocket:(id)arg1 didNotConnect:(id)arg2;
- (void)udpSocket:(id)arg1 didConnectToAddress:(id)arg2;
- (void)udpSocketDidClose:(id)arg1 withError:(id)arg2;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)startTimer;
- (void)closeSocket;
- (void)disconnectAllClients;
- (void)readFrame;
- (void)sendSecureCommand:(id)arg1 dictionary:(id)arg2 toSocket:(id)arg3;
- (void)sendSecureCommand:(id)arg1 dictionary:(id)arg2;
- (void)sendUDPCommand:(id)arg1 withString:(id)arg2;
- (void)sendSecureCommand:(id)arg1 withString:(id)arg2 toSocket:(id)arg3 ignoreSecurity:(BOOL)arg4;
- (void)sendSecureCommand:(id)arg1 withString:(id)arg2;
- (void)publishWithServiceName:(id)arg1 dictionary:(id)arg2;
- (id)getIPWithNSHost;
- (id)getIPAddress:(long long)arg1;
- (id)getIPAddress;
- (void)initClientWithServiceName:(id)arg1 dictionary:(id)arg2;
- (void)startServiceBrowsers;
- (void)tryToReconnect;
- (void)stopReconnect;
- (void)searchAgain;
- (id)init;
- (BOOL)isConnectionToServerEstablished;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

