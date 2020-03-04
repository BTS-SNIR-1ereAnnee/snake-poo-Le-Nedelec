#include "Point.h"
#include "Board.h"
#include "Snake.h"
#include <iostream>

Snake::Snake(){

    

}

Point Snake::getSnake() const {

    return this->m_serpent[20];

}

int Snake::getIndex() const {

    return this->m_index;

}

void Snake::setIndex(int x){

    this->m_index = x ;    

}

// 
void afficherSnake(){

}

//
void ajouterPoint(Point p){
        

}

Snake::~Snake(){

}
