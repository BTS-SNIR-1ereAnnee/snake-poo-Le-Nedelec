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
    
    //Accesseur du tableau serpent
    Point getSnake() const ;
    
    //setter de l'index (endroit d'ajout de point dans serpent)
    void setIndex(int x);
    
    //Accesseur de l'index
    int getIndex() const ;
    
    /*
     * Ajoute un point au corp du serpent
     */
    void ajouterPoint(Point p);
    
    /*
     * Affiche le serpent
     */
    void afficherSnake();
    
    /*
     * Change les coordonnées des points dans Snake
     */
    void deplacementSnake();
    
private:

    Point m_serpent[20];

    int m_index;
    
    

};

#endif 
