#include <iostream>
#include <stdlib.h> 
#include <string> 

using namespace std;

struct FichaJugador{
    int Velocidad;
    int Tiro;
    int Regate;
    int Defensa;          
    int Pase;
    int Fisico;        
};


void Menu();
int LanzarDado();
void Comparar(int);
void Tipoview(string);

int main(){
    cout << "TP1 Algoritmos" << endl;
    Menu();
    return 0;
};

void Menu(){
    int menuNum; //el num que elige el usuario
    bool a = false; //si es true sale del loop 
    
    do{
        cout << "-------------------------------------------------------------------" << endl;
        cout << "Eliga lo que quiera hacer" << endl;
        cout << "0) Salir" << endl;
        cout << "1) Lanzar dado" << endl;
        cout << "-------------------------------------------------------------------" << endl;
        cin >> menuNum;
        if (menuNum == 1 ){
            Comparar(LanzarDado());
        } else if(menuNum ==0){
            a = true;
        };
    }while (!a);
};

int LanzarDado(){
    srand(time(nullptr)); // Semilla
    return (1 + rand() % 6); // min = 1  y el max = 6 (Includos los 2)
};

void Tipoview(string tipodato){
    cout << "Ha salido "<< tipodato<< endl;
};


void Comparar(int radomnum){
    string tipo;
    cout << "Cara del dado = "<< radomnum << endl;
    switch (radomnum){
    case 1:
            tipo = "Velocidad";
        break;
    case 2:
            tipo = "Tiro";
        break;
    case 3:
            tipo = "Regate";
        break;
    case 4:
            tipo = "Defensa";
        break;
    case 5:
            tipo = "Pase";
        break;
    case 6:
            tipo = "Fisico";
        break;        
    default:break;
    }
    Tipoview(tipo);
};