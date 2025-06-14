/* AUFGABENSTELLUNG: Vervollständigen Sie die unten stehende Funktion.
 *ERREICHBARE PUNKTE : 10
 */

#include "aufgabe6.h"

// Sucht einen Knoten mit dem gegebenen Schlüssel im Baum.
// Liefert einen Pfad zu diesem Knoten als String.
// Der Pfad besteht aus den Buchstaben 'L' und 'R' für links und rechts.
// Er beschreibt den Weg vom Wurzelknoten zum gesuchten Knoten.
// Ist der gesuchte Knoten der Wurzelknoten, wird ein leerer String
// geliefert. Wenn der Knoten nicht gefunden wird, wird ein "X" geliefert.
std::string Node::path(int key_)
{
    // TODO
    if ( key == key_){
        return "";
    }
    if (is_empty()){
        return "X";
    }
    if (key_ < key){
        auto left_result = left ->path(key_);
        if (left_result == "X"){
            return "X";
        }else{
            return "L" + left_result;
        }
    }
    if (key_ > key){
        auto right_result = right -> path(key_);
        if (right_result == "X"){
            return "X";
        }else{
            return "R" + right_result;
        }
    }
}
