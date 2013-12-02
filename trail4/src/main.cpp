#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "BloodTest.hpp"
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
string bldType;
string ptFName;
string ptLName;
char Gender;
int selection1;
int selection2;
int selection3;

myfile.open ("bloodtest.txt", ofstream::out | ofstream::trunc);
	cout<<"Enter first Name of patient"<<endl;
	cin>>ptFName;
	cout<<"Enter last name of patient"<<endl;
	cin>>ptLName;
	cout<<"Enter blood type"<<endl;
	cin>>bldType;


myfile<<"The patietns First Name Is: "<< ptFName<<endl;
myfile << "The Patients Last Name: "<<ptLName<<endl;
myfile << "The Patients Blood Type: "<<bldType<<endl;


while (1)
{
	cout<<"please select option below:"<<endl;
	cout<<"1----- do a  test"<<endl;
	cout<<"2----- do annotation"<<endl;
	cout<<"3----- diplay report"<<endl;
	cin>>selection1;
switch (selection1)
{
case 1:
	cout<<"please select the type of test you would like to perform:"<<endl;
	cout<<"1. blood test"<<endl;
	cout<<"2. medical imaging"<<endl;
	cout<<"3. physical"<<endl;
	cin>>selection2;
		switch (selection2)
			{
			 	 case 1:
    {

			 		 	 cout<<"1.   to perfrom blood count"<<endl;
			 		 	 cout<<"2.   to perfrom blood glucose"<<endl;
			 		 	 cout<<"3.   to perform lipo levels"<<endl;
						 cin>>selection3;
                                    if (selection3 == 1)
                            {
                                        bldCount bldCountObj;
                                        bldCountObj.BCount();

          }
                                    if (selection3 == 2)
                            {
                                        bldGlucose bldGlucoseObj;
                                        bldGlucoseObj.glucoseLevel();

                            }
                                    if (selection3 == 3)
                                    {
                                        LipoLevels LipoLevelsObj;
                                        LipoLevelsObj.LipoResutls();

                                    }

                    break;
                 default:
                     cout<<"not valid"<<endl;


    }
			 case 2:{
                            cout<<"medical imiaging stuff here.."<<endl;
                break;
                    }

			}
break;
case 2:
{



	Annotate AntObj;
	AntObj.Annotating();

    break;
}
case 3:
{


	cout<<"Text File for Full Report"<<endl;
        TextFile TextObj;
        TextObj.TextOutput();

	break;
}

default:
    cout<<"invalid chocie"<<endl;
break;

}
}

	return 0;
}

