#ifndef BIBLIOTHEQUE_H
#define BIBLIOTHEQUE_H

 ===== Exercice 7 : Equation du second degré =====
void resoudreEquation(double a, double b, double c);

 ===== Exercice 12a : Test pour les nombres premiers =====
int estPremier(long long n);

 ===== Exercice 13 : Distance entre deux points =====
typedef struct {
    double x;
    double y;
} Point;

double distance(Point p1, Point p2);

#endif



