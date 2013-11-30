//============================================================================
// Name        : medicalimg.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "medicalimg.hpp"
#include <fstream>
using namespace std;
ofstream myfile;

medicalimg::medicalimg() {

}


mri::mri(){
	trigtime =0;
	echonumber =0;
    numbavg =0;
	heartrate =0;

}

void mri::mritest(){

     myfile.open ("bloodtest.txt", ofstream::app);




cout<<"Enter the  Trigger time "<<endl;
cin>> trigtime;


cout<<"Enter the Echo number "<<endl;
cin>>echonumber;


cout<<"Enter the number of times a given pulse sequence is repeated "<<endl;
cin>>numbavg;

cout<<"Enter the heart rate "<<endl;
	cin>>heartrate;


myfile<<"\n\nThe MRI Triger time is: "<<trigtime<<endl;
myfile << "The  MRI Echo number is: "<<echonumber<<endl;
myfile<<"The number of times a given pulse sequence is repeated is: "<< numbavg<<endl;
myfile << "The Heart rate is: "<<heartrate<<endl;
myfile.close();

}




xray::xray(){
	rpointer=0;
	sampleperpixel=0;
	rwp=0;
}

void xray::xraytest()
{
     myfile.open ("bloodtest.txt", ofstream::app);

    cout<<"please enter R wave pointer number"<<endl;
    cin >>rpointer;

    cout<<"please enter the number of samples per pixel"<<endl;
    cin >>sampleperpixel;

    cout<<"please enter the highest bit"<<endl;
      cin >>rwp;

myfile<<"\n\nThe R wave pointer number in the x-ray is: "<< rpointer<<endl;
myfile<<"\n\nThe Number of samples per pixel in the x-ray is: "<< sampleperpixel<<endl;
myfile<<"\n\nThe Highest Bit in the x-ray is: "<<rwp<<endl;
myfile.close();

}

ultrasound::ultrasound(){
	stagenumb =0;
	highr =0;
	highbit=0;
}

void ultrasound::ultrasoundtest (){

myfile.open ("bloodtest.txt", ofstream::app);


cout<<"please enter the stage number"<<endl;
cin>>stagenumb;



cout<<"please enter the highest R number"<<endl;
cin>>highr;

cout<<"please enter the highest bit number"<<endl;
cin>>highbit;




myfile<<"\n\nThe stagenumber on the ultrasound is: "<<stagenumb<<endl;
myfile << "The Highest R number on the ultrasound is: "<<highr<<endl;
myfile << "The Highest Bit number on the ultrasound is: "<<highbit<<endl;
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
cout<<"please input annotaiton:"<<endl;
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
