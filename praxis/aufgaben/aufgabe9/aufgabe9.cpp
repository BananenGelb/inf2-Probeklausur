#include "aufgabe9.h"

// Aufgabe 9:
// Erzeuge einen Vektor der Inorder-Traversierung eines Binärbaums ab `this`.

std::vector<int> Node::to_vector_inorder()
{
    // TODO

      std::vector<int> result;
    if (left) {
        std::vector<int> left_vec = left->to_vector_inorder();
        result.insert(result.end(), left_vec.begin(), left_vec.end());
    }
    result.push_back(value);
    if (right) {
        std::vector<int> right_vec = right->to_vector_inorder();
        result.insert(result.end(), right_vec.begin(), right_vec.end());
    }
    return result;
}
