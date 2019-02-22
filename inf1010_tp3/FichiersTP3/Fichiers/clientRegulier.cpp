#include "ClientRegulier.h"

ClientRegulier::ClientRegulier()
{
	nbPoints_ = 0;
}

ClientRegulier::ClientRegulier(string nom, string prenom, int tailleGroupe, int nbPoints)
{
	nom_ = nom;
	prenom_ = prenom;
	tailleGroupe_ = tailleGroupe;
	nbPoints_ = nbPoints;
	statut_ = Fidele;
}

int ClientRegulier::getNbPoints()
{
	return nbPoints_;
}

void ClientRegulier::augmenterNbPoints(int bonus)
{
	nbPoints_ += bonus;
}

ostream & operator<<(ostream & os, const ClientRegulier & client)
{
	os << "Posede " << client.nbPoints_ << " points." << endl;
	return os;

}
