/* Lecture numero de carte

#include <unistd.h>
#include<stdio.h>
#include "lecteurcarte.h"

void lecteurcarte_initialiser()
{
    initialisations_ports();// initialisation du lecteur
}

void lecteurcarte_lire_carte()
{
    unsigned short numero_carte; //le type de la variable doit etre le même que celui de la fonction lecture_numero_carte
printf("Inserez votre carte.\n");
attente_insertion_carte(); //on n'est pas obligé de metrre carte_inseree pour l'instant 
numero_carte= lecture_numero_carte();
printf("Le numero de la carte est:%d\n",numero_carte);
attente_retrait_carte();

}

*/


/* Implémenter base_clients */

#include <unistd.h>
#include<stdio.h>
#include "lecteurcarte.h"


void lecteurcarte_initialiser()
{
    initialisations_ports();// initialisation du lecteur
}

void lecteurcarte_lire_carte()
{
    unsigned short int numero_carte; //le type de la variable doit etre le même que celui de la fonction lecture_numero_carte
    int authentifier;
    printf("Inserez votre carte.\n");
    attente_insertion_carte(); //on n'est pas obligé de metrre carte_inseree pour l'instant 
    
    numero_carte= lecture_numero_carte();
    printf("Le numero de la carte est:%d\n",numero_carte);

    authentifier= base_client_authentifier (numero_carte);

        if(authentifier){
        printf("Authentification réussie\n");}
        else {
        printf("Authentification échouée\n");}

    
    printf("En attente de retrait de la carte.\n");
    
    attente_retrait_carte();
    printf("Carte retirée.\n");


}
