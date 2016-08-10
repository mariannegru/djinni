// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from multiple_inheritance.djinni

#pragma once

#include <string>

namespace testsuite {

/** Used for ObjC multiple inheritance tests */
class FirstListener {
public:
    virtual ~FirstListener() {}

    /**
     * Defines the name of the JNI C++ proxy class. Used to convert a
     * C++ implemented object to a Java object when the type of the object being
     * converted is unknown to the JniInterface (see djinni_support.hpp).
     * 
     * The proxy class name is only used for converting Djinni interfaces that
     * are implemented in C++. Java implemented interfaces are converted differently.
     * However, the C++ class of an interface implemented in Java must still have a
     * jniProxyClassName method in order for Djinni's JniInterface::fromCpp method to compile.
     * 
     * @return The name of the class's associated JNI proxy class.
     * 
     * @see JniInterface in djinni_support.hpp
     */
    virtual const std::string jniProxyClassName() { return nullptr; }

    /**
     * Defines the name of the Objective-C type for the class. Used to convert a
     * C++ object to an Objective-C object when the type of the object being
     * converted is unknown to the C++ wrapper cache (see DJICppWrapperCache+Private.hpp).
     * 
     * @return The name of the Objective C type associated with the class.
     * 
     * @see get_cpp_proxy function in DJICppWrapperCache+Private.hpp
     */
    virtual const std::string objcTypeName() { return "DBFirstListener"; }

    virtual void first() = 0;
};

}  // namespace testsuite
