#include "Point.h"
#include "Board.h"
#include "Snake.h"
#include <iostream>

//Base constructeur
Snake::Snake(){

    

}

//Accesseur du tableau serpent
Point Snake::getSnake() const {

    return this->m_serpent[20];

}

//Accesseur de l'index
int Snake::getIndex() const {

    return this->m_index;

}

//setter de l'index (endroit d'ajout de point dans serpent)
void Snake::setIndex(int x){

    this->m_index = x ;    

}

/*
 * Affiche le serpent
 */
void afficherSnake(){

}

/*
 * Ajoute un point au corp du serpent
 */
void ajouterPoint(Point p){
        

}

//Basic destructeur
Snake::~Snake(){

}
