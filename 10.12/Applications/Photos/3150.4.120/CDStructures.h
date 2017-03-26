//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
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

struct CGVector {
    double dx;
    double dy;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct IPXPrintCaptionSelection {
    char title;
    char description;
    char date;
    char rating;
    char keywords;
    char filename;
    char camera;
    char shutterSpeed;
    char aperture;
    char focalLength;
    char iso;
    char flash;
    long long lastSelectionChecked;
};

struct NSColor {
    Class _field1;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct NSObject {
    Class _field1;
};

struct PFAsyncDispatchMulticaster {
    Class _field1;
};

struct PFDirectMessagingMulticaster {
    Class _field1;
};

struct PFIntPoint_st {
    long long x;
    long long y;
};

struct PFIntRect_st {
    struct PFIntPoint_st origin;
    struct PFIntSize_st size;
};

struct PFIntSize_st {
    unsigned long long width;
    unsigned long long height;
};

struct PFMainThreadAsyncDispatchMulticaster {
    Class _field1;
};

struct PFMainThreadDirectMessagingMulticaster {
    Class _field1;
};

struct PMRect {
    double top;
    double left;
    double bottom;
    double right;
};

struct PUFeedSeparatorMetrics {
    struct CGSize _field1;
    struct NSEdgeInsets _field2;
};

struct PXTileGeometry {
    struct CGRect _field1;
    struct CGPoint _field2;
    struct CGSize _field3;
    struct CGAffineTransform _field4;
    double _field5;
    double _field6;
    char _field7;
    struct CGSize _field8;
    struct CGRect _field9;
    void *_field10;
};

struct PXTileIdentifier {
    unsigned long long _field1;
    unsigned long long _field2[10];
};

struct UXOffset {
    double horizontal;
    double vertical;
};

struct _IPXSignedRange {
    long long location;
    long long length;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _PXLayoutGeometry {
    long long _field1;
    struct CGPoint _field2;
    struct CGSize _field3;
    struct CGAffineTransform _field4;
    float _field5;
    long long _field6;
};

struct _cups_array_s;

struct ppd_attr_s;

struct ppd_const_s;

struct ppd_emul_s;

struct ppd_file_s {
    int _field1;
    int _field2;
    int _field3;
    int _field4;
    int _field5;
    int _field6;
    int _field7;
    int _field8;
    int _field9;
    int _field10;
    char *_field11;
    int _field12;
    struct ppd_emul_s *_field13;
    char *_field14;
    char *_field15;
    char *_field16;
    char *_field17;
    char *_field18;
    char *_field19;
    char *_field20;
    char *_field21;
    char *_field22;
    char *_field23;
    char *_field24;
    int _field25;
    struct ppd_group_s *_field26;
    int _field27;
    struct ppd_size_s *_field28;
    float _field29[2];
    float _field30[2];
    float _field31[4];
    int _field32;
    struct ppd_const_s *_field33;
    int _field34;
    char **_field35;
    int _field36;
    struct ppd_profile_s *_field37;
    int _field38;
    char **_field39;
    int _field40;
    char *_field41;
    char *_field42;
    int _field43;
    int _field44;
    struct ppd_attr_s **_field45;
    struct _cups_array_s *_field46;
    struct _cups_array_s *_field47;
    struct _cups_array_s *_field48;
    struct _cups_array_s *_field49;
    struct _cups_array_s *_field50;
    struct _ppd_cache_s *_field51;
};

struct ppd_group_s;

struct ppd_profile_s;

struct ppd_size_s;

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    unsigned long long _field2;
} CDStruct_4bcfbbae;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    unsigned long long value;
    char isCached;
} CDStruct_4045b0df;

typedef struct {
    unsigned int isCached:1;
    unsigned int value:1;
} CDStruct_081c20b4;

typedef struct {
    double top;
    double leading;
    double bottom;
    double trailing;
} CDStruct_0e3fad5d;

typedef struct {
    double offsetX;
    double offsetY;
    double zoom;
} CDStruct_e8f17287;

typedef struct {
    int _field1;
    int _field2;
    unsigned long long _field3;
    double _field4;
    double _field5;
    double _field6;
    char _field7;
} CDStruct_c9501996;

typedef struct {
    int width;
    int height;
} CDStruct_79c71658;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long itemCount;
    long long userInterfaceLayoutDirection;
    unsigned long long itemPlacement;
} CDStruct_b57a036a;

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    struct CGSize _field4;
    unsigned long long _field5;
    long long _field6;
    long long _field7;
    unsigned long long _field8;
    struct CGSize _field9;
} CDStruct_e40b8f04;

