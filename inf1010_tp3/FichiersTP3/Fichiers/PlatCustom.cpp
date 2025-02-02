#include "PlatCustom.h"

PlatCustom::PlatCustom(string nom, double prix, double cout, int nbIngredients)
{
	nom_ = nom;
	prix_ = prix;
	cout_ = cout;
	nbIngredients_ = nbIngredients;
	supplement_ = calculerSupplement(); 
	type_ = Custom;
}

int PlatCustom::getNbIngredients() const
{
	return nbIngredients_;
}

double PlatCustom::getSupplement() const
{
	return supplement_;
}

void PlatCustom::setNbIngredients(int nIngredients)
{
	nbIngredients_ = nIngredients;
}

double PlatCustom::calculerSupplement() const
{
	return (nbIngredients_*FRAIS_CUSTOMISATION);
}

ostream & operator<<(ostream & os, const PlatCustom & plat)
{
	os << "contient " << plat.nbIngredients_ << " element modifier pour un supplement total de : " << plat.supplement_ << endl;
	return os; 
}
