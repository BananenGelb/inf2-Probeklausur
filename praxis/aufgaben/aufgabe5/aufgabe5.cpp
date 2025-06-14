/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 * ERREICHBARE PUNKTE: 10
 */

#include "aufgabe5.h"

// Liefert einen Pointer auf den Knoten mit dem kleinsten Wert im Baum.
// Liefert einen Nullpointer, wenn der Baum leer ist.
Node* Node::min_node()
{
    // TODO
  if(is_empty()){
    return nullptr;
  }
  if (left -> is_empty()){
    return this;
  }
  return left -> min_node();
}
