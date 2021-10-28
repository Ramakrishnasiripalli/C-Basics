#include<stdio.h>
void main()
{
	// variable declaration
	int phy, che, mat, eng, tot;
	
	// initilization
	phy = 72;
	che = 52;
	mat = 60;
	eng = 80;
	
	// calculation
	tot = phy+che+mat+eng;
	
	// output
	printf("student marks in physics; %d\n",phy);
	printf("studen marks in chemistry; %d\n",che);
	printf("student marks in maths; %d\n",mat);
	printf("student marks in english; %d\n",eng);
	printf("student total marks; %d", tot);
	
}
