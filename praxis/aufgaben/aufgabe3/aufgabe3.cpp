/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe3.h"

// Liefert einen Vektor mit den Werten der Liste, beginnend mit `this`.
// Falls `this` ein leeres Element ist, wird ein leerer Vektor geliefert.
std::vector<int> Element::values()
{
    // TODO
    std::vector<int> End_Vektor = {};
    Element* current = this;
    while(current != nullptr && !current-> is_empty()){
        End_Vektor.push_back(current ->value);
        current = current ->next;
    }
    return End_Vektor;
}