typedef struct {
    long long index;
    struct CGSize imageSize;
    struct CGSize minimumSize;
    char hasCaption;
    char isBatchStart;
} CDStruct_f2186b98;

typedef struct {
    CDStruct_0e3fad5d contentInset;
    struct CGSize headerSize;
    struct CGSize footerSize;
    CDStruct_0e3fad5d columnsAndRowsInset;
    unsigned long long desiredColumnCount;
    unsigned long long desiredRowCount;
    double itemSizeAspectRatio;
    struct CGSize itemSizeAbsoluteOffset;
    struct CGSize itemSizeToGapPercentage;
    char honorsImageAspectRatio;
} CDStruct_65a6d491;

typedef struct {
    CDStruct_0e3fad5d contentInset;
    struct CGSize headerSize;
    struct CGSize footerSize;
    CDStruct_0e3fad5d columnsAndRowsInset;
    struct CGSize itemSize;
    struct CGSize itemSpacing;
    long long columnCount;
    long long rowCount;
    long long maximumHeroCount;
    char allowUnfilledRows;
} CDStruct_5fdb3ec4;

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    CDStruct_79c71658 _field1;
    CDStruct_79c71658 _field2;
} CDStruct_318dd791;

typedef struct {
    struct CLLocationCoordinate2D _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_26e8d939;

typedef struct {
    unsigned long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
    unsigned long long _field5;
    struct CGRect _field6;
    struct CGRect _field7;
} CDStruct_8ffb93dc;

typedef struct {
    CDStruct_318dd791 _field1;
    double _field2;
} CDStruct_609a998d;

typedef struct {
    struct CGRect bounds;
    struct CGRect contentRect;
    struct CGRect columnsAndRowsRect;
    struct CGSize headerSize;
    struct CGSize footerSize;
    struct CGSize itemSize;
    struct CGSize itemGap;
    struct CGSize columnSize;
    struct CGSize rowSize;
    unsigned long long itemCount;
    unsigned long long columnCount;
    unsigned long long rowCount;
} CDStruct_a3bac1f9;

typedef struct {
    struct CGRect bounds;
    struct CGRect contentRect;
    struct CGRect columnsAndRowsRect;
    struct CGSize headerSize;
    struct CGSize footerSize;
    struct CGSize itemSize;
    struct CGSize itemGap;
    struct CGSize columnSize;
    struct CGSize rowSize;
    long long itemCount;
    long long columnCount;
    long long rowCount;
} CDStruct_e29a1851;

typedef struct {
    struct CGRect _field1;
    struct NSEdgeInsets _field2;
    double _field3;
    char _field4;
    double _field5;
    double _field6;
} CDStruct_149c77e6;

typedef struct {
    long long _field1;
    CDStruct_609a998d _field2;
    struct CGRect _field3;
    void *_field4;
} CDStruct_80f56e2a;

// Ambiguous groups
typedef struct {
    unsigned int overviewAction:1;
} CDStruct_86f3d7d2;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    CDStruct_0e3fad5d _field1;
    struct CGSize _field2;
    struct CGSize _field3;
    CDStruct_0e3fad5d _field4;
    struct CGSize _field5;
    struct CGSize _field6;
    long long _field7;
    long long _field8;
    char _field9;
    char _field10;
} CDStruct_27d1796e;

