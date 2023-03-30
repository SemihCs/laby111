#ifndef _LABY_CONST
#define _LABY_CONST
// Dimensions maximales du labyrinthe
static const int Laby_LargeurMax = 40;
static const int Laby_HauteurMax = 40;
// Definition des caracteres du fichier d'entree et de partie
static const char CelluleVide = '0';
static const char CelluleMur = '1';
static const char CelluleJoueur = 'J';
static const char CelluleMonstre = 'M';
static const char CelluleCookie = '.';
static const char CelluleAbandon = 'A';
// Directions de deplacement du monstre
#define Laby_MonstreImmobile 0
#define Laby_MonstreVersLeHaut 1
#define Laby_MonstreVersLeBas 2
#define Laby_MonstreVersLaGauche 3
#define Laby_MonstreVersLaDroite 4

// Chaque cellule comporte deux caracteres a l'ecran
// Cette structure permet de les stocker ensemble 
struct Laby_Cell
{
    // TODO
};
// Structure pour stocker la position dans le labyrinthe
// du joueur ou du monstre
struct Laby_Position
{
    // TODO
};
// Strcture pour contenir toute la description du labyrinthe
// Cela sert a passer un seul parametre, par adresse, a de nombreuses fonctions
struct Laby_Complet
{
    // Dimensions du labyrinthe
    // TODO
    // Position du joueur
    // TODO
    // Position du monstre
    // TODO
    // Direction du monstre
    // TODO
    // Cellules pour afficher (2 char de large par cellule)
    // TODO
    // Fichier texte labyrinthe interne
    // TODO
};
#endif

// Fonctions publiques
void InitialiserJeu();
bool LireFichierLabyrinthe(char *nomFichierLabyrinthe, struct Laby_Complet *labyrinthe, struct Laby_Message *messageAFormater);
struct Laby_Complet *ChargerLabyrintheAuHasard();
bool ConvertirLabyrinthe(struct Laby_Complet *labyrinthe, struct Laby_Message *messageAFormater);
void ConvertirUneCelluleEnTexteAffichable(struct Laby_Complet *labyrinthe, int positionV, int positionH);
void PlacerAuHasard(struct Laby_Complet *labyrinthe, char elementAPlacer, char elementARemplacer, bool auBord);
void AfficherLabyrinthe(struct Laby_Complet *labyrinthe);
void RafraichirAffichageLabyrinthe(struct Laby_Complet *labyrinthe);
void LibererLabyrinthe(struct Laby_Complet *labyrinthe);