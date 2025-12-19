#include <stdio.h>
#include <math.h>
#include "bibliotheque.h"

===== Exercice 7 : Equation du second degré =====
void resoudreEquation(double a, double b, double c) {
    if (a == 0.0) {
        if (b == 0.0) {
            if (c == 0.0) {
                printf("Infinites de solutions.\n");
            } else {
                printf("Aucune solution.\n");
            }
        } else {
            printf("Solution unique: x = %.6f\n", -c / b);
        }
    } else {
        double delta = b*b - 4*a*c;
        if (delta > 0) {
            double x1 = (-b - sqrt(delta)) / (2*a);
            double x2 = (-b + sqrt(delta)) / (2*a);
            printf("Deux solutions: x1 = %.6f, x2 = %.6f\n", x1, x2);
        } else if (delta == 0) {
            printf("Solution double: x = %.6f\n", -b / (2*a));
        } else {
            printf("Pas de solution reelle.\n");
        }
    }
}

===== Exercice 12a : Test pour les nombres prmiers (Algorithmique) =====
int estPremier(long long n) {
    if (n < 2) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0) return 0;

    long long limite = (long long) sqrt((double)n);
    long long i;
    for (i = 5; i <= limite; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}

===== Exercice 13 : Distance entre deux points =====
double distance(Point p1, Point p2) {
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    return sqrt(dx*dx + dy*dy);
}

===== Exercice 8 (Programmation en C) : Vérifier si un entier est premier =====
int estPremierC(int n) {
    if (n < 2) return 0;
    int i;
    for (i = 2; i <= (int)sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

/* ===== Fonction Factoriel ===== */
long long factoriel(int n) {
    if (n < 0) return -1; // convention: -1 pour erreur
    long long resultat = 1;
    int i;
    for (i = 1; i <= n; i++) {
        resultat *= i;
    }
    return resultat;
}

===== Fonction Puissance =====
long long puissance(int a, int b) {
    long long resultat = 1;
    int i;
    for (i = 0; i < b; i++) {
        resultat *= a;
    }
    return resultat;
}

===== Fonction Permutation =====
void permut(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}



