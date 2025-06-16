#include "aufgabe10.h"
#include <unordered_map>


// Aufgabe 10:
// Prüfe, ob zwei Vektoren dieselben Elemente mit gleicher Häufigkeit enthalten.

bool same_elements_with_counts(const std::vector<int>& a, const std::vector<int>& b)
{
    // TODO
     if (a.size() != b.size()) return false;

    std::unordered_map<int, int> count_a, count_b;
    for (int x : a) ++count_a[x];
    for (int x : b) ++count_b[x];

    return count_a == count_b;
}
