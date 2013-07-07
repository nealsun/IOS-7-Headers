/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct AirPlayPairingSessionPrivate;

struct AirPlayRTPBuffer;

struct AirPlayReceiverServerPrivate {
    struct __CFRuntimeBase _field1;
    void *_field2;
    id _field3;
    struct _DNSServiceRef_t *_field4;
    struct _DNSServiceRef_t *_field5;
    struct MediaControlServerPrivate *_field6;
    struct AirPlayScreenServerPrivate *_field7;
    unsigned char _field8;
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    id _field12;
    unsigned char _field13;
    unsigned char _field14;
    unsigned char _field15[6];
    char _field16[64];
    int _field17;
    unsigned char _field18;
    unsigned char _field19;
    unsigned char _field20;
    unsigned char _field21;
    char _field22[64];
    unsigned char _field23;
    int _field24;
    unsigned char _field25;
    unsigned char _field26;
};

struct AirPlayReceiverSessionPrivate {
    struct __CFRuntimeBase _field1;
    struct AirPlayReceiverServerPrivate *_field2;
    void *_field3;
    struct _opaque_pthread_mutex_t _field4;
    struct _opaque_pthread_mutex_t *_field5;
    id _field6;
    unsigned int _field7;
    CDUnion_4a4a8072 _field8;
    unsigned char _field9[16];
    unsigned long long _field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    unsigned int _field14;
    struct {
        struct _CCCryptor *_field1;
        unsigned char _field2[16];
    } _field15;
    CDStruct_183601bc *_field16;
    struct AirTunesSource _field17;
    unsigned char _field18;
    unsigned char _field19;
    unsigned char _field20;
    unsigned int _field21;
    char *_field22;
    unsigned int _field23;
    char *_field24;
    unsigned int _field25;
    char *_field26;
    unsigned int _field27;
    int _field28;
    unsigned char _field29;
    unsigned char _field30;
    struct HTTPClientPrivate *_field31;
    int _field32;
    int _field33;
    CDStruct_3b7ab885 _field34;
    CDStruct_3b7ab885 _field35;
    int _field36;
    int _field37;
    int _field38;
    struct _opaque_pthread_t *_field39;
    struct _opaque_pthread_t **_field40;
    int _field41;
    unsigned char _field42;
    unsigned short _field43;
    unsigned short _field44[512];
    int _field45;
    int _field46;
    int _field47;
    CDUnion_4a4a8072 _field48;
    unsigned int _field49;
    unsigned char _field50;
    int _field51;
    int _field52;
    int _field53;
    CDUnion_4a4a8072 _field54;
    unsigned int _field55;
    unsigned char _field56;
    int _field57;
    struct _opaque_pthread_t *_field58;
    struct _opaque_pthread_t **_field59;
    unsigned int _field60;
    unsigned int _field61;
    char *_field62;
    struct AirTunesBufferNode *_field63;
    struct AirTunesBufferNode _field64;
    struct AirTunesBufferNode *_field65;
    struct AirTunesBufferNode *_field66;
    unsigned int _field67;
    unsigned int _field68;
    unsigned int _field69;
    unsigned int _field70;
    unsigned int _field71;
    unsigned int _field72;
    unsigned int _field73;
    unsigned char _field74;
    unsigned long long _field75;
    unsigned long long _field76;
    unsigned int _field77;
    unsigned int _field78;
    unsigned short _field79;
    unsigned int _field80;
    unsigned char _field81;
    unsigned int _field82;
    unsigned short _field83;
    struct OpaqueAudioConverter *_field84;
    char *_field85;
    char *_field86;
    struct AudioStreamPacketDescription _field87;
    unsigned int _field88;
    unsigned char _field89;
    int _field90;
    int _field91;
    int _field92;
    int _field93;
    unsigned long long _field94;
    unsigned long long _field95;
    struct __CFDictionary *_field96;
    unsigned char _field97;
    unsigned char _field98;
    unsigned int _field99;
    unsigned char _field100;
    unsigned char _field101;
    unsigned char _field102;
    unsigned int _field103;
    unsigned int _field104;
    unsigned int _field105;
    unsigned char _field106;
    unsigned int _field107;
    unsigned int _field108;
    unsigned int _field109;
    unsigned char _field110;
    int _field111;
    int _field112;
    struct AirPlayRTPBuffer *_field113;
    struct AirPlayRTPBuffer *_field114;
    unsigned char _field115;
    unsigned char _field116;
    struct DashboardClientPrivate *_field117;
    unsigned char _field118;
    struct {
        unsigned char _field1;
        unsigned char _field2;
        unsigned char _field3;
        unsigned char _field4;
        unsigned char _field5;
        unsigned char _field6;
        unsigned char _field7;
        unsigned char _field8;
        unsigned char _field9;
        unsigned char _field10;
        unsigned char _field11;
        unsigned char _field12;
        unsigned char _field13;
        unsigned char _field14;
        unsigned char _field15;
        unsigned char _field16;
        unsigned int _field17;
        unsigned int _field18;
        unsigned short _field19;
        short _field20;
        short _field21;
        unsigned short _field22;
        unsigned short _field23;
        unsigned short _field24;
        unsigned short _field25;
        unsigned char _field26[6];
        unsigned char _field27[6];
        char _field28;
        char _field29;
        char _field30;
        char _field31;
        unsigned char _field32;
        unsigned char _field33;
        char _field34[16];
        unsigned char _field35;
        unsigned char _field36;
        unsigned char _field37;
        unsigned char _field38[1];
    } _field119;
    unsigned long long _field120;
    unsigned long long _field121;
    unsigned int _field122;
    unsigned int _field123;
    unsigned int _field124;
};

