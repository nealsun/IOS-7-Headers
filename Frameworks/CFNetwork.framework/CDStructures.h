/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct ClassicConnectionSession {
    void **_field1;
    void **_field2;
    struct _CFURLSessionConfiguration *_field3;
    struct XCookieStorage *_field4;
    int _field5;
    int _field6;
    id _field7;
    id _field8;
    void _field9;
    id _field10;
    struct URLProtocolRegistry *_field11;
    struct __CFSet *_field12;
    struct ClassicConnectionSession *_field13;
    struct RetainableTypedDict<const CoreSchedulingSet *, HTTPConnectionCache *> *_field14;
};

struct RetainableTypedDict<const CoreSchedulingSet *, HTTPConnectionCache *>;

struct URLProtocolRegistry;

struct XCookieStorage;

struct _CFURLSessionConfiguration;

struct stat {
    int st_dev;
    unsigned short st_mode;
    unsigned short st_nlink;
    unsigned long long st_ino;
    unsigned int st_uid;
    unsigned int st_gid;
    int st_rdev;
    struct timespec st_atimespec;
    struct timespec st_mtimespec;
    struct timespec st_ctimespec;
    struct timespec st_birthtimespec;
    long long st_size;
    long long st_blocks;
    int st_blksize;
    unsigned int st_flags;
    unsigned int st_gen;
    int st_lspare;
    long long st_qspare[2];
};

struct timespec {
    int tv_sec;
    long tv_nsec;
};

