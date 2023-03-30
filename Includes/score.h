#include <mysql.h>

// Contenu de la DB: Joueur
struct Laby_Score_Joueur
{
    // TODO
};
// Contenu de la DB: Jeu
struct Laby_Score_Jeu
{
    // TODO
};
// Contenu de la DB: Partie
struct Laby_Score_Partie
{
    // TODO
};
// Tous les scores dans une seule structure
struct Laby_Score_Complet
{
    // TODO
};

// Fonctions publiques
void SInscrire();
bool InitialiserConnexionDB(bool DBProduction);
void AjouterScore(char *typeDePartie, long score);
void AfficherMeilleursScores(int nombreDeScoresParJeu);

// Ces fonctions servent pour les tests unitaires
MYSQL *ConnecterLaDB(bool DBProduction, bool creerLaDBSiNecessaire, bool terminerSiErreur);
void CreerLaDB(bool DBProduction, MYSQL *sqlConnection);
void ChargerLaDBEnMemoire(bool DBProduction, struct Laby_Score_Complet *tousLesScores);
bool AjouterJoueurDansDB(bool DBProduction, struct Laby_Score_Joueur joueur);
bool AjouterJeuDansDB(bool DBProduction, struct Laby_Score_Jeu jeu);
bool AjouterPartieDansDB(bool DBProduction, struct Laby_Score_Partie partie);