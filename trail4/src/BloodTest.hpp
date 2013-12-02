/*
 * BloodTest.hpp
 *
 *  Created on: Nov 19, 2013
 *      Author: bkapadia
 */
#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

#ifndef BLOODTEST_HPP_
#define BLOODTEST_HPP_


//creates base  class for blood test this has all the common function between the shared amonst other classes
class BloodTest {
protected:

public:
	BloodTest();
	//void ptComments(string, string);
};
// blood count classe is created with the base class belonging to blood test
class bldCount: public BloodTest{
protected:
	int RBC;
	int WBC;
	int PlCount;
	int plasmaVolume;
    char Gender;


public:
	bldCount();
	void BCount();//creates a void Blood count with a bloodTest function
	//test for Red bloock count, white blood cell count, plasma volume, and gender
};
//creates a blood glucose clas that belongs to the base class Blood test
class bldGlucose: public BloodTest{
protected:
	int glucose;

public:
	bldGlucose();
	void glucoseLevel();
	//creates a glucose level class with blood test function
	// tests for glucose level in patients
};
//creats a sub clas of lipids levels
class LipoLevels: public BloodTest{
protected:
	int totalChl;
	int hdl;

public:
	LipoLevels ();
void LipoResutls();//creatse funtion for lipo results and asks for HDL and total cholestrol values
};
//creates a sub class for displaying an output into a report
class TextFile: public BloodTest{

protected:
    int hdl;
public:
    TextFile();
void TextOutput();
// creates funtion that allows the report file to be made and displayed onto terminal

};
//creates classs for user to make annotation with a class
class Annotate: public BloodTest{

protected:
	string Ant;
public:
	Annotate();
	void Annotating();//funtion for making annotation and using the variable Ant as the string
};


#endif /* BLOODTEST_HPP_ */

