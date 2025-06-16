#pragma once
#include <vector>
struct Node {
    int value = 0;
    Node* left = nullptr;
    Node* right = nullptr;
    std::vector<int> to_vector_inorder();
};
