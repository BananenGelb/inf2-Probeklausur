#include "aufgabe12.h"

// Aufgabe 12:
// Gib die Pfadlänge vom aktuellen Knoten zum gesuchten Schlüssel zurück.
// Gib -1 zurück, wenn der Schlüssel nicht vorhanden ist.

int Node::path_length(int key_)
{
    // TODO
     if (value == key_) {
        return 0;
    }
    if (left) {
        int left_len = left->path_length(key_);
        if (left_len != -1) {
            return 1 + left_len;
        }
    }
    if (right) {
        int right_len = right->path_length(key_);
        if (right_len != -1) {
            return 1 + right_len;
        }
    }
    return -1;
}
