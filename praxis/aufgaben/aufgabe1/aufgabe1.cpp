/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe1.h"

// Prüft, ob die Werte in v in absteigender Reihenfolge sortiert sind.
bool is_sorted_ascending(std::vector<int> const& v)
{
    // TODO
    for (int i= 1; i < v.size();i++){
        if (v[i-1]>v[i]){
            return false;
        }
    }
    return true;
}
