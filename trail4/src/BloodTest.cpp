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
#include <fstream>
using namespace std;
ofstream myfile;

BloodTest::BloodTest() {

}


bldCount::bldCount(){
	RBC = 0;
	WBC = 0;
	PlCount = 0;
	plasmaVolume = 0;
    Gender = 0;
}

void bldCount::BCount(){

     myfile.open ("bloodtest.txt", ofstream::app);//creats bloodtest file on text




cout<<"Enter the number of WHITE BLOOD cell counts in (cell/mcL) "<<endl;
cin>>WBC;//stores value of WBC and checks if its within normal range
if (WBC>=4500 && WBC<=100000 )
    cout<<"The WBC count is NORMAL "<<endl;
else
    cout<<"The WBC count is OUT of NORMAL RANGE"<<endl;



cout<<"Enter the number of platelets count in (cell/mcL) "<<endl;
cin>>PlCount;//stores value of plasma count and compares it to the normal range of plasma count
if (PlCount>=140000 && PlCount<=450000 )
    cout<<"The platelets count is NORMAL "<<endl;
else
    cout<<"The platelets count is OUT of NORMAL RANGE"<<endl;



cout<<"Enter the plasama glucose volume in (mg/dL) "<<endl;
cin>>plasmaVolume;//stores value of plasma glucose and advises if patient is diabetic or not
if (plasmaVolume>=70 && plasmaVolume<=99 )
    cout<<"The diagnosis is NORMAL "<<endl;
else if  (plasmaVolume>=100 && plasmaVolume<=125 )
    cout<<"The diagnosis is prediabetic"<<endl;
else
cout<<"the diagnosis is diabetes"<<endl;






cout<<"Enter gender, Please enter M/m for Male or F/f for female"<<endl;
	cin>>Gender;//patient is verified as being a male or female

switch(Gender){

    case 'M': case'm':{
        cout<<"please enter total red blood count"<<endl;
        cin>> RBC;//stores value of red blood cells and compares it to normal ranges for either men or women depending on previus input
    if (RBC> 5000000 && RBC <= 6000000)
            cout<<"the blood level is normal for a men"<<endl;
    else
    cout<<"the count is out of normal range for a men"<<endl;
break;}
    case 'F': case 'f':{
        cout<<"please enter total red blood count"<<endl;
        cin>> RBC;
    if( RBC>= 4000000 && RBC <= 5000000)

    cout<<"the blood level is normal for a female"<<endl;
    else
    cout<<"the count is out of normal range for a female"<<endl;
break;
    }
    default:
        cout<<"input invalid"<<endl;









 break;
}
//stores record of patient on file
myfile<<"\n\nThe patietns total RBC is: "<< RBC<<endl;
myfile << "The Patietns total WBC is: "<<WBC<<endl;
myfile<<"The patietns total plama is: "<< PlCount<<endl;
myfile << "The Patietns plasma VOlume HDL is: "<<plasmaVolume<<endl;
myfile.close();

}


bldGlucose::bldGlucose(){
glucose = 0;
}
//
void bldGlucose::glucoseLevel()
{
     myfile.open ("bloodtest.txt", ofstream::app);

    cout<<"please enter glucose level"<<endl;
    cin >>glucose;

        if (glucose >= 70 && glucose <= 99)
        cout<<"glucose level is NORMAL"<<endl;

        else if (glucose>= 100 && glucose <=125)
            cout<<"glucose level is PREDIABETIC "<<endl;
        else if (glucose >=126)
            cout<<"glucose level is DIABETIC"<<endl;
        else
            cout<<"inaccurate value"<<endl;


myfile<<"\n\nThe patietns glucose is: "<< glucose<<endl;
myfile.close();

}

LipoLevels::LipoLevels(){
totalChl = 0;
hdl=0;
}

void LipoLevels::LipoResutls(){

myfile.open ("bloodtest.txt", ofstream::app);


cout<<"please enter total cholestrol of pateint in mg/dl"<<endl;
cin>>totalChl;

if (totalChl< 200)
    cout<<" the total chl. is DESIREABLE"<<endl;
else if (totalChl>= 200 && totalChl<= 239)
    cout<<"the total chl is BORDERLINE HIGH"<<endl;
else if (totalChl > 240)
    cout<<"the total chl is HIGH"<<endl;
else
    cout<<"inaccurate value"<<endl;

cout<<"please enter total HDL cholestrol of the patient in mg/dl"<<endl;
cin>>hdl;

if (hdl< 40)
    cout<<" the total HDL is MAJOR RISK"<<endl;
else if (hdl>= 40 && hdl<= 59)
    cout<<"the total HDL is  CAN BE BEtTeR"<<endl;
else if (hdl > 60)
    cout<<"the total HDL is PROTECtive AGAINST Heart DIsease"<<endl;
else
    cout<<"inaccurate value"<<endl;


myfile<<"\n\nThe patients total cholestrol is: "<< totalChl<<endl;
myfile << "The Patients total HDL is: "<<hdl<<endl;

myfile.close();
}

TextFile::TextFile(){

};

void TextFile::TextOutput(){
cout<<" ----REPORT----"<<endl;
string line;
  ifstream myfile ("bloodtest.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << endl;
    }
    myfile.close();
  }

  else cout << "Unable to open file"<<endl;



myfile.close();
};



Annotate::Annotate(){
string Ant;

}


void Annotate::Annotating(){
	myfile.open ("bloodtest.txt", ofstream::app);
cout<<"please input annotaiton followed by Enter key:"<<endl;
cin>>Ant;


myfile << "The annotation was: "<<Ant<<endl;
    myfile.close();

};
/*void BloodTest::ptComments(string docName, string annotation)
{
cout<<"Enter name of doctor/nurse"<<endl;
cin>>docName;
cout<<"Enter notes regarding pt"<<endl;
cin>>annotation;
};
*/
