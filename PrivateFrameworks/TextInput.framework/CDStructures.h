/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    float _field1;
    float _field2;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct _ShortRect {
    short _field1;
    short _field2;
    short _field3;
    short _field4;
};

struct vector<CGPoint, std::__1::allocator<CGPoint>>;

struct vector<std::__1::vector<CGPoint, std::__1::allocator<CGPoint>>, std::__1::allocator<std::__1::vector<CGPoint, std::__1::allocator<CGPoint>>>> {
    struct vector<CGPoint, std::__1::allocator<CGPoint>> *__begin_;
    struct vector<CGPoint, std::__1::allocator<CGPoint>> *__end_;
    struct __compressed_pair<std::__1::vector<CGPoint, std::__1::allocator<CGPoint>>*, std::__1::allocator<std::__1::vector<CGPoint, std::__1::allocator<CGPoint>>>> {
        struct vector<CGPoint, std::__1::allocator<CGPoint>> *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    char _field3;
    char _field4;
    unsigned long long _field5;
    int _field6;
} CDStruct_59875e80;

typedef struct {
    id _field1;
    id _field2;
    int _field3;
    id _field4;
    id _field5;
    int _field6;
} CDStruct_982099be;

