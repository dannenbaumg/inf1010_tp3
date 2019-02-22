#include "client.h"


Client::Client()
{
	nom_ = "inconnu";
	prenom_ = "inconnu";
	tailleGroupe_ = 0;
	statut_ = Occasionnel;
}

Client::Client(string nom, string prenom, int tailleGroupe)
{
	nom_ = nom;
	prenom_ = prenom;
	tailleGroupe_ = tailleGroupe;
	statut_ = Occasionnel;
}

Client::~Client()
{
}

StatutClient Client::getStatut()
{
	return statut_;
}

int Client::getTailleGroupe()
{
	return tailleGroupe_;
}

string Client::getNom()
{
	return nom_;
}

string Client::getPrenom()
{
	return prenom_;
}

string Client::convertirStatutString() const
{
	switch (statut_) {
		case Occasionnel:
			return "Occasionnel";
		break;
		case Fidele:
			return "Regulier";
		break;
		case Prestige:
			return "Prestige";
		break;
	}
}

ostream & operator<<(ostream & os, const Client & client)
{
	os << client.nom_[0] << client.prenom_ << "statut : " << client.convertirStatutString();
	return os;
}
