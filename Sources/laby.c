#include "../Includes/common.h"
#include "../Includes/laby.h"
#include "../Includes/clavier.h"
#include "../Includes/ecran.h"

// Initialise le jeu
void InitialiserJeu()
{
    // TODO
}


// Convertit une cellule 'mur' du labyrinthe en un deux caracteres a afficher
// en fonction de la presence ou nom de murs en haut, en bas, a gauche et a droite
// Parametres d'entree:
// - la cellule a convertir sous la forme d'un caractere
// - booleens indiquant la presence de murs en haut, en bas, a gauche et a droite
// - la structure representant la cellule a afficher, qui contient deux caracteres contigu a l'ecran
void ConvertirEnTexteAffichable(char cellule, struct Laby_Cell *celluleAAfficher, bool murEnHaut, bool murEnBas, bool murAGauche, bool murADroite)
{
    // TODO
}

// Convertir une cellule du labyrinthe en texte affichable
// sous la forme de deux caracteres contigus (gauche et droite)
void ConvertirUneCelluleEnTexteAffichable(struct Laby_Complet *labyrinthe, int positionV, int positionH)
{
    // TODO
}

// Charge le labyrinthe a partir d'un fichier et le convertir en une structure
// Laby_Complet contenant le labyrinthe sous tous les formats et ses parametres
// Parametre d'entree:
// - le nom de fhcier
// Parametre de sortie:
// - une strcture de labyrinthe complet qui a ete allouee en memoire
struct Laby_Complet *ChargerLabyrintheAuHasard()
{
    // TODO
    return NULL;
}

// Tire une cellule au hasard et renvoie ses coordonnees
// Parametres:
// - le labyrinthe
// - la structure position ou placer le resultat
// - true ou false selon qu'on doit placer sur un bord ou qu'on ne peut pas
void CelluleAuHasard(struct Laby_Complet *labyrinthe, struct Laby_Position *resultat, bool auBord)
{
    // TODO
}

// Place au hasard un element dans le labyrinthe
// Parametres d'entree
// - Le labyrinthe
// - Le type d'element a placer
// - Le type d'element a remplacer
// - true si a placer au bord, false si a place ailleurs qu'au bord
void PlacerAuHasard(struct Laby_Complet *labyrinthe, char elementAPlacer, char elementARemplacer, bool auBord)
{
    // TODO
}

// Affiche tout le labyrinthe: murs, joueur, monstre, cookies...
// Chaque cellule est affichee en utilisant deux caracteres contigus
// pour compenser le fait qu'un caractere a l'ecran est deux fois plus haut que large
void AfficherLabyrinthe(struct Laby_Complet *labyrinthe)
{
    // TODO
}

// Rafraichit le labyrinthe: murs, joueur, monstre, cookies...
void RafraichirAffichageLabyrinthe(struct Laby_Complet *labyrinthe)
{
    // TODO
}

// Lit un fichier texte representant un labyrinthe en verifiant qu'il est correct
// - Il faut que toutes les lignes aient le meme nombre de cases
// - Il ne faut pas dépasser les dimensions maximales
// - Il faut que le contenu soit des '1' (murs) ou '0' (passage)
// Le resultat est une liste de chaine de caracteres valides
// ou null en cas d'erreur
// Parametre d'entree:
// - Nom de fichier
// - Structure pour stocker un message en cas d'erreur
// Parametre de sortie:
// - Un tableau de ligne (une ligne = chaine de caractere)
//   Ce tableau est alloue dynamiquement
bool LireFichierLabyrinthe(char *nomFichierLabyrinthe, struct Laby_Complet *labyrinthe, struct Laby_Message *messageAFormater)
{
    // TODO
    return true;
}

// Libere la memoire d'un labyrinthe
void LibererLabyrinthe(struct Laby_Complet *labyrinthe)
{
    // TODO
}

// Convertit tout le labyrinthe en texte affichable a l'ecran
// Chaque cellule est convertie en deux caracteres affichables
// Sous Windows, le CP 850 est utilise
// Sous Linux, du pur ASCII est utilise
// Parametres d'entree:
// - Tableau a deux entrees (tableau de chaine de char) avec le labyrinthe
// - Structure pour les eventuels messages d'erreur
// - La hauteur et la largeur du labyrinthe
bool ConvertirLabyrinthe(struct Laby_Complet *labyrinthe, struct Laby_Message *messageAFormater)
{
    // TODO
    return true;
}