struct AirPlayScreenServerPrivate;

struct AirTunesBufferNode {
    struct AirTunesBufferNode *_field1;
    struct AirTunesBufferNode *_field2;
    CDStruct_183601bc *_field3;
    char *_field4;
    unsigned int _field5;
    char *_field6;
    unsigned int _field7;
};

struct AirTunesRetransmitNode;

struct AirTunesSource {
    unsigned int _field1;
    unsigned int _field2;
    unsigned long long _field3;
    unsigned long long _field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    unsigned long long _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    double _field15;
    double _field16;
    double _field17;
    double _field18;
    int _field19;
    unsigned int _field20;
    double _field21[3];
    unsigned int _field22;
    double _field23;
    double _field24;
    double _field25;
    double _field26;
    unsigned char _field27;
    unsigned char _field28;
    unsigned char _field29;
    unsigned int _field30;
    unsigned int _field31;
    unsigned int _field32;
    unsigned int _field33;
    unsigned int _field34;
    unsigned int _field35;
    unsigned char _field36;
    unsigned int _field37;
    unsigned int _field38;
    unsigned int _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned char _field43;
    unsigned char _field44;
    struct {
        double _field1;
        double _field2;
        double _field3;
        double _field4;
        double _field5;
        double _field6;
        double _field7;
        double _field8;
    } _field45;
    int _field46;
    unsigned int _field47;
    unsigned int _field48;
    struct AirTunesRetransmitNode *_field49;
    struct AirTunesRetransmitNode *_field50;
    struct AirTunesRetransmitNode *_field51;
    unsigned char _field52;
    long long _field53;
    long long _field54;
    long long _field55;
    long long _field56;
    long long _field57;
    unsigned int _field58;
    unsigned int _field59;
    unsigned int _field60;
    unsigned int _field61;
    unsigned long long _field62;
    unsigned long long _field63;
    unsigned long long _field64;
    unsigned long long _field65;
    unsigned long long _field66;
    unsigned int _field67;
    unsigned int _field68;
};

