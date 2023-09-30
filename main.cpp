#include<iostream>
#include <cstdlib>
#include "Rectangle.h"

using namespace std;

int main()
{
  Rectangle monRectangle(0,0);
  char choix = '0';
  unsigned int value;

  while(true)
  {
    do 
    {
      cout << " Rectangle - Menu" << endl;
      cout << "1 - Modifier largeur du rectangle" << endl;
      cout << "2 - Modifier hauteur du rectangle" << endl;
      cout << "3 - Calculer les proprietes du rectangle" << endl;
      cout << "4 - Afficher le rectangle" << endl;
      cout << "5 - Quitter" << endl;

      cin >> choix;
    }
    while(choix < '1' || choix > '5');

    switch(choix)
    {
      case '1':
        cout << "Nouvelle largeur : ";
        cin >> value;
        monRectangle.setLargeur(value);
        break;
      case '2':
        cout << "Nouvelle hauteur : ";
        cin >> value;
        monRectangle.setHauteur(value);
        break;
      case '3':
        cout << "Perimetre : " << monRectangle.perimetre() << endl;
        cout << "Surface : " << monRectangle.surface() << endl;
        break;
      case '4':
        monRectangle.afficher();
        break;
      case '5':
        exit(0);
        break;
      default:
        cout << "Erreur ! Choix invalide." << endl;
        exit(1);
    }
  }
  return 0;
}
