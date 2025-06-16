#include "aufgabe9.h"
#include <catch2/catch_test_macros.hpp>

TEST_CASE("Aufgabe 9 – to_vector_inorder") {
    Node a{1}, b{2}, c{3};
    b.left = &a;
    b.right = &c;
    CHECK(b.to_vector_inorder() == std::vector<int>{1, 2, 3});
    CHECK(a.to_vector_inorder() == std::vector<int>{1});
}