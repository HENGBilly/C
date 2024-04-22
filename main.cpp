#include <cstdlib> 
#include <iostream> 
#include <stdio.h>
using namespace std;


int nombrecarre(int nombre){
    return nombre * nombre;
}
int main(){
    int nbrentre = 0, nbrcarre = 0;
    
    cout << "Entrez le nombre dont vous voulez le carré :" << endl;
    cin >> nbrentre;

    nbrcarre = nombrecarre(nbrentre);
    cout << "Le carré de ce nombre est" <<  nbrcarre << endl;

    return 0;
}
