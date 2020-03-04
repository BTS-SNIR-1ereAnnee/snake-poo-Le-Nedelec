/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"


using namespace std;

int main()
{

    // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();

    Point p(10,4);
    p.drawPoint();
    Point p2(10,5);
    Point p3(5,5);
    p2.drawPoint();
    p2.erasePoint();
    p3.drawPoint();
    p3.erasePoint();
    //fenetre = Board::effacerPoint(p3);
    //cout << "press any key to quit" << endl;
    p2.moveUp();
    p2.moveLeft();
    p2.drawPoint();
    p3.moveDown();
    p3.moveRight();
    p3.drawPoint();
    getchar();
    fenetre->kill();
    return 0;
}
