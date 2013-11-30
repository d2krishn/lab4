/*
 * medicalimg.hpp
 *
 *  Created on: Nov 26, 2013
 *      Author: jlogeswa
 */

#include<string>
#ifndef MEDICALIMG_HPP_
#define MEDICALIMG_HPP_
using namespace std;

class medicalimg {
protected:
string ptFname;
string ptLname;
string bloodtype;
string gender;
public:
        medicalimg();
};

class mri:public medicalimg{
protected:
int trigtime;
int echonumber;
int numbavg;
int heartrate;
public:
mri();
void mritest();
};



class xray:public medicalimg{
protected:
int rpointer;
int sampleperpixel;
int rwp;

public:
xray();
void xraytest();
};

class ultrasound:public medicalimg{
protected:
int stagenumb;
int highr;
int highbit;


public:
ultrasound();
void ultrasoundtest();
};

class TextFile: public medicalimg{

protected:
    int hdl;
public:
    TextFile();
void TextOutput();

};

class Annotate: public medicalimg{

protected:
	string Ant;
public:
	Annotate();
	void Annotating();
};



#endif /* MEDICALIMG_HPP_ */
