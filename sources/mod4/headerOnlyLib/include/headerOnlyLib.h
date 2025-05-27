#pragma once

#include <cstdint>

namespace HeaderOnlyLibrary {
    inline std::int32_t sum(const std::int32_t a, const std::int32_t b) {
        return a + b;
    }

    inline std::int32_t diff(const std::int32_t a, const std::int32_t b) {
        return a - b;
    }
}
