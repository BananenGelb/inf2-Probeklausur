#include "aufgabe12.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Aufgabe 12 – path_length") {
    Node a{1}, b{2}, c{3};
    b.left = &a;
    b.right = &c;
    CHECK(b.path_length(2) == 0);
    CHECK(b.path_length(3) == 1);
    CHECK(b.path_length(1) == 1);
    CHECK(b.path_length(99) == -1);
}