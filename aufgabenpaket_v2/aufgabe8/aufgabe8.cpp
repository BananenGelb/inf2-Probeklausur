#include "aufgabe8.h"

// Aufgabe 8:
// Berechne die Summe aller Werte in einer verketteten Liste beginnend bei `this`.

int Node::sum()
{
    // TODO
    int result = value;
    Node* current = next;
    while(current != nullptr){
        result += current-> value;
        current = current->next;
    }
    return result;
}
