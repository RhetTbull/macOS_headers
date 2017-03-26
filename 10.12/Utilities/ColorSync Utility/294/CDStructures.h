//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGColorCodeFragment {
    unsigned int _field1;
    struct CGMD5Digest _field2;
    unsigned long long _field3;
    union {
        void *_field1;
        struct CGColorCodeFragmentLookupTexture _field2;
        struct CGColorCodeFragmentParametric *_field3;
    } _field4;
};

struct CGColorCodeFragmentLookupTexture {
    int _field1;
    unsigned long long _field2;
    void *_field3;
};

struct CGColorCodeFragmentParametric;

struct CGMD5Digest {
    unsigned char _field1[16];
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

struct CSU3Color {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct CSULabColor {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct CSURGBColor {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct CSUXYZColor {
    unsigned short _field1;
    unsigned short _field2;
    unsigned short _field3;
};

struct ColorSyncFixedXYColor {
    int x;
    int y;
};

struct ColorSyncMCLUT {
    unsigned char _field1[16];
    unsigned char _field2;
    unsigned char _field3[3];
    unsigned char _field4[1];
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char digest[16];
} CDStruct_a7139fa6;

typedef struct {
    int X;
    int Y;
    int Z;
} CDStruct_c62ef2c1;

#pragma mark Named Unions

union CSUColor {
    struct CSUXYZColor _field1;
    struct CSULabColor _field2;
    struct CSURGBColor _field3;
    struct CSU3Color _field4;
};

