#include "aufgabe11.h"

// Aufgabe 11:
// Finde den Knoten mit dem größten Wert im Binärbaum ab `this`.

Node* Node::max_node()
{
    // TODO
   Node* max = this;
    if (left) {
        Node* left_max = left->max_node();
        if (left_max->value > max->value) {
            max = left_max;
        }
    }
    if (right) {
        Node* right_max = right->max_node();
        if (right_max->value > max->value) {
            max = right_max;
        }
    }
    return max;
}
