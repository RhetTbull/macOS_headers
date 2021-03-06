//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface BilateralGridHash : NSObject
{
    int _n_dims;
    int _width;
    int _height;
    int _sigma_s;
    int _sigma_r_luma;
    int _sigma_r_chroma;
    unsigned int _hash_table_size;
    struct BGHashMapContext *_hash_map;
    struct {
        union {
            unsigned long long _field1;
            unsigned char _field2[8];
        } _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
    } *_hash_table;
    unsigned int *_hash_matrix_data;
    unsigned int *_blur_indices;
    unsigned int *_coord_indices;
    unsigned int *_coord_table;
    unsigned int *_coord_indices_off;
    unsigned int *_interp_indices;
    unsigned int *_interp_table;
    char *_interp_pad;
}

- (_Bool)_addHashKeyAtX:(int)arg1 Y:(int)arg2 key:(unsigned long long)arg3;
- (void)_hashMapAddKey:(unsigned long long)arg1 andValue:(unsigned int)arg2;
- (_Bool)_hashMapFindKey:(unsigned long long)arg1 to:(unsigned int *)arg2;
- (void)_computeInterpIndices;
- (void)_computeCoordIndices;
- (void)_computeBlurIndices;
- (void)_computeBilateralSpace:(struct __CVBuffer *)arg1 sigma_s:(int)arg2 sigma_r_luma:(int)arg3 sigma_r_chroma:(int)arg4;
- (const char *)interp_pad;
- (const unsigned int *)interp_table;
- (const unsigned int *)interp_indices;
- (const unsigned int *)coord_table;
- (const unsigned int *)coord_indices;
- (const unsigned int *)blur_table;
- (const unsigned int *)hash_matrix;
- (const void *)hash_table;
- (const unsigned int *)blur_indices:(int)arg1 n_blur_indices:(int *)arg2;
- (void)blur_n:(float *)arg1;
- (void)blur_ones:(float *)arg1;
- (void)splat_ones:(float *)arg1;
- (void)normalize_blur:(const float *)arg1 pout:(float *)arg2;
- (void)normalize:(const float *)arg1 pout:(float *)arg2;
- (void)blur:(const float *)arg1 pout:(float *)arg2;
- (void)slice_trilinear:(struct __CVBuffer *)arg1 pin:(const float *)arg2 pout:(struct __CVBuffer *)arg3;
- (void)slice:(const float *)arg1 outPixelBuffer:(struct __CVBuffer *)arg2;
- (void)splat_w_mul_x:(struct __CVBuffer *)arg1 inPixelBuffer:(struct __CVBuffer *)arg2 pout:(float *)arg3;
- (void)splat:(struct __CVBuffer *)arg1 pout:(float *)arg2;
- (void)create:(struct __CVBuffer *)arg1 sigma_s:(int)arg2 sigma_r_luma:(int)arg3 sigma_r_chroma:(int)arg4;
- (void)clear;
- (void)dealloc;
- (id)initWithWidth:(int)arg1 height:(int)arg2 maxHashTableSize:(unsigned long long)arg3;
- (int)sigma_r_chroma;
- (int)sigma_r_luma;
- (int)sigma_s;
- (int)height;
- (int)width;
- (int)countDims;
- (int)countVertices;

@end

