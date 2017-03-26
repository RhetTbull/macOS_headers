//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct Config {
    CDUnknownFunctionPointerType *_vptr$Interface;
    struct SharedObject *m_object;
};

struct Controller {
    CDUnknownFunctionPointerType *_field1;
    struct SharedObject *_field2;
};

struct Device {
    CDUnknownFunctionPointerType *_field1;
    struct SharedObject *_field2;
};

struct Frame {
    CDUnknownFunctionPointerType *_field1;
    struct SharedObject *_field2;
};

struct Gesture {
    CDUnknownFunctionPointerType *_field1;
    struct SharedObject *_field2;
};

struct Hand {
    CDUnknownFunctionPointerType *_field1;
    struct SharedObject *_field2;
};

struct IOGPoint {
    short _field1;
    short _field2;
};

struct IOHIDEventStruct {
    int type;
    unsigned int elementCookie;
    int value;
    struct UnsignedWide timestamp;
    unsigned int longValueSize;
    void *longValue;
};

struct InteractionBox {
    CDUnknownFunctionPointerType *_field1;
    struct SharedObject *_field2;
};

struct Listener {
    CDUnknownFunctionPointerType *_field1;
};

struct MTDeviceInfo {
    unsigned int unk_v0;
    unsigned int unk_k0;
    unsigned int unk_v1;
    unsigned int unk_k1;
    unsigned int unk_v2;
    unsigned int unk_k2;
    unsigned int address;
    unsigned int unk_v3;
    unsigned int family;
    unsigned int bcdver;
    unsigned int rows;
    unsigned int cols;
    unsigned int width;
    unsigned int height;
    unsigned int unk_k3;
    unsigned int unk_k4;
    unsigned int unk_v4;
    unsigned int unk_k5;
};

struct NSDictionary {
    Class _field1;
};

struct Pointable {
    CDUnknownFunctionPointerType *_field1;
    struct SharedObject *_field2;
};

struct ProcessSerialNumber {
    unsigned int highLongOfPSN;
    unsigned int lowLongOfPSN;
};

struct Screen {
    CDUnknownFunctionPointerType *_field1;
    struct SharedObject *_field2;
};

struct SharedObject;

struct UCKeyboardLayout {
    unsigned short _field1;
    unsigned short _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct UCKeyboardTypeHeader _field5[1];
};

struct UCKeyboardTypeHeader {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
};

struct UnsignedWide {
    unsigned int lo;
    unsigned int hi;
};

struct _CMUROptions {
    _Bool _field1;
    _Bool _field2;
};

struct _KeyCombo {
    unsigned long long _field1;
    long long _field2;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct in6_addr {
    union {
        unsigned char _field1[16];
        unsigned short _field2[8];
        unsigned int _field3[4];
    } _field1;
};

struct in_addr {
    unsigned int _field1;
};

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct sockaddr_in6 {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    unsigned int _field4;
    struct in6_addr _field5;
    unsigned int _field6;
};

#pragma mark Typedef'd Structures

typedef struct {
    long long _field1;
    void *_field2;
    CDUnknownFunctionPointerType _field3;
    CDUnknownFunctionPointerType _field4;
    CDUnknownFunctionPointerType _field5;
} CDStruct_e097db04;

typedef struct {
    struct CGPoint _field1;
    double _field2;
    struct CGPoint _field3;
} CDStruct_f73a0172;

