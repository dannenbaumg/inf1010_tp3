/*
* Titre : Table.h - Travail Pratique #3
* Date : 11 Fevrier 2019
* Auteur : Fatou S. Mounzeo
*/

#ifndef TABLE_H
#define TABLE_H

#include "Menu.h"
#include "PlatCustom.h"
#include "ClientPrestige.h"
#include <vector>

class Table {
public:
	//constructeurs
	Table();
	Table(int id, int nbPlaces);


	//getters
	int getId() const;
	int getNbPlaces() const;
	bool estOccupee() const;
	bool estPleine() const; 
	int getNbClientsATable() const; 
	vector<Plat*> getCommande() const;
	Client* getClientPrincipal() const; 
	double getChiffreAffaire() const;


	//setters
	void libererTable(); 
	void placerClients(int nbClients);
	void setId(int id);
	void setClientPrincipal(Client* clientPrincipal); 

	//autres methodes
	void commander(Plat* plat);

	//affichage

	friend ostream& operator<<(ostream& os, const Table& table); 

private :
	vector<Plat*> commande_;
	int id_;
	int nbPlaces_;
	int nbClientsATable_; 
	Client* clientPrincipal_;
	

};
#endif // !TABLE_H
