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

class physicalt{
protected:

public:
    string patientname;
    string bloodtype;
   physicalt();
void annotation1();
void docannotation();
};

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
        void vsignstest();
        void vsignsdisplay();
};

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
        void urinetresults();
        void urinetdisplay();
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
