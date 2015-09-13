// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from client_interface.djinni

#pragma once

#include "client_interface.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeClientInterface final : ::djinni::JniInterface<::testsuite::ClientInterface, NativeClientInterface> {
public:
    using CppType = std::shared_ptr<::testsuite::ClientInterface>;
    using JniType = jobject;

    using Boxed = NativeClientInterface;

    ~NativeClientInterface();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeClientInterface>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return {jniEnv, ::djinni::JniClass<NativeClientInterface>::get()._toJava(jniEnv, c)}; }

private:
    NativeClientInterface();
    friend ::djinni::JniClass<NativeClientInterface>;
    friend ::djinni::JniInterface<::testsuite::ClientInterface, NativeClientInterface>;

    class JavaProxy final : ::djinni::JavaProxyCacheEntry, public ::testsuite::ClientInterface
    {
    public:
        JavaProxy(JniType j);
        ~JavaProxy();

        ::testsuite::ClientReturnedRecord get_record(int64_t record_id, const std::string & utf8string, const std::experimental::optional<std::string> & misc) override;
        double identifier_check(const std::vector<uint8_t> & data, int32_t r, int64_t jret) override;
        std::string return_str() override;

    private:
        using ::djinni::JavaProxyCacheEntry::getGlobalRef;
        friend ::djinni::JniInterface<::testsuite::ClientInterface, ::djinni_generated::NativeClientInterface>;
        friend ::djinni::JavaProxyCache<JavaProxy>;
    };

    const ::djinni::GlobalRef<jclass> clazz { ::djinni::jniFindClass("com/dropbox/djinni/test/ClientInterface") };
    const jmethodID method_getRecord { ::djinni::jniGetMethodID(clazz.get(), "getRecord", "(JLjava/lang/String;Ljava/lang/String;)Lcom/dropbox/djinni/test/ClientReturnedRecord;") };
    const jmethodID method_identifierCheck { ::djinni::jniGetMethodID(clazz.get(), "identifierCheck", "([BIJ)D") };
    const jmethodID method_returnStr { ::djinni::jniGetMethodID(clazz.get(), "returnStr", "()Ljava/lang/String;") };
};

}  // namespace djinni_generated
