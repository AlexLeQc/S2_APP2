/********
 * Fichier: tests.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"


void Tests::tests_unitaires_formes()
{

	cercle cercle1(0,0,10);
	cercle1.afficher(cout);
	rectangle rectangle1(1,2,10,20);
	rectangle1.afficher(cout);
	carre carre1(1,3,5);
	carre1.afficher(cout);
	
   // Tests sur les formes geometriques
}

void Tests::tests_unitaires_vecteur()
{
	Vecteur v1;
	Forme* cercle1 = new cercle(0,0,2);
	Forme* carre1 = new carre(0,0,2);
	Forme* rectangle1 = new rectangle(0,0,2);
	Forme* cercle4 = new cercle(0,0,2);
	Forme* cercle5 = new cercle(0,0,2);
	Forme* cercle6 = new cercle(0,0,2);
	v1.ajout(cercle1);
	v1.ajout(carre1);
	v1.ajout(rectangle1);
	v1.ajout(cercle4);
	v1.ajout(cercle5);
	v1.ajout(cercle6);
	v1.afficher(cout);
   // Tests sur la classe Vecteur
}

void Tests::tests_unitaires_couche()
{ 
	Couche couche1;
	Forme* cercle1 = new cercle(0,0,4);
	couche1.ajoute(cercle1);
	couche1.affichage(cout);
   // Tests sur la classe Couche
}

void Tests::tests_unitaires_canevas()
{
	
   // Tests sur la classe Canevas
}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}

void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   //tests_application_cas_02();
}

void Tests::tests_application_cas_01()
{
	cout << "" <<endl;	
	cout << "Plan de test APP1" << endl; 

   // Il faut ajouter les operations realisant ce scenario de test.
   	cout<< ""<<endl;
   	cout << "Premier test" <<endl;
   	cout << "" <<endl;
   	cout << "-----------------------------------------------" <<endl;
   	Canevas canevas;
	canevas.activerCouche(3);
	Forme* rectangle1 = new rectangle(0,1,4,3);
	Forme* carre1 = new carre(4,3,5);
	Forme* cercle1 = new cercle(4,9,2);
	canevas.ajouterForme(rectangle1);
	canevas.ajouterForme(carre1);
	canevas.ajouterForme(cercle1);
	canevas.activerCouche(2);
	Forme* rectangle2 = new rectangle(0,3,7,5);
	canevas.ajouterForme(rectangle2);
	canevas.afficher(cout);
	cout << "-----------------------------------------------" <<endl;
	cout << "" <<endl;
	cout<<"Aire totale du canevas: "<< canevas.aire() <<endl;
	cout << "" <<endl;
	cout << "Deuxieme test" <<endl;
	cout << "" <<endl;
	cout << "-----------------------------------------------" <<endl;
	canevas.activerCouche(0);
	Forme* rectangle3 = new rectangle(0,0,1,1);
	Forme* carre2 = new carre(0,0,3);
	canevas.ajouterForme(rectangle3);
	canevas.ajouterForme(carre2);
	canevas.activerCouche(3);
	canevas.translater(3,3);
	canevas.afficher(cout);
	cout << "-----------------------------------------------" <<endl;
	cout << "" <<endl;
	cout<<"Aire totale du canevas: "<< canevas.aire() <<endl;
	cout << "" <<endl;
	cout << "Troisieme test" <<endl;
	cout << "" <<endl;
	cout << "-----------------------------------------------" <<endl;
	canevas.activerCouche(0);
	canevas.retirerForme(1);
	canevas.afficher(cout);
	cout << "-----------------------------------------------" <<endl;
	cout << "" <<endl;
	cout<<"Aire totale du canevas: "<< canevas.aire() <<endl;
	cout << "" <<endl;
	cout << "Quatrieme test" <<endl;
	cout << "" <<endl;
	cout << "-----------------------------------------------" <<endl;	
	canevas.reinitialiser();
	canevas.afficher(cout);
	cout << "-----------------------------------------------" <<endl;
	cout << "" <<endl;
	cout<<"Aire totale du canevas: "<< canevas.aire() <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	cout << "" <<endl;
	cout << "─▄██▄██▄" <<endl;
	cout << "─▀█████▀" <<endl;
	cout << "───▀█▀" <<endl;
	
	
		
	
	
	
}

void Tests::tests_application_cas_02()
{
	cout << "TESTS APPLICATION (CAS 02)" << endl;  
	// Il faut ajouter les operations realisant ce scenario de test.
	cout << "Création d'un canevas" << endl<< endl;
	Canevas canevas2;
	cout<<"Activation de la couche 3" << endl << endl;
	canevas2.activerCouche(3);
	cout<< "Ajout de forme dans la couche 3"<< endl<<endl;
   	Forme* rectangle1 = new rectangle(7,5,5,4);
	Forme* carre1 = new carre(2,3,4);
	Forme* cercle1 = new cercle(3,3,1);
	Forme* carre2 = new carre(0,0,2);
	canevas2.ajouterForme(rectangle1);
	canevas2.ajouterForme(carre1);
	canevas2.ajouterForme(cercle1);
	canevas2.activerCouche(2);
	Forme* rectangle2 = new rectangle(0,0,3,5);
	canevas2.ajouterForme(rectangle2);
	canevas2.afficher(cout);
	cout<<"Aire totale du canevas: "<< canevas2.aire() <<endl<<endl<<endl;
	canevas2.activerCouche(0);
	Forme* carre3 = new carre(0,0,6);
	canevas2.ajouterForme(carre3);
	
	
	
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
