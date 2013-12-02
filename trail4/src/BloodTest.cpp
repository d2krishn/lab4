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
//constructor class for bloodtest
BloodTest::BloodTest() {

}

//initates variables used in class
bldCount::bldCount(){
	RBC = 0;
	WBC = 0;
	PlCount = 0;
	plasmaVolume = 0;
    Gender = 0;
}

void bldCount::BCount(){

     myfile.open ("bloodtest.txt", ofstream::app);//opens bloodtest .txt  file on text for appending




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



cout<<"Enter the plasma glucose volume in (mg/dL) "<<endl;
cin>>plasmaVolume;//stores value of plasma glucose and advises if patient is diabetic or not
if (plasmaVolume>=70 && plasmaVolume<=99 )
    cout<<"The diagnosis is NORMAL "<<endl;
else if  (plasmaVolume>=100 && plasmaVolume<=125 )
    cout<<"The diagnosis is pre-diabetic"<<endl;
else
cout<<"the diagnosis is diabetes"<<endl;






cout<<"Enter gender, Please enter M/m for Male or F/f for female"<<endl;
	cin>>Gender;//patient is verified as being a male or female

switch(Gender){

    case 'M': case'm':{
        cout<<"Please enter total red blood count"<<endl;
        cin>> RBC;//stores value of red blood cells and compares it to normal ranges for either men or women depending on previus input
    if (RBC> 5000000 && RBC <= 6000000)
            cout<<"the blood level is normal for a men"<<endl;
    else
    cout<<"The count is out of normal range for a men"<<endl;
break;}
    case 'F': case 'f':{
        cout<<"Please enter total red blood count"<<endl;
        cin>> RBC;
    if( RBC>= 4000000 && RBC <= 5000000)

    cout<<"The blood level is normal for a female"<<endl;
    else
    cout<<"The count is out of normal range for a female"<<endl;
break;
    }
    default:
        cout<<"input invalid"<<endl;









 break;
}
//stores record of patient on .txt  file and displays it on output display
myfile<<"\n\nThe patients total RBC is: "<< RBC<<endl;
myfile << "The patients total WBC is: "<<WBC<<endl;
myfile<<"The patients total plasma is: "<< PlCount<<endl;
myfile << "The patients plasma Volume is: "<<plasmaVolume<<endl;
myfile.close();

}


bldGlucose::bldGlucose(){
glucose = 0;
}
//
void bldGlucose::glucoseLevel()
{
     myfile.open ("bloodtest.txt", ofstream::app);//add opens .txt  file for appending

    cout<<"please enter glucose level"<<endl; //stores value of glucose in variable glucose
    cin >>glucose;
//compares the glucose levels with normal range and diagnosis as normal or diabetic
        if (glucose >= 70 && glucose <= 99)
        cout<<"glucose level is NORMAL"<<endl;

        else if (glucose>= 100 && glucose <=125)
            cout<<"glucose level is PREDIABETIC "<<endl;
        else if (glucose >=126)
            cout<<"glucose level is DIABETIC"<<endl;
        else
            cout<<"inaccurate value"<<endl;


myfile<<"\n\nThe patietns glucose is: "<< glucose<<endl; //stores the output on to file  and displays on to terminal
myfile.close();

}
//lipolevel class has function for lipid cholestrol and HDL and initaites the variables
LipoLevels::LipoLevels(){
totalChl = 0;
hdl=0;
}

void LipoLevels::LipoResutls(){

myfile.open ("bloodtest.txt", ofstream::app);// opens file for  appending


cout<<"please enter total cholesterol of patient in mg/dl"<<endl;
cin>>totalChl; //stores value of total cholesterol
//compares value of totalChl and gives diagnosis of the patient
if (totalChl< 200)
    cout<<" the Total chl. is DESIREABLE"<<endl;
else if (totalChl>= 200 && totalChl<= 239)
    cout<<"The total chl is BORDERLINE HIGH"<<endl;
else if (totalChl > 240)
    cout<<"The total chl is HIGH"<<endl;
else
    cout<<"inaccurate value"<<endl;

cout<<"please enter total HDL cholesterol of the patient in mg/dl"<<endl;
cin>>hdl; //stores value of HDL in the variable hdl
//compares value of hdl to see if its normal and compares to
if (hdl< 40)
    cout<<" the total HDL is MAJOR RISK"<<endl;
else if (hdl>= 40 && hdl<= 59)
    cout<<"the total HDL is  CAN BE BEtTeR"<<endl;
else if (hdl > 60)
    cout<<"the total HDL is PROTECtive AGAINST Heart DIsease"<<endl;
else
    cout<<"inaccurate value"<<endl;


myfile<<"\n\nThe patients total cholestrol is: "<< totalChl<<endl;//
myfile << "The Patients total HDL is: "<<hdl<<endl;/
//stores value into results file and displays in terminal when asked

myfile.close();
}
//creates class for displaying the file in the terminal .txt
TextFile::TextFile(){

};

void TextFile::TextOutput(){ //opens the bloodtest file and reads and outputs the content of the file on to the display
cout<<" ----REPORT----"<<endl;
string line;
  ifstream myfile ("bloodtest.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      cout << line << endl;
    }
    myfile.close(); //closes .txt file
  }

  else cout << "Unable to open file"<<endl;



myfile.close();
};


//class for making annotation and string Ant is initialized
Annotate::Annotate(){
string Ant;

}


void Annotate::Annotating(){
	myfile.open ("bloodtest.txt", ofstream::app); //opens .txt ile for appending
cout<<"please input annotaiton followed by Enter key:"<<endl;
cin>>Ant;
//stores annotation and displays in the .txt file

myfile << "The annotation was: "<<Ant<<endl;//calls annotaiton from text file
    myfile.close();//closes txt file

};

