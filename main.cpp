#include<iostream>
#include<fstream>
#include<cstdlib>
#include"elo.h"
using namespace std;

int main()
{
	int RA,RB;
	double EA,EB,K,SA,SB;
	elo Rank_sys;
	//read file
	ifstream inFile("file.in",ios::in);
	if(!inFile)
	{
		cerr<<"Failed to open file"<<endl;
		exit(1);
	}
	//write file
	ofstream outFile("file.out",ios::out);
	if(!outFile)
	{
		cerr << "Failed opening" << endl;
		exit(1);
	}
	
	//read in
	inFile>>K>>RA>>RB;
	outFile<<RA<<" "<<RB<<endl; //output first line
	
	//set
	Rank_sys.setK(K);
	Rank_sys.setR(RA,RB);
	
	while(inFile>>SA)
	{
		//calculations
		SB = 1-SA;
		Rank_sys.calculate(SA,SB);
		RA = Rank_sys.getRA();
		RB = Rank_sys.getRB();
		//output
		outFile<<RA<<" "<<RB<<endl;
	}
	
	return 0;
}
