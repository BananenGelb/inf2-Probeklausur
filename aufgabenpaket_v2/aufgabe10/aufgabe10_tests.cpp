#include "aufgabe10.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Aufgabe 10 – same_elements_with_counts") {
    CHECK(same_elements_with_counts({1, 2, 2}, {2, 1, 2}) == true);
    CHECK(same_elements_with_counts({1, 2, 2}, {2, 1}) == false);
    CHECK(same_elements_with_counts({}, {}) == true);
    CHECK(same_elements_with_counts({1}, {1}) == true);
    CHECK(same_elements_with_counts({1}, {2}) == false);
}