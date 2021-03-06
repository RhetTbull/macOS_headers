//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct SP<ref_counted> {
    struct ref_counted *_field1;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct fcolor {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
};

struct http_connection_handler {
    CDUnknownFunctionPointerType *_field1;
};

struct moving_average<vec2, 5, &vec2::zero> {
    _Bool m_has_enough_samples;
    int m_head;
    struct vec2 m_sum;
    struct vec2 m_samples[5];
};

struct ns_work_queue_runner {
    CDUnknownFunctionPointerType *_field1;
    struct work_queue *_field2;
    id _field3;
    id _field4;
};

struct pair<std::__1::basic_string<char>, std::__1::basic_string<char>>;

struct px_backing_store_t;

struct px_drag_source {
    CDUnknownFunctionPointerType *_field1;
};

struct px_mapping_t {
    struct px_mapping_t *_field1;
    struct px_mapping_t *_field2;
    struct px_mapping_t *_field3;
    struct px_mapping_t *_field4;
    struct px_mapping_t *_field5;
    struct px_backing_store_t *_field6;
    struct vec2i _field7;
    struct vec2i _field8;
    struct vec2i _field9;
    int _field10;
};

struct px_tracking_rect_t;

struct px_window_event_handler;

struct px_window_t {
    id _field1;
    struct px_window_event_handler *_field2;
    _Bool _field3;
    _Bool _field4;
    _Bool _field5;
    _Bool _field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field7;
    struct vec2 _field8;
    struct vec2 _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    struct vector<px_tracking_rect_t, std::__1::allocator<px_tracking_rect_t>> _field13;
    _Bool _field14;
    struct title_data _field15;
    id _field16;
    id _field17;
    struct vector<rect, std::__1::allocator<rect>> _field18;
    struct px_window_t *_field19;
    struct px_mapping_t _field20;
    struct SP<ref_counted> _field21;
    struct vector<NSButton *, std::__1::allocator<NSButton *>> _field22;
    struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>> _field23;
    id _field24;
};

struct rect;

struct ref_counted;

struct string_buffer {
    unsigned long long _field1;
    unsigned long long _field2;
    char *_field3;
    char _field4[512];
};

struct title_data {
    struct string_buffer _field1;
    struct string_buffer _field2;
    struct string_buffer _field3;
    struct string_buffer _field4;
    unsigned int _field5;
    _Bool _field6;
    int _field7;
    float _field8;
    struct fcolor _field9;
};

struct vec2 {
    double x;
    double y;
};

struct vec2i {
    int _field1;
    int _field2;
};

struct vector<NSButton *, std::__1::allocator<NSButton *>> {
    id *_field1;
    id *_field2;
    struct __compressed_pair<NSButton **, std::__1::allocator<NSButton *>> {
        id *_field1;
    } _field3;
};

struct vector<px_tracking_rect_t, std::__1::allocator<px_tracking_rect_t>> {
    struct px_tracking_rect_t *_field1;
    struct px_tracking_rect_t *_field2;
    struct __compressed_pair<px_tracking_rect_t *, std::__1::allocator<px_tracking_rect_t>> {
        struct px_tracking_rect_t *_field1;
    } _field3;
};

struct vector<rect, std::__1::allocator<rect>> {
    struct rect *_field1;
    struct rect *_field2;
    struct __compressed_pair<rect *, std::__1::allocator<rect>> {
        struct rect *_field1;
    } _field3;
};

struct vector<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
    struct pair<std::__1::basic_string<char>, std::__1::basic_string<char>> *_field1;
    struct pair<std::__1::basic_string<char>, std::__1::basic_string<char>> *_field2;
    struct __compressed_pair<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>*, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::basic_string<char>>>> {
        struct pair<std::__1::basic_string<char>, std::__1::basic_string<char>> *_field1;
    } _field3;
};

struct work_queue;

