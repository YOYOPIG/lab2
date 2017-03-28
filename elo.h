#include<math.h>
class elo
{
public:
	void setK(double K);
	void setR(int RA, int RB);
	void calculate(double SA, double SB);
	int getRA();
	int getRB();
private:
	double KK;
	double Ra;
	double Rb;
	double Ea;
	double Eb;
};
