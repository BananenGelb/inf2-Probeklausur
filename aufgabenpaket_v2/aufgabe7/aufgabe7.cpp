#include "aufgabe7.h"

// Aufgabe 7:
// Prüfe, ob ein Vektor in absteigender Reihenfolge sortiert ist.
// Rückgabe: true, wenn absteigend sortiert, sonst false.

bool is_sorted_desc(const std::vector<int>& v)
{
    // TODO: implementieren
    for (int i = 0; i+1<v.size(); i++){
        if (v[i]<v[i+1]){
            return false;
        }
    }
    return true;
    
}
