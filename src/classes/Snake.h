#ifndef SNAKE_H
#define SNAKE_H

#include "Point.h"

class Snake
{
public:
    //Base constructeur
    Snake();
    
    //Basic destructeur
    ~Snake();

    void ajouterPoint(Point p);
    /*
     * Ajoute un point au corp du serpent
     */
    
    void afficherSnake();
    /*
     * Affiche le serpent
     */
    
private:

    Point Serpent[20];



};

#endif 
