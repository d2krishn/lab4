/*
 * physicaltest.hpp
 *
 *  Created on: Nov 29, 2013
 *      Author: d2krishn
 */

#include <iostream>
#include <string.h>
#include <stdlib.h>

#ifndef PHYSICALTEST_HPP_
#define PHYSICALTEST_HPP_
#include <string>

using namespace std;
//creates base  class for physical tests.The common function is shared among other classes
class physicalt{
protected:

public:
    string patientname;
    string bloodtype;
   physicalt();
void annotation1();
void docannotation();
};
// vital signs class is created. The physicalt class is also included
class vsigns:public physicalt{
protected :
        float bodytemp;
        int pulserate;
        int resprate;
        //int bpressure;
        int systolic;
        int diastolic;
        string displaybodytemp,displaypulserate,displayresprate,displaybpressure;

public:
        vsigns();
        void vsignstest();//Test for vital signs .
        void vsignsdisplay();// The output is displayed
};
// This class is created for urine tests. physicalt class is also included
class urinet:public physicalt{
protected :
    float pH;
string protein;
string sugar;
string nitrite;
string ketone;
string billirubin;
string urobillinogen;
string rbc;
string wbc;
string displaypH,displayprotein,displaysugar,displaynitrite,displayketone,displaybillirubin,displayurobillinogen,displayrbc,displaywbc;
public:
        urinet();
        void urinetresults();//urine test results
        void urinetdisplay();//The urine test results are displayed
};

class uculture:public physicalt{
protected:
string size;
string color;
string form;
string result;
string displayresult;

public:
void ucultureresults();
void uculturedisplay();
};


#endif /* PHYSICALTEST_HPP_ */
