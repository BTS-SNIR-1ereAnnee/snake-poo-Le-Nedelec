/*
 Projet: snake
 Auteur: Sylvain Guilbert
*/
#include <iostream>
#include "Point.h"
#include "Board.h"
#include "Snake.h"


using namespace std;

//void verifLimite()

int main()
{
    const int X_MAX = 20;
    const int Y_MAX = 30;
    Snake serpent;
    
     // pointeurs sur l'unique instance de la classe UniqueObject
    Board *fenetre;
    // initialisation des pointeurs
    fenetre = Board::getInstance ();
    
    Point p(10,10);
    Point p2(10,11);
    Point p3(10,12);
    serpent.ajouterPoint(p);
    serpent.ajouterPoint(p2);
    serpent.ajouterPoint(p3);
    serpent.afficherSnake();
    
    /*p.drawPoint();
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
    */
    
    char sortie = '0';
    
    do 
    {
        cin >> sortie;
        switch(sortie){
        
            case '1':
                p.erasePoint();
                //if (Point::getX()+1 == X_MAX)
                p.moveLeft();
                serpent.deplacementSnake(p);
                //serpent.ajouterPoint(p);
                serpent.afficherSnake();
                //serpent.debugSnake();
                break;
            case '2':
                p.erasePoint();
                p.moveDown();
                serpent.deplacementSnake(p);
                //serpent.ajouterPoint(p);
                serpent.afficherSnake();
                //serpent.debugSnake();
                break;
            case '3':
                p.erasePoint();
                p.moveRight();
                serpent.deplacementSnake(p);
                //serpent.ajouterPoint(p);
                serpent.afficherSnake();
                //serpent.debugSnake();
                break;
            case '5':
                p.erasePoint();
                p.moveUp();
                serpent.deplacementSnake(p);
                //serpent.ajouterPoint(p);
                serpent.afficherSnake();
                //serpent.debugSnake();
                break;
            
        }
    
    }while(sortie != 'q');
    
    
    getchar();
    fenetre->kill();
   
    return 0;
}
