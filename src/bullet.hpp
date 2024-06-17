#pragma once
#include "enemy.hpp"

struct Bullet{
    float size;  //Taille de la bullet
    float speed;
    //une instance qui contiendra le dessin de la balle ??
    float X, Y;
    float _directX, _directY;

    void bullet_draw(); //méthode pour dessiner la balle
    void bullet_fire(Enemy& enemy, int power_impact); //méthode qui récupère la position/direction de l'ennemi et fais bouger la balle
    void bullet_disappear();  //méthode qui contiendra la condition que la position soit atteinte pour faire disparaitre le dessin
};