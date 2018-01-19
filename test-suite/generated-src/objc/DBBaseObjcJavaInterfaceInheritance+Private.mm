// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from interface_inheritance.djinni

#import "DBBaseObjcJavaInterfaceInheritance+Private.h"
#import "DBBaseObjcJavaInterfaceInheritance.h"
#import "DJIMarshal+Private.h"
#import "DJIObjcWrapperCache+Private.h"
#include <stdexcept>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

namespace djinni_generated {

class BaseObjcJavaInterfaceInheritance::ObjcProxy final
: public ::testsuite::BaseObjcJavaInterfaceInheritance
, public ::djinni::ObjcProxyCache::Handle<ObjcType>
{
public:
    using Handle::Handle;

    // BaseObjcJavaInterfaceInheritance methods
    std::string base_method() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [Handle::get() baseMethod];
            return ::djinni::String::toCpp(objcpp_result_);
        }
    }
    std::string override_method() override
    {
        @autoreleasepool {
            auto objcpp_result_ = [Handle::get() overrideMethod];
            return ::djinni::String::toCpp(objcpp_result_);
        }
    }
};

}  // namespace djinni_generated

namespace djinni_generated {

auto BaseObjcJavaInterfaceInheritance::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return ::djinni::get_objc_proxy<ObjcProxy>(objc);
}

auto BaseObjcJavaInterfaceInheritance::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return dynamic_cast<ObjcProxy&>(*cpp).Handle::get();
}

}  // namespace djinni_generated
