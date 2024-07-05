/********
 * Fichier: graphicus-02.cpp
 * Auteurs: bour0703-guea0902
 * Date: 15 janvier 2023
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"

using namespace std;

int main()
{
   Tests tests;
   //tests.tests_unitaires_formes();
   tests.tests_application();
   //tests.tests_unitaires_vecteur();
   tests.tests_unitaires_couche();
   
   //tests.tests_unitaires();
   //tests.tests_unitaires_canevas();
   return 0;
}

