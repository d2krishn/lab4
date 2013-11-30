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



class BloodTest {
protected:

public:
	BloodTest();
	//void ptComments(string, string);
};

class bldCount: public BloodTest{
protected:
	int RBC;
	int WBC;
	int PlCount;
	int plasmaVolume;
    char Gender;


public:
	bldCount();
	void BCount();
};

class bldGlucose: public BloodTest{
protected:
	int glucose;

public:
	bldGlucose();
	void glucoseLevel();
};

class LipoLevels: public BloodTest{
protected:
	int totalChl;
	int hdl;

public:
	LipoLevels ();
void LipoResutls();
};

class TextFile: public BloodTest{

protected:
    int hdl;
public:
    TextFile();
void TextOutput();

};

class Annotate: public BloodTest{

protected:
	string Ant;
public:
	Annotate();
	void Annotating();
};


#endif /* BLOODTEST_HPP_ */

