#include"elo.h"

void elo::setK(double K)
{
	KK = K;
}

void elo::setR(int RA, int RB)
{
	Ra = RA;
	Rb = RB;
}

void elo::calculate(double SA, double SB)
{
	Ea = pow(10,(Rb-Ra)/400);
	Eb = pow(10,(Ra-Rb)/400);
	Ea = 1/(Ea+1);
	Eb = 1/(Eb+1);
	
	Ra = Ra + KK*(SA-Ea);
	Rb = Rb + KK*(SB-Eb);
}

int elo::getRA()
{
	return round(Ra);
}
int elo::getRB()
{
	return round(Rb);
}
