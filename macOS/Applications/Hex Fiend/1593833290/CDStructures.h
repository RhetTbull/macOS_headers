//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

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

struct Tcl_Interp {
    char *_field1;
    CDUnknownFunctionPointerType _field2;
    int _field3;
};

struct Tcl_Obj {
    int _field1;
    char *_field2;
    int _field3;
    struct Tcl_ObjType *_field4;
    union {
        long long _field1;
        double _field2;
        void *_field3;
        long long _field4;
        struct {
            void *_field1;
            void *_field2;
        } _field5;
        struct {
            void *_field1;
            unsigned long long _field2;
        } _field6;
    } _field5;
};

struct Tcl_ObjType;

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    long double _field1;
    long double _field2;
} CDStruct_4817042b;

typedef struct {
    unsigned long long location;
    unsigned long long length;
} CDStruct_91ee6ea3;

