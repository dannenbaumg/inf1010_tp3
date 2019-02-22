#include "ClientPrestige.h"

ClientPrestige::ClientPrestige()
{
	addresse_ = Zone3;
}


ClientPrestige::ClientPrestige(string nom, string prenom, int tailleGroupe, int nbPoints, AddressCode addresse)
{
	nom_ = nom;
	prenom_ = prenom;
	tailleGroupe_ = tailleGroupe;
	nbPoints_ = nbPoints;
	addresse_ = addresse;
	statut_ = Prestige;
}

AddressCode ClientPrestige::getAddresseCode()
{
	return addresse_;
}

string ClientPrestige::getAddressCodeString()
{
	switch (addresse_) {
	case Zone1:
		return "Zone 1";
		break;
	case Zone2:
		return "Zone 2";
		break;
	case Zone3:
		return "Zone 3";
		break;
	}
}

ostream & operator<<(ostream & os, ClientPrestige client)
{
	os << "Habite dans la zone " << client.getAddressCodeString() << endl;
	return os;
}
