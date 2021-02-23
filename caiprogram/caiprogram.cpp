// caiprogram.cpp : main project file.

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string>
#include<iomanip>
using namespace std;


int main()
{
	srand(time(0));
	int tamangsagot,sagotmo,una,pangalawa,trial=1;
	una=1+rand()%10;
	pangalawa=1+rand()%10;
	tamangsagot=una+pangalawa;
	do{
    cout<<"Ilan ang "<<una<<" + "<<pangalawa<<" ? Trial "<<trial<<" ";
	cin>>sagotmo;
	if(sagotmo==tamangsagot)
	{
		cout<<"Tama ka dyan! "<<endl;
		break;
	}
    if(sagotmo!=tamangsagot && trial<3)
          cout<<"Mali ka dyan! "<<endl;
     trial=trial+1;
	}while(trial<=3);
	   if(sagotmo!=tamangsagot)
		   cout<<"Ang tamang sagot ay "<<tamangsagot<<endl;
    system("pause");
}
