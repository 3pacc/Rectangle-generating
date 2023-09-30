#include "Rectangle.h"
#include<iostream>

using namespace std;

Rectangle::Rectangle(unsigned int initLargeur, unsigned int initHauteur)
{
  largeur = initLargeur;
  hauteur = initHauteur;
}

Rectangle::~Rectangle()
{
}

void Rectangle::afficher()
{
  for(unsigned int i=0; i < hauteur; i++)
  {
    for(unsigned int j=0; j < largeur; j++)
    
	   cout << "*";
    cout << endl;

    
  }
}
