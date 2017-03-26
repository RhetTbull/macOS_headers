//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPathElement {
    int _field1;
    struct CGPoint *_field2;
};

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

struct CVSMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct NSEdgeInsets {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
};

struct PVGLBezierGroup {
    struct PVGLBezierPath *_field1;
    unsigned int _field2;
};

struct PVGLBezierPath;

struct TRLinkedPoint {
    struct CGPoint _field1;
    char _field2;
    struct TRLinkedPoint *_field3;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct potrace_bitmap_s {
    int _field1;
    int _field2;
    int _field3;
    unsigned long long *_field4;
};

struct potrace_curve_s {
    int _field1;
    int *_field2;
    struct potrace_dpoint_s (*_field3)[3];
};

struct potrace_dpoint_s;

struct potrace_param_s {
    int _field1;
    int _field2;
    double _field3;
    int _field4;
    double _field5;
    struct potrace_progress_s _field6;
};

struct potrace_path_s {
    int _field1;
    int _field2;
    struct potrace_curve_s _field3;
    struct potrace_path_s *_field4;
    struct potrace_path_s *_field5;
    struct potrace_path_s *_field6;
    struct potrace_privpath_s *_field7;
};

struct potrace_privpath_s;

struct potrace_progress_s {
    CDUnknownFunctionPointerType _field1;
    void *_field2;
    double _field3;
    double _field4;
    double _field5;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int seedColor;
    long long tolerance;
} CDStruct_388a999f;

typedef struct {
    unsigned int *_field1;
    long long _field2;
    long long _field3;
    long long _field4;
} CDStruct_056e8d52;

typedef struct {
    char *_field1;
    long long _field2;
    long long _field3;
    long long _field4;
} CDStruct_8aadf14b;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    unsigned int _field1;
    int _field2;
    long long _field3;
    unsigned long long _field4;
    double _field5;
    long long _field6;
    struct CVSMPTETime _field7;
    unsigned long long _field8;
    unsigned long long _field9;
} CDStruct_e50ab651;

