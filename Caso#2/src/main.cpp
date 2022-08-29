#include <iostream>
#include <vector>
#include <string.h> 
#include <string>
using namespace std;
 
// Nodo de lista enlazada
class Node
{
  public:
    string obj;        // campo de datos
    Node* next;     // puntero al siguiente nodo
};
 



Node* push(Node* head, string obj)
{
    // asigna nuevo nodo en heap y configura datos
    Node* node = new Node;
    node->obj = obj;
 
    node->next = head;
 
    // devuelve nuevo nodo
    return node;
}
 
// Función para la implementación de listas enlazadas a partir de un conjunto dado de claves
Node* constructList(vector<string> const &obj)
{
    Node* head = nullptr;
 
    // comienza desde el final de la array
    for (int i = obj.size() - 1; i >= 0; i--) {
        head = push(head, obj[i]);       
    }
 
    return head;
}
 
// Imprimir lista
void printList(Node* head)
{
    Node* ptr = head;
    while (ptr)
    {
        cout << ptr->obj << " -> ";
        ptr = ptr->next;
    }
 
    cout << "nullptr";
}
 
int main()
{
    // teclas de entrada (en orden inverso)
    vector<string> aparatos = { "Bombillo", "Puerta", "Alarma", "Coffee maker", "TV", "Refrigerador" };
 
    // construir lista enlazada
    Node *head = constructList(aparatos);
 
    // imprimir lista enlazada
    // printList(head);
    



    int opcion_menu;
    string nombre;
    string tipo;
    int cantidad;
    bool bombillo;
    string tarea;

    cout<<"Seleccione la opcion deseada"<<endl;
    cout<<"1. Agregar dispositivo"<<endl;
    cout<<"2. Crear tarea especifica"<<endl;
    cout<<"3. Ejecutar una tarea en particular"<<endl;
    cin >> opcion_menu;
		switch(opcion_menu){
		
			
		case 1:
        cout<<"Digite el nombre del dispositivo"<<endl;
        cin >> nombre;
        cout<<"Digite el tipo"<<endl;
        cin >> tipo;
        cout<<"Digite la cantidad de habitaciones"<<endl;
        cin >> cantidad;
        break;
        //incompleto

        case 2:
        cout<<"Digite el dispositivo que va a realizar la tarea"<<endl;
        cin >> nombre;
        cout<<"Digite la accion que desea que realice"<<endl;
        cin >> tarea;
        break;
        //incompleto

        case 3:
        printList(head);
        cout<<endl<<"Escriba cual de las opciones desea activar o desactivar"<<endl;
        cin >> nombre;
        break;
        //incompleto
        }
    
    return 0;
}