#include<stdio.h>
#include<math.h>

int main() {
    int numJour, numMois, nbJours, joursRestants, joursMois;
    char slash;
    printf("Veuillez entrer une date (jj / mm)\n");
    scanf_s("%i %c %i", &numJour, &slash, 1, &numMois);
    
    joursMois = numJour - 1; //Calculer les jours restants dans le mois
    numMois -= 1;
    nbJours = (numMois * 31) + joursMois;
	if (numMois > 2) { //Pour le mois de janvier et fevrier puis ce que fevrier contient 28 jours
        nbJours -= 3;//Pour les trois jours de fevrier manquants
	}
	
    switch (numMois) {
    case 12:
        break;
    case 11:
        --nbJours;
        break;
    case 10:
        break;
    case 9:
        --nbJours;
    case 8:
        break;
    case 7:
        --nbJours;
    case 6:
        break;
    case 5:
        --nbJours;
    case 4:
        break;
    case 3:
        --nbJours;
        break;
    case 2:
        break;
    case 1:
        --nbJours;
    }

	switch (nbJours % 7) {
    case 0:
        printf("C'est un samedi\n");
        break;

    case 1:
        printf("C'est un dimanche\n");
        break;

    case 2:
        printf("C'est un lundi\n");
        break;

    case 3:
        printf("C'est un mardi\n");
        break;

    case 4:
        printf("C'est un mercredi\n");
        break;

    case 5:
        printf("C'est un jeudi\n");
        break;

    case 6:
        printf("C'est un vendredi\n");
        break;
    }
	
}