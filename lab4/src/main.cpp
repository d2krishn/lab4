/*
 * main.cpp
 *
 *  Created on: Nov 29, 2013
 *      Author: d2krishn
 */

#include <iostream>
#include <fstream>
#include "physicaltest.hpp"

using namespace std;

int main() {

std::ofstream output2("Preport.txt", std::ios_base::out|ios::app);

string patientname, bloodtype;
int choice, testchoice, displaychoice, docchoice;
vsigns test1; urinet test2; uculture test3;
char addcomment;


cout << "Patient chart system" <<endl;
cout <<"********************************" <<endl;
cout << "Please enter the following patient information" <<endl;
cout << "Please enter the patient's name:" <<endl;
cin >> patientname;
cout << "Please enter the patient's blood type:" <<endl;
cin >> bloodtype;

output2 << "Patient's name: " << patientname << "\t\t";
output2 << "Patient's blood type: " << bloodtype << endl;

while(int loop=1){
    cout << "Please choose from the following " <<endl;
    cout << "To add a test\t\t\t\t\t1"<<endl;
    cout << "To add an annotation\t\t\t\t2" <<endl;
    cout << "To generate reports\t\t\t\t3" <<endl;
    cin >> choice;

    switch(choice){
    case 1:
        cout << "What type of test would you like to add:" <<endl;
        cout << "Vital Signs\t\t\t\t\t1" <<endl;
        cout << "Urine Test\t\t\t\t\t2" <<endl;
        cout << "Urine Culture Test\t\t\t\t3" <<endl;
        cin >>testchoice;


        if (testchoice == 1){
            test1.vsignstest();
            cout << "Enter Y/y to add an annotation to this report, or N/n to not add an annotation:" <<endl;
            cin >> addcomment;
            if (addcomment == 'Y' || addcomment == 'y'){
                test3.annotation1();
                cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
            }
            else if (addcomment == 'N' || addcomment =='n'){
                loop=1;
                cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
            }
        }

        else if (testchoice == 2){
            test2.urinetresults();
            cout << "Enter Y/y to add an annotation to this report, or N/n to not add an annotation:" <<endl;
            cin >> addcomment;
            if (addcomment == 'Y' || addcomment == 'y'){
                test2.annotation1();
                cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
            }
            else if (addcomment == 'N' || addcomment =='n'){
                loop=1;
                cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
            }
        }

        else if (testchoice == 3){
            test3.ucultureresults();
            cout << "Enter Y/y to add an annotation to this report, or N/n to not add an annotation:" <<endl;
            cin >> addcomment;
            if (addcomment == 'Y' || addcomment == 'y'){
                test3.annotation1();
                cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
            }
            else if (addcomment == 'N' || addcomment =='n'){
                loop=1;
                cout << "Please generate this test result before allowing doctor to add annotation." <<endl;
            }
        }
        break;

    case 2:
        cout << "*********************************************************" <<endl;
        cout << "Doctors, please make an annotation here." <<endl;
        cout <<    "Please enter 1 Physical Tests annotation:" <<endl;
        cin >> docchoice;

        if (docchoice ==1){
            physicalt addAnnotation1;
            addAnnotation1.docannotation();
        }
        break;

    case 3:
        cout << "Which test would you like to display:" <<endl;
        cout << "Vital Signs\t\t\t\t\t1" <<endl;
        cout << "Urine Test\t\t\t\t\t2" <<endl;
        cout << "Urine Culture Test\t\t\t\t3" <<endl;
        cin >>displaychoice;

        if(displaychoice==1){
            test1.vsignsdisplay();
        }

        else if(displaychoice==2){
            test2.urinetdisplay();
        }

        else if(displaychoice==3){
            test3.uculturedisplay();
        }
        break;
    }
}
}



