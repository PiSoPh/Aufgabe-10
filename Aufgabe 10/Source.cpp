/*

Es soll eine Klasse „LinkedList“ entwickelt werden, die Objekte der Klasse Element in einer einfach
verketteten Liste speichern (hinten anfügen) und komplett auslesen kann (Ausgabe eines Members
aller Objekte vom Typ Element). Eine einfach verkettete Liste wird aufgebaut, indem ein Element per
Smart Pointer auf ein Nachfolgerelement zeigt. Man kann sich diese Verkettung vorstellen wie eine
Polonaise, bei der eine Person (Element der Liste) die Hände auf die Schultern (Smart Pointer auf
Nachfolgerelement) der nächsten Person (Nachfolgerelement) legt. Der/die erste in der
Liste/Polonaise hat keinen Nachfolger und „zeigt“ ins Leere (Null-Pointer).

10.1 UML Klassendiagramm
Planen Sie das Programm mithilfe eines UML Klassendiagramms.

10.2 Implementierung
Implementieren Sie die Klasse LinkedList als template und die Klasse Element. Weiterhin
implementieren Sie eine kleine Testumgebung, um Ihr Programm auf Speicherlecks zu überprüfen.

10.3 (Optional) Doppelt verkettete Liste
Entwickeln Sie eine Klasse DoubleLinkedList, die eine doppelt verkettete Liste mit Smart Pointern
realisiert. Ein Element besitzt Verweise auf seine beiden Nachbarelemente in der Liste. Achtung, hier
kommt es zu einem zyklischen Verweis!



*/

#include "Elemente.h"
#include "LinkedList.h"

#include <memory>
#include <iostream>

int main()
{
	std::unique_ptr<LinkedList<int>> list = std::make_unique<LinkedList<int>>();

	list->append(2);
	list->append(5);
	list->append(8);
	list->append(1);
	list->append(4);
	list->append(3);

	//Aufgabe 10.2

	std::cout << "Forward Traverse:" << std::endl;

	for (int x = 0; x < (list->index); x++)
	{
		std::cout << " " << list->TraverseForward(x);
	}


	//Aufgabe 10.3.
	std::cout << "\nBackward Traverse" << std::endl;
	for (int j = 0; j < (list->index); j++)
	{
		std::cout << " " << list->TraverseBackward(j);
	}

	std::unique_ptr<LinkedList<std::string>> strList = std::make_unique<LinkedList<std::string>>();

	strList->append("P");
	strList->append("3");
	strList->append("N");
	strList->append("1");
	strList->append("5");

	std::cout << "\nForward Traverse:" << std::endl;

	for (int x = 0; x < (strList->index); x++)
	{
		std::cout << " " << strList->TraverseForward(x);
	}


	//Aufgabe 10.3.
	std::cout << "\nBackward Traverse" << std::endl;
	for (int j = 0; j < (strList->index); j++)
	{
		std::cout << " " << strList->TraverseBackward(j);
	}
}