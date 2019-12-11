#include <iostream>
#include "stdio.h"
#include "string.h"
#include "Article.h"


Article::Article(std::string titre1, double prix1) {
	titre = titre1;
	prix = prix1;
	}

std::string Article::getTitre() const {
	return titre;
	}
	
double Article::getPrix() const{
	return prix;
	}

void Article::setTitre(std::string setitre) {
	titre = setitre;
	}
	
void Article::setPrix(double seprix) {
	prix = seprix;
	}
