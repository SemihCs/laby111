#include "../Includes/common.h"
#include "../Includes/ecran.h"
#include "../Includes/clavier.h"
#include "../Includes/score.h"

static const char *ServerDB = "127.0.0.1";

// Initialise la structure qui va stocker tout le contenu de la DB en memoire
// Parametre:
// - Un pointeur vers la structure a initialiser
void InitialiserStructureDB(struct Laby_Score_Complet *tousLesScores)
{
    // TODO
}

// Efface de la memoire la structure qui a stocke tout le contenu de la DB
// Parametre:
// - Un pointeur vers la structure a effacer
void EffacerLaDBEnMemoire(struct Laby_Score_Complet *tousLesScores)
{
    // TODO
}

// Execute une instruction SQL
// Parametres:
// - Un booleen indiquant si c'est la DB de production ou de test
// - Le connecteur vers la DB
// - L'instruction a executer
void ExecuterInstructionSQL(bool DBProduction, MYSQL *sqlConnection, char *instructionSQL)
{
    // TODO
}

// Cree la base de donnee
// Parametres:
// - Un booleen indiquant si c'est la DB de production ou de test
// - Le connecteur vers la DB
void CreerLaDB(bool DBProduction, MYSQL *sqlConnection)
{
    // TODO
}

// Connexion a la base de donnee, en la creant si necessaire
// Parametres:
// - Un booleen indiquant si c'est la DB de production ou de test
// - Un booleen indiquant s'il faut creer la DB si elle n'existe pas
// - Un booleen indiquant le comportement en cas d'erreur (pour les tests: on continue)
MYSQL *ConnecterLaDB(bool DBProduction, bool creerLaDBSiNecessaire, bool terminerSiErreur)
{
    // TODO
    return NULL;
}

// Ferme la connexion vers la DB
void FermerLaDB(MYSQL *sqlConnection)
{
    // TODO
}

// Initialise la connexion vers la DB
// Parametre:
// - Un booleen indiquant si c'est la DB de production ou de test
bool InitialiserConnexionDB(bool DBProduction)
{
    // TODO
}

// Extrait tous les joueurs de la DB
// Parametres:
// - Un pointeur vers la structure ou ecrire le contenu de la DB
// - La connexion vers la DB
void LireJoueursDansDB(struct Laby_Score_Complet *tousLesScores, MYSQL *sqlConnection)
{
    // TODO
}

// Extrait tous les jeux de la DB
// Parametres:
// - Un pointeur vers la structure ou ecrire le contenu de la DB
// - La connexion vers la DB
void LireJeuxDansDB(struct Laby_Score_Complet *tousLesScores, MYSQL *sqlConnection)
{
    // TODO
}

// Extrait toutes les parties jouee de la DB
// Parametres:
// - Un pointeur vers la structure ou ecrire le contenu de la DB
// - La connexion vers la DB
void LirePartiesDansDB(struct Laby_Score_Complet *tousLesScores, MYSQL *sqlConnection)
{
    // TODO
}

// Charger toutes les jeux, joueurs et scores en memoire, dans l'ordre decroissant des points
// Parametres:
// - Un booleen indiquant si c'est la DB de production ou de test
// - Un pointeur vers la structure ou ecrire le contenu de la DB
void ChargerLaDBEnMemoire(bool DBProduction, struct Laby_Score_Complet *tousLesScores)
{
}

// Ajouter un joueur dans la DB
// Parametres:
// - Un booleen indiquant si c'est la DB de production ou de test
// - La structure du joueur a ajouter
bool AjouterJoueurDansDB(bool DBProduction, struct Laby_Score_Joueur joueur)
{
    return true;
}

// Ajouter un jeu dans la DB
// Parametres:
// - Un booleen indiquant si c'est la DB de production ou de test
// - La structure du jeu a ajouter
bool AjouterJeuDansDB(bool DBProduction, struct Laby_Score_Jeu jeu)
{
    return true;
}

// Ajouter une partie dans la DB
// Parametres:
// - Un booleen indiquant si c'est la DB de production ou de test
// - La structure de la partie a ajouter
bool AjouterPartieDansDB(bool DBProduction, struct Laby_Score_Partie partie)
{
    return true;
}

// Demander au joueur de s'inscrire en donnant son pseudo
void SInscrire()
{
}

// Ajoute un score a la DB
// Parametres:
// - Le type de partie
// - Le score
// Le joueur est celui qui est inscrit, conserve en memoire
void AjouterScore(char *typeDePartie, long score)
{
}

// Affiche les meilleurs scores de chaque jeu
// Parametre:
// - Le nombre de meilleurs scores a afficher par jeu
void AfficherMeilleursScores(int nombreDeScoresParJeu)
{
}