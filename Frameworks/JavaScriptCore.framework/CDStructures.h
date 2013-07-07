/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    float _field1;
    float _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    float _field1;
    float _field2;
};

struct CallbackData {
    struct CallbackData *_field1;
    id _field2;
    id _field3;
    struct OpaqueJSValue *_field4;
    id _field5;
    unsigned int _field6;
    struct OpaqueJSValue **_field7;
    id _field8;
};

struct HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticFunctionEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl>>, WTF::HashTraits<WTF::OwnPtr<StaticFunctionEntry>>>;

struct HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticValueEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl>>, WTF::HashTraits<WTF::OwnPtr<StaticValueEntry>>>;

struct HashTable<id, WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject>>>, WTF::PtrHash<id>, WTF::HashMapValueTraits<WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject>>>, WTF::HashTraits<id>> {
    struct KeyValuePair<id, JSC::Weak<JSC::JSObject>> *m_table;
    int m_tableSize;
    int m_tableSizeMask;
    int m_keyCount;
    int m_deletedCount;
};

struct JSValue;

struct KeyValuePair<id, JSC::Weak<JSC::JSObject>>;

struct OpaqueJSClass {
    int _field1;
    struct OpaqueJSClass *_field2;
    struct OpaqueJSClass *_field3;
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
    struct String _field15;
    struct OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticValueEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl>>, WTF::HashTraits<WTF::OwnPtr<StaticValueEntry>>>> _field16;
    struct OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticFunctionEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl>>, WTF::HashTraits<WTF::OwnPtr<StaticFunctionEntry>>>> _field17;
};

struct OpaqueJSValue;

struct OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticFunctionEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl>>, WTF::HashTraits<WTF::OwnPtr<StaticFunctionEntry>>>> {
    struct HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticFunctionEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl>>, WTF::HashTraits<WTF::OwnPtr<StaticFunctionEntry>>> *_field1;
};

struct OwnPtr<WTF::HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticValueEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl>>, WTF::HashTraits<WTF::OwnPtr<StaticValueEntry>>>> {
    struct HashMap<WTF::RefPtr<WTF::StringImpl>, WTF::OwnPtr<StaticValueEntry>, WTF::StringHash, WTF::HashTraits<WTF::RefPtr<WTF::StringImpl>>, WTF::HashTraits<WTF::OwnPtr<StaticValueEntry>>> *_field1;
};

struct RefPtr<WTF::StringImpl> {
    struct StringImpl *_field1;
};

struct String {
    struct RefPtr<WTF::StringImpl> _field1;
};

struct StringImpl;

struct Strong<JSC::JSObject> {
    struct JSValue *m_slot;
};

struct Weak<JSC::JSObject> {
    struct WeakImpl *m_impl;
};

struct WeakGCMap<id, JSC::JSObject, WTF::PtrHash<id>, WTF::HashTraits<id>> {
    struct HashTable<id, WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<id, JSC::Weak<JSC::JSObject>>>, WTF::PtrHash<id>, WTF::HashMapValueTraits<WTF::HashTraits<id>, WTF::HashTraits<JSC::Weak<JSC::JSObject>>>, WTF::HashTraits<id>> m_impl;
    int m_gcThreshold;
};

struct WeakImpl;

struct _NSRange {
    unsigned int _field1;
    unsigned int _field2;
};

