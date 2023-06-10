#include <iostream>
#include <stdlib.h> 

using namespace std;

void Menu();
int LanzarDado();
void Comparar(int);

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


void Comparar(int radomnum){
    string tipo;
    //cout << "Cara del dado = "<< radomnum << endl;
    switch (radomnum){
    case 1:
            cout << "Ha salido Velocidad"<< endl;
        break;
    case 2:
            cout << "Ha salido Tiro"<< endl;
        break;
    case 3:
            cout << "Ha salido Regate"<< endl;
        break;
    case 4:
            cout << "Ha salido Defensa"<< endl;
        break;
    case 5:
            cout << "Ha salido Pase"<< endl;
        break;
    case 6:
            cout << "Ha salido Fisico"<< endl;
        break;        
    default:break;
    }
};