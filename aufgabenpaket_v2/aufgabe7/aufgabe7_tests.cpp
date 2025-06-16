#include "aufgabe7.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Aufgabe 7 – is_sorted_desc") {
    CHECK(is_sorted_desc({5, 4, 3, 2, 1}) == true);
    CHECK(is_sorted_desc({5, 5, 3}) == false);
    CHECK(is_sorted_desc({}) == true);
    CHECK(is_sorted_desc({10}) == true);
    CHECK(is_sorted_desc({9, 7, 8}) == false);
}