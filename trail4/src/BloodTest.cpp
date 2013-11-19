/*
 * BloodTest.cpp
 *
 *  Created on: Nov 19, 2013
 *      Author: bkapadia
 */

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "BloodTest.hpp"
using namespace std;


BloodTest::BloodTest() {
	cout<<"enter first name of patient"<<endl;
	cin>>ptFName;
	cout<<"enter last name of patient"<<endl;
	cin>>ptLName;
	cout<<"enter blood type"<<endl;
	cin>>bldType;
	cout<<"enter gender"<<endl;
	cin>>Gender;

}

void BloodTest::ptComments(string docName, string annotation)
{
cout<<"Enter name of doctor/nurse"<<endl;
cin>>docName;
cout<<"Enter notes regarding pt"<<endl;
cin>>annotation;
};


