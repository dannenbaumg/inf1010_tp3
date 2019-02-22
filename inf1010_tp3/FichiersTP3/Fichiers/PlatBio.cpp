#include "PlatBio.h"

using namespace std;



	// constructeurs
	PlatBio::PlatBio(string nom, double prix, double cout, double ecotaxe ) {
		nom_ = nom;
		prix_ = prix;
		cout_ = cout;
		ecoTaxe_ = ecotaxe;
		type_ = Bio;
	}

	//getters 
	double PlatBio :: getEcoTaxe() const{
		return ecoTaxe_;
	}

	//setters 
	void PlatBio ::setEcoTaxe(double ecoTaxe){
		ecoTaxe_ = ecoTaxe;
	}

	//methodes en plus 


	ostream & operator<<(ostream & os, const PlatBio & plat)
	{
		os << "comprend une taxe ecologique de : " << plat.ecoTaxe_ << endl;
		return os;
	}
