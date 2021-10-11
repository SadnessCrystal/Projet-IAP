const unsigned int maxTournois = 10;        // nb maximum de tournois
const unsigned int nbMatch = 127;           // nb de matchs par tournois
const unsigned int nbJoueuses = 128;        // nb joueuses par tournois
const unsigned int lgMot = 30;              // nb de caractères max

char mot[lgMot+1];                          // chaîne de caractères (mot) de taille max lgMot contenant la commande

typedef struct{
    char nom[lgMot+1];                      // nom de la joueuse
    int pointsCummules;                     // nb points cummulés
}Joueuse;

typedef struct{
    unsigned int idxGagnante;               // index de la gagnante
    unsigned int idxPerdante;               // index de la perdante
}Match;

typedef struct{
    char nomTournoi[lgMot+1];               // nom du tournoi
    char date[lgMot+1];                     // date du tournoi
    Match dataMatch[nbMatch+1];             // tableau des 127 matchs
}Tournoi;

typedef struct{
    Tournoi tableauTournois[maxTournois+1]; // tableau des tournois
}TournoisWTA;


int main(){
    while(1){
        scanf("%s", mot);                   // entrée de la commande
        commande(&mot);                     // analyse de la commande
    }
}

// Analyse de la commande rentrée
int commande(char* mot){
    char text;
    for (int i=0; i<lgMot; i++){
        text += mot[i];

        /*  La commande rentrée est definir_nombre_tournois ?
            Alors donner la valeur correspondante à la
            variable nbTournois */
        if (text == "definir_nombre_tournois"){
            // Non terminée !
        }

        // La commande rentrée est enregistrement_tournois ?
        else if (text == "enregistrement_tournoi"){
            // Non terminée !
        }

        /*  La commande rentrée est affichage_matchs_tournois ?
            Alors afficher le nom et la date du tournoi, puis
            afficher l'ensemble des matchs, un par ligne */
        else if (text == "affichage_matchs_tournoi"){  

        }
        
        /*  La commande rentrée est exit ?
            Alors sortir de la fonction et de la boucle infine,
            donc fin du programme */
        else if (text == "exit"){
            return 0;
        }
    }
}