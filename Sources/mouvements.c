#include "../Includes/mouvements.h"
#include "../Includes/laby.h"
#include "../Includes/clavier.h"
#include "../Includes/ecran.h"
#include "../Includes/score.h"

// Verifie que la destination atteignable et y deplace le joueur
// Le deplacement consiste en deux choses:
// - Adapter le contenu de la representation interne du labyrinthe
// - Adapter le contenu de la representation affichee du labyrinthe
// Parametres d'entree:
// - Le labyrinthe
// - La position du joueur
// - La position cible
// Parametre de sortie:
// - La representation du contenu de la cible, qu'elle soit atteinte ou non
char AtteindreCible(struct Laby_Complet *labyrinthe, char typeDePersonnage, int positionV, int positionH, int cibleV, int cibleH, bool afficher)
{
    // TODO
    return 0;
}

// Avance le joueur ou le monstre vers le haut, si possible
// Parametres d'entree:
// - Le labyrinthe
// Parametre de sortie:
// - La representation du contenu de la cible si le mouvement est possible
// - Si mouvement impossible, la representation du joueur ou du monstre immobile
char AvancerHaut(struct Laby_Complet *labyrinthe, struct Laby_Position *position, char typeDePersonnage, bool afficher)
{
    // TODO
    return 0;
}

// Avance le joueur ou le monstre vers le bas, si possible
// Parametres d'entree:
// - Le labyrinthe
// Parametre de sortie:
// - La representation du contenu de la cible si le mouvement est possible
// - Si mouvement impossible, la representation du joueur ou du monstre immobile
char AvancerBas(struct Laby_Complet *labyrinthe, struct Laby_Position *position, char source, bool afficher)
{
    // TODO
    return 0;
}

// Avance le joueur ou le monstre vers la gauche, si possible
// Parametres d'entree:
// - Le labyrinthe
// Parametre de sortie:
// - La representation du contenu de la cible si le mouvement est possible
// - Si mouvement impossible, la representation du joueur ou du monstre immobile
char AvancerGauche(struct Laby_Complet *labyrinthe, struct Laby_Position *position, char source, bool afficher)
{
    // TODO
    return 0;
}

// Avance le joueur ou le monstre vers la droite, si possible
// Parametres d'entree:
// - Le labyrinthe
// Parametre de sortie:
// - La representation du contenu de la cible si le mouvement est possible
// - Si mouvement impossible, la representation du joueur ou du monstre immobile
char AvancerDroite(struct Laby_Complet *labyrinthe, struct Laby_Position *position, char source, bool afficher)
{
    // TODO
    return 0;
}

// Verifie si une sortie a ete trouvee,
// c'est a dire que le joueur est sur un bord
bool SortieTrouvee(struct Laby_Complet *labyrinthe)
{
    // TODO
    return false;
}

// deplace un joueur dans le labyrinthe et le redessine
// Parametre de sortie:
// - Le contenu de la destination qui est finalement atteinte (qu'on bouge ou non)
char SeDeplacer(struct Laby_Complet *labyrinthe)
{
    // TODO
    return 0;
}

// Deplace le monstre
void DeplacerMonstre(struct Laby_Complet *labyrinthe)
{
    // TODO
}

// Se deplacer jusqu'a trouver une sortie, attraber un monstre ou abandonner
// Parametre d'entree:
// - Le laryinthe complet
// Parametre de sortie:
// - Le score qui est le temps restant si la partie est terminee
//   et 0 si abandon ou fin du temps imparti
long JouerUnePartie(struct Laby_Complet *labyrinthe, bool AttraperMonstre)
{
    // TODO
}

// Jeu qui consiste a trouver la sortie avec un temps limite
void JouerPartieSortie()
{
    // TODO
}

// Jeu qui consiste a attraper un monstre avec un temps limite
void JouerPartieMonstre()
{
    // TODO
}
