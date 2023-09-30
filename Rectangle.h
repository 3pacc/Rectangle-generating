#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
  Rectangle(unsigned int initLargeur, unsigned int initHauteur);
  ~Rectangle();
  unsigned int getLargeur() const { return largeur; };
  unsigned int getHauteur() const { return hauteur; };
  unsigned int perimetre() const { return 2*(largeur+hauteur); };
  unsigned int surface() const { return largeur * hauteur; };
  void setLargeur(unsigned int newLargeur) {largeur = newLargeur; };
  void setHauteur(unsigned int newHauteur)  {hauteur = newHauteur; };	
  void afficher();

private:
  unsigned int largeur;
  unsigned int hauteur;
};


#endif
