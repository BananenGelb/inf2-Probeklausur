#include "aufgabe8.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Aufgabe 8 – sum") {
    Node a{1}, b{2}, c{3};
    a.next = &b;
    b.next = &c;
    CHECK(a.sum() == 6);
    CHECK(b.sum() == 5);
    CHECK(c.sum() == 3);
    Node empty{};
    CHECK(empty.sum() == 0);
}