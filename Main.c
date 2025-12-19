#include <stdio.h>
#include "Bibliotheque.c"

int main(void) {
    /* ===== Exercice 7 : Equation du second degré ===== */
    double a, b, c;
    printf("\n[Exercice 7] Entrez a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    resoudreEquation(a, b, c);

     ===== Exercice 12a : Test les nombre premier ===== 
    long long n;
    printf("\n[Exercice 12a] Entrez un entier positif: ");
    scanf("%lld", &n);
    if (estPremier(n))
        printf("%lld est premier.\n", n);
    else
        printf("%lld n'est pas premier.\n", n);

    /* ===== Exercice 13 : Distance entre deux points ===== */
    Point p1, p2;
    printf("\n[Exercice 13] Entrez x1 y1: ");
    scanf("%lf %lf", &p1.x, &p1.y);
    printf("Entrez x2 y2: ");
    scanf("%lf %lf", &p2.x, &p2.y);
    printf("Distance = %.6f\n", distance(p1, p2));

    /* ===== Exercice 8 (Programmation en C) : Vérifier si un entier est premier ===== */
    int m;
    printf("\n[Exercice 8] Entrez un entier: ");
    scanf("%d", &m);
    if (estPremierC(m))
        printf("%d est premier.\n", m);
    else
        printf("%d n'est pas premier.\n", m);

    /* ===== Fonction Factoriel ===== */
    int f;
    printf("\n[Factoriel] Entrez un entier: ");
    scanf("%d", &f);
    long long fact = factoriel(f);
    if (fact == -1)
        printf("Factoriel non defini pour les entiers negatifs.\n");
    else
        printf("%d! = %lld\n", f, fact);

    /* ===== Fonction Puissance ===== */
    int base, exp;
    printf("\n[Puissance] Entrez a et b (calcul de a^b): ");
    scanf("%d %d", &base, &exp);
    printf("%d^%d = %lld\n", base, exp, puissance(base, exp));

    /* ===== Fonction Permutation ===== */
    int x, y;
    printf("\n[Permutation] Entrez deux entiers a et b: ");
    scanf("%d %d", &x, &y);
    printf("Avant permutation: a = %d, b = %d\n", x, y);
    permut(&x, &y);
    printf("Apres permutation: a = %d, b = %d\n", x, y);

    return 0;
}

