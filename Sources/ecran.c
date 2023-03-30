#include "../Includes/common.h"
#include "../Includes/clavier.h"
#include "../Includes/ecran.h"

// ***************************************//
// FONCTIONS DECLAREES DANS LE FICHIER .h //
// ***************************************//

// Initialise l'ecran pour le mode texte positionnable
// A appeler au demarrage de l'application
void InitialiserEcran()
{
#ifdef _WIN32
    // Le code page 437 permet l'affichage correct des bordures sous Windows
    setlocale(LC_ALL, "CP850");
#else
    // Active ncurses sous Linux
    initscr();
#endif
}

// Restore l'ecran pour le mode normal
// A appeler tout a la fin de l'application
void RestaurerEcran()
{
#ifndef _WIN32
    echo(); // Affichage des caracteres
    endwin();
#endif
}

// Place la position courante au debut de la ligne suivante
void RetourALaLigne()
{
    // TODO
}

// Affiche un texte avec indentation a partir de la position courante
// puis revient au debut de la ligne suivante
void AfficherTexteIndenteAvecRetour(char *texteAAfficher)
{
    // TODO
}

// Affiche un texte avec indentation a partir de la position courante
// sans retour au debut de la ligne suivante
void AfficherTexteIndenteSansRetour(char *texteAAfficher)
{
    // TODO
}

// Affiche un texte a partir de la position courante
// puis revient au debut de la ligne suivante
void AfficherTexteAvecRetour(char *texteAAfficher)
{
    // TODO
}

// Affiche un texte a partir de la position courante
// sans retour au debut de la ligne suivante
void AfficherTexteSansRetour(char *texteAAfficher)
{
    // TODO
}

// Affiche un caractere a partir de la position courante
// sans retour au debut de la ligne suivante
void AfficherCharSansRetour(unsigned char caractereAAfficher)
{
    // TODO
}

// Affiche un caractere special a partir de la position courante
// sans retour au debut de la ligne suivante
void AfficherCharSpecialSansRetour(unsigned char caractereAAfficher)
{
#ifdef _WIN32
    printf("%c", caractereAAfficher);
#else
    addch(NCURSES_ACS(caractereAAfficher));
    refresh();
#endif
}

// Affiche un texte dans un cadre
void AfficherTexteDansCadre(char *TexteAAfficher)
{
    // TODO
}

// Affiche le temps restant a la position couraate en revenant ensuite au debut de la ligne
void AfficherTempsRestant(long tempsRestant)
{
    // TODO
}

// Efface l'ecran
void EffacerEcran()
{
#ifdef _WIN32
    system("cls");
#else
    clear();
#endif
}

// Affiche un message, puis demande d'enfoncer une touche et attend que ce soit fait
void AttendreConfirmation(char *messageAAfficher)
{
    // TODO
}

// Attend une duree donnee (en secondes)
void AttendreSecondes(int dureeEnSecondes)
{
#ifdef _WIN32
    Sleep(dureeEnSecondes * 1000);
#else
    sleep(dureeEnSecondes);
#endif
}

// Affiche un score a la position courante
// puis revient au debut de la ligne suivante
void AfficherScore(int score)
{
    // TODO
}

// Positionne le curseur a une position donnee de la console sans effacer l'ecran
// En pratique, seule la position (0,0) est utilisee
void PositionnerCurseur(int positionX, int positionH)
{
#ifdef _WIN32
    HANDLE MaConsoleEcran = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD position = {positionX, positionH};
    SetConsoleCursorPosition(MaConsoleEcran, position);
#else
    move(positionX, positionH);
#endif
}