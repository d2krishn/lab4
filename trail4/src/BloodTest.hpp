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
private:
	string bldType;
	string ptName;
public:
	BloodTest();
};

class bldCount: public BloodTest{
private:
	int RBC;
public:
	void RBCount();
};

class bldGlucose: public BloodTest{
private:
	int glucose;

public:
	void glucoseLevel();
};

class Lipoprotein: public BloodTest{
private:

public:

};

#endif /* BLOODTEST_HPP_ */

