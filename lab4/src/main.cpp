/*
 * main.cpp
 *
 *  Created on: Nov 29, 2013
 *      Author: jlogeswa
 */




#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "medicalimg.hpp"
#include <fstream>
using namespace std;

int main()
{
    ofstream myfile;
string bloodType;
string ptFName;
string ptLName;
string gender;
int selection1;
int selection2;
int selection3;

myfile.open ("medicalimg.txt", ofstream::out | ofstream::trunc);
	cout<<"Enter first Name of patient"<<endl;
	cin>>ptFName;
	cout<<"Enter last name of patient"<<endl;
	cin>>ptLName;
	cout<<"Enter blood type"<<endl;
	cin>>bloodType;


myfile<<"The patietns First Name Is: "<< ptFName<<endl;
myfile << "The Patients Last Name: "<<ptLName<<endl;
myfile << "The Patients Blood Type: "<<bloodType<<endl;


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
	cout<<"1. medical imaging "<<endl;
	cout<<"2. blood test"<<endl;
	cout<<"3. physical"<<endl;
	cin>>selection2;
		switch (selection2)
			{
			 	 case 1:
    {

			 		 	 cout<<"1.   to perfrom a mri"<<endl;
			 		 	 cout<<"2.   to perfrom a x-ray"<<endl;
			 		 	 cout<<"3.   to perform a ultrasound"<<endl;
						 cin>>selection3;
                                    if (selection3 == 1)
                            {
                                        mri mriObj;
                                        mriObj.mritest();

          }
                                    if (selection3 == 2)
                            {
                                        xray xrayObj;
                                        xrayObj.xraytest();

                            }
                                    if (selection3 == 3)
                                    {
                                        ultrasound ultrasoundObj;
                                        ultrasoundObj.ultrasoundtest();

                                    }

                    break;
                 default:
                     cout<<"not valid"<<endl;


    }
			 case 2:{
                            cout<<"physical stuff here..."<<endl;
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
