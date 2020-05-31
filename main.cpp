#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float playerGA(float goal, float matches, float assist) 
{

	bool b1 = false,b2 =false, b3=false;
	float GAratio = 0;
	if (goal>=0 && goal<=15)
		b1 = true;
	if (matches >= 0 && matches <= 7)
		b2 = true;
	if (assist>=0 && assist<=10)
		b3 = true;
	if (b1 == true && b2 == true && b3 == true)
	{
		if (matches != 0)
			GAratio = ((2*goal) + assist) / matches;
		else
			cout << "invalid" << endl;
	}
	else 
		cout << "N/A" << endl;

	return GAratio;

}

void GAratio(float GAratio)

{
	if (GAratio<=0)
		cout<<"invalid"<<endl;
	else if(GAratio>0 && GAratio<10)
		cout<<"Bad Season"<<endl;
	else if(GAratio>=10 && GAratio<=40)
		cout<<"Great Season"<<endl;
	else
		cout<<"invalid"<<endl;
}

void CSratio (float matches, float CS)

{

	bool b1 = false, b2 = false;
	float CSratio=0;
	if (matches > 0 && matches < 8)
		b1 = true;
	if (CS > 0 && CS < 8 && CS<=matches)
		b2 = true;
	if (b1 == true && b2 == true)
	{
		CSratio=CS/matches;
		cout<<CSratio<<endl;
	}
	else
		cout << "Invalid" << endl;
}

int main() 
{

	int goal = 6, matches = 3, assist = 8 ,CS=2;
	float GAR = 0;
	GAR = playerGA(goal, matches, assist);
	cout<<"Goal/Assist Ratio="<<GAR<<endl;
	GAratio(GAR);
	CSratio(matches,CS);
	return 0;
}
