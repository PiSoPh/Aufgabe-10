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