struct AudioStreamPacketDescription {
    long long _field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct CGAffineTransform {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
};

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGSize {
    float width;
    float height;
};

struct DashboardClientPrivate;

struct FPSAPContextOpaque_;

struct FairPlayHWInfo_ {
    unsigned int _field1;
    unsigned char _field2[20];
};

struct HTTPClientPrivate;

struct HTTPServer {
    struct {
        unsigned int _field1;
        unsigned int _field2;
        void *_field3;
        void *_field4;
        void *_field5;
        void *_field6;
        void *_field7;
        void *_field8;
        void *_field9;
        void *_field10;
        int _field11;
        int _field12;
        int _field13;
        void *_field14;
    } _field1;
    unsigned char _field2;
    id _field3;
    id _field4;
    int _field5;
    CDStruct_1bd3d320 _field6;
    CDStruct_1bd3d320 _field7;
    struct HTTPServerConnection *_field8;
    unsigned int _field9;
    struct LogCategory *_field10;
    struct LogCategory *_field11;
    struct LogCategory *_field12;
};

struct HTTPServerConnection {
    struct HTTPServerConnection *_field1;
    struct HTTPServer *_field2;
    unsigned int _field3;
    unsigned char _field4;
    unsigned char _field5;
    struct NetSocket *_field6;
    CDUnion_4a4a8072 _field7;
    CDUnion_4a4a8072 _field8;
    char _field9[17];
    unsigned int _field10;
    unsigned int _field11;
    unsigned char _field12[6];
    unsigned int _field13;
    unsigned long long _field14;
    unsigned int _field15;
    id _field16;
    id _field17;
    CDStruct_d1f36713 _field18;
    unsigned char _field19[131072];
    unsigned int _field20;
    CDStruct_d1f36713 _field21;
    unsigned char _field22[131072];
    unsigned int _field23;
    struct LogCategory *_field24;
    struct LogCategory *_field25;
};

struct LogCategory;

struct MediaControlServerConnection {
    struct HTTPServerConnection _field1;
    unsigned char _field2[16];
    unsigned long long _field3;
    unsigned char _field4;
    char _field5[128];
    unsigned char _field6[16];
    unsigned char _field7;
    char _field8[16];
    unsigned char _field9;
    unsigned char _field10;
    unsigned char _field11;
    int _field12;
    struct FairPlayHWInfo_ _field13;
    struct FPSAPContextOpaque_ *_field14;
    unsigned long long _field15;
    struct AirPlayPairingSessionPrivate *_field16;
    unsigned char _field17;
    struct __CFDictionary *_field18;
    unsigned char _field19[16];
    double _field20;
    unsigned char _field21;
    unsigned int _field22;
    unsigned int _field23;
    unsigned int _field24;
    unsigned int _field25;
    unsigned int _field26;
    struct __CFString *_field27[5];
    struct __CFData *_field28[5];
    unsigned int _field29;
    unsigned char _field30[16];
    double _field31;
    unsigned char _field32;
    unsigned char _field33[16];
    double _field34;
    unsigned int _field35;
    unsigned int _field36;
    unsigned char _field37;
    id _field38;
    id _field39;
    unsigned int _field40;
    unsigned int _field41;
    unsigned int _field42;
    unsigned char _field43;
    id _field44;
    unsigned long long _field45;
    unsigned char _field46;
    unsigned char _field47;
    unsigned char _field48;
    unsigned char _field49;
};

struct MediaControlServerImp {
    struct HTTPServer _field1;
    struct {
        void *_field1;
        void *_field2;
        void *_field3;
        void *_field4;
        void *_field5;
        void *_field6;
        void *_field7;
        void *_field8;
        void *_field9;
        void *_field10;
        void *_field11;
        void *_field12;
        void *_field13;
        void *_field14;
        void *_field15;
        void *_field16;
        void *_field17;
        void *_field18;
    } _field2;
    unsigned long long _field3;
    unsigned char _field4[6];
    char _field5[16];
    unsigned char _field6;
    unsigned char _field7;
    char *_field8;
    unsigned char _field9;
    unsigned int _field10;
    int _field11;
    unsigned int _field12;
};

struct MediaControlServerPrivate;

struct NetSocket;

struct OpaqueAudioConverter;

struct RTPPacketNode {
    struct RTPPacketNode *_field1;
    struct RTPPacketNode *_field2;
    struct {
        union {
            unsigned int _field1;
            struct {
                struct {
                    unsigned char _field1;
                    unsigned char _field2;
                    unsigned short _field3;
                    unsigned int _field4;
                    unsigned int _field5;
                } _field1;
                unsigned char _field2[1];
            } _field2;
            unsigned char _field3[1472];
        } _field1;
        unsigned int _field2;
        unsigned int _field3;
    } _field3;
    char *_field4;
};

struct _CCCryptor;

struct _DNSServiceRef_t;

struct __CFDictionary;

struct __CFRuntimeBase {
    unsigned int _field1;
    unsigned char _field2[4];
};

struct _opaque_pthread_mutex_t {
    long _field1;
    char _field2[40];
};

struct _opaque_pthread_t;

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

struct sockaddr {
    unsigned char _field1;
    unsigned char _field2;
    char _field3[14];
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

typedef struct CDStruct_183601bc;

typedef struct {
    id _field1;
    int _field2;
    struct HTTPServer *_field3;
} CDStruct_1bd3d320;

typedef struct {
    char _field1[8192];
    unsigned int _field2;
    char *_field3;
    unsigned int _field4;
    char *_field5;
    unsigned int _field6;
    char *_field7;
    unsigned int _field8;
    struct {
        char *_field1;
        unsigned int _field2;
        char *_field3;
        unsigned int _field4;
        char *_field5;
        unsigned int _field6;
        char *_field7;
        unsigned int _field8;
        char *_field9;
        unsigned int _field10;
        char *_field11;
        unsigned int _field12;
        char *_field13;
        unsigned int _field14;
        char *_field15;
        char *_field16;
    } _field9;
    char *_field10;
    unsigned int _field11;
    int _field12;
    char *_field13;
    unsigned int _field14;
    unsigned char _field15;
    unsigned long long _field16;
    unsigned char _field17;
    int _field18;
} CDStruct_d1f36713;

typedef struct {
    struct AirPlayReceiverSessionPrivate *_field1;
    unsigned int _field2;
    char *_field3;
    int _field4;
    int _field5;
    struct _opaque_pthread_t *_field6;
    struct _opaque_pthread_t **_field7;
    struct {
        id _field1;
        struct RTPPacketNode *_field2;
        struct RTPPacketNode *_field3;
        struct RTPPacketNode *_field4;
        struct RTPPacketNode _field5;
        unsigned int _field6;
        unsigned int _field7;
        unsigned int _field8;
        unsigned int _field9;
        unsigned char _field10;
        unsigned char _field11;
        unsigned char _field12;
        unsigned int _field13;
        unsigned int _field14;
        unsigned int _field15;
        unsigned int _field16;
        char *_field17;
    } _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned long long _field13;
    unsigned long long _field14;
    struct {
        unsigned long long _field1;
        unsigned int _field2;
    } _field15[30];
    unsigned int _field16;
    float _field17;
    unsigned int _field18;
    struct {
        char *_field1;
        char *_field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned int _field5;
        unsigned int _field6;
    } _field19;
    CDUnion_4a4a8072 _field20;
    unsigned int _field21;
    unsigned short _field22;
} CDStruct_3b7ab885;

#pragma mark Typedef'd Unions

typedef union {
    struct sockaddr _field1;
    struct sockaddr_in _field2;
    struct sockaddr_in6 _field3;
} CDUnion_4a4a8072;

