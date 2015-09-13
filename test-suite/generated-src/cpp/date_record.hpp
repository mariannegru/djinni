// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from date.djinni

#pragma once

#include <chrono>
#include <utility>

namespace testsuite {

struct DateRecord final {
    std::chrono::system_clock::time_point created_at;

    friend bool operator==(const DateRecord& lhs, const DateRecord& rhs);
    friend bool operator!=(const DateRecord& lhs, const DateRecord& rhs);

    friend bool operator<(const DateRecord& lhs, const DateRecord& rhs);
    friend bool operator>(const DateRecord& lhs, const DateRecord& rhs);

    friend bool operator<=(const DateRecord& lhs, const DateRecord& rhs);
    friend bool operator>=(const DateRecord& lhs, const DateRecord& rhs);

    DateRecord(std::chrono::system_clock::time_point created_at)
    : created_at(std::move(created_at))
    {}
};

}  // namespace testsuite
