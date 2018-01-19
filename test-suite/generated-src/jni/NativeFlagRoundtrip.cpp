// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from enum_flags.djinni

#include "NativeFlagRoundtrip.hpp"  // my header
#include "Marshal.hpp"
#include "NativeAccessFlags.hpp"
#include "NativeEmptyFlags.hpp"

namespace djinni_generated {

NativeFlagRoundtrip::NativeFlagRoundtrip() : ::djinni::JniInterface<::testsuite::FlagRoundtrip, NativeFlagRoundtrip>("com/dropbox/djinni/test/FlagRoundtrip$CppProxy") {}

NativeFlagRoundtrip::~NativeFlagRoundtrip() = default;


CJNIEXPORT void JNICALL Java_com_dropbox_djinni_test_FlagRoundtrip_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::testsuite::FlagRoundtrip>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_FlagRoundtrip_roundtripAccess(JNIEnv* jniEnv, jobject /*this*/, jobject j_flag)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::testsuite::FlagRoundtrip::roundtrip_access(::djinni_generated::NativeAccessFlags::toCpp(jniEnv, j_flag));
        return ::djinni::release(::djinni_generated::NativeAccessFlags::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_FlagRoundtrip_roundtripEmpty(JNIEnv* jniEnv, jobject /*this*/, jobject j_flag)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::testsuite::FlagRoundtrip::roundtrip_empty(::djinni_generated::NativeEmptyFlags::toCpp(jniEnv, j_flag));
        return ::djinni::release(::djinni_generated::NativeEmptyFlags::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_FlagRoundtrip_roundtripAccessBoxed(JNIEnv* jniEnv, jobject /*this*/, jobject j_flag)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::testsuite::FlagRoundtrip::roundtrip_access_boxed(::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeAccessFlags>::toCpp(jniEnv, j_flag));
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeAccessFlags>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_com_dropbox_djinni_test_FlagRoundtrip_roundtripEmptyBoxed(JNIEnv* jniEnv, jobject /*this*/, jobject j_flag)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::testsuite::FlagRoundtrip::roundtrip_empty_boxed(::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeEmptyFlags>::toCpp(jniEnv, j_flag));
        return ::djinni::release(::djinni::Optional<std::experimental::optional, ::djinni_generated::NativeEmptyFlags>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated
