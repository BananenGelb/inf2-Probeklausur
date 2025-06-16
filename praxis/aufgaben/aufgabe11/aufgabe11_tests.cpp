#include "aufgabe11.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Aufgabe 11 – max_node") {
    Node a{1}, b{3}, c{2};
    b.left = &a;
    b.right = &c;
    CHECK(b.max_node() == &c);
    CHECK(a.max_node() == &a);
}