#pragma once
#include <vector>
struct Node {
    int key;
    Node* left = nullptr;
    Node* right = nullptr;
    int path_length(int key_);
};
