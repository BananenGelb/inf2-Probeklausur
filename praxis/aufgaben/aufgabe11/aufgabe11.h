#pragma once
#include <vector>
struct Node {
    int key;
    Node* left = nullptr;
    Node* right = nullptr;
    Node* max_node();
};
