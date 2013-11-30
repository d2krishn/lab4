/*
 * physicaltest.cpp
 *
 *  Created on: Nov 29, 2013
 *      Author: d2krishn
 */
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "physicaltest.hpp"
#include <fstream>
using namespace std;

std::ofstream output1("Preport.txt", std::ios_base::out|ios::app);
physicalt::physicalt(){
}

void physicalt::annotation1(){
    cout << "Patient name:" << endl;
    cin >> patientname;

    cout << "Patient Blood type:"<<endl;
    cin >> bloodtype;

}

void physicalt::docannotation(){
    string doc;
    string doccomment;

    cout << "Please enter your name " <<endl;
    cin >> doc;
    cout << "Please enter your comment:" <<endl;
    cin >> doccomment;
    output1 << "Name: " <<doc <<"\t\t\tComment: " << doccomment <<endl;
}

vsigns::vsigns(){
    bodytemp = 0;
    pulserate = 0;
    systolic = 0;
    diastolic = 0;
    resprate = 0;
}

void vsigns::vsignstest(){
cout << "Please enter the pulse rate:" << endl;
cin >> pulserate;

if(pulserate < 60){
cout << "Condition : Bradycarida"<<endl;
displaypulserate="Condition : BRADYCARIDA";
}
else if (pulserate >= 60 and pulserate <= 80){
cout << "Condition : Normal"<<endl;
displaypulserate=" Condition : Normal";
}

else if (pulserate > 100){
cout << "Condition : Tachyardia"<<endl;
displaypulserate="Condition : TACHYARDIA";
}

cout << "Please enter the systolic blood pressure:" << endl;
cin >> systolic;
cout << "Please enter the diastolic blood pressure:" << endl;
cin >> diastolic;

if(systolic <= 90 and diastolic <= 60 ){
cout << "Condition : Low blood pressure" << endl;
displaybpressure = "Condition : LOW BLOOD PRESSURE";
}
else if (systolic > 90 and systolic <=120 and diastolic >60 and diastolic <=80){
cout <<"Condition : Ideal blood pressure"<<endl;
displaybpressure = "Condition : IDEAL BLOOD PRESSURE";
}
else if (systolic >120 and systolic <= 140 and diastolic >80 and diastolic <=90){
cout <<"Condition : Pre-high blood pressure"<<endl;
displaybpressure="Condition : PRE-HIGH BLOOD PRESSURE";
}
else if (systolic >140 and systolic <=190 and diastolic >90 and diastolic <= 100){
cout << "Condition : High blood pressure"<<endl;
displaybpressure="Condition : HIGH BLOOD PRESSURE";
}

cout << "Please enter the body temperature:" << endl;
cin >> bodytemp;

if(bodytemp >37.5 ){
cout << "Condition : Fever"<<endl;
displaybodytemp= "Condition : FEVER";
}
else if (bodytemp <= 37.5 and bodytemp >= 36.5){
cout << "Condition : Normal"<<endl;
displaybodytemp ="Condition : NORMAL";
}
else if (bodytemp <35.0){
cout << "Condition : Hypothermia"<<endl;
displaybodytemp="Condition : HYPOTHERMIA";
}

cout << "Please enter the respiration rate:" << endl;
cin >> resprate;

if(resprate < 18.5){
cout << "Condition : Bradypnea"<< endl;
displayresprate="Condition : BRADYPNEA";
}
else if(resprate >= 18.5 and resprate <=24.9){
cout << "Condition : Normal"<< endl;
displayresprate="Condition : NORMAL";
}

else if (resprate > 24.9){
cout <<"Condition : Tachypnea"<< endl;
displayresprate ="Condition : TACHYPNEA";
}
}

urinet::urinet(){
   pH=0;
}

void urinet::urinetresults(){

cout << "Please enter the value of pH :" << endl;
cin >> pH;

if (pH >=4.6 and pH <=8.0){
cout << "Condition : Normal" <<endl;
displaypH = "Condition : NORMAL";
}
else{
cout << "Condition : Abnormal" <<endl;
displaypH = "Condition : ABNORMAL";
}

cout << "For the following, please enter P/p if the test is positive or N/n if the test is negative." <<endl;
cout << "Please enter the protein concentration:" << endl;
cin >> protein;

if (protein == "N" || protein == "n"){
cout << "Condition : Normal"<<endl;
displayprotein = "Condition : NORMAL";
}

else {
cout << "Condition : Abnormal"<<endl;
displayprotein = "Condition : ABNORMAL";
}

cout << "Please enter the sugar concentration:" << endl;
cin >> sugar;

if (sugar == "N" || sugar == "n"){
cout << "Condition : Normal"<<endl;
displaysugar ="Condition : NORMAL";
}

else {
cout << "Condition : Abnormal"<<endl;
displaysugar ="Condition : ABNORMAL";
}
cout << "Please enter the nitrite concentration:" << endl;
cin >> nitrite;

if (nitrite == "N" || nitrite == "n"){
cout << "Condition : Normal"<<endl;
displaynitrite ="NORMAL";
}

else {
cout << "Condition : Abnormal"<<endl;
displaynitrite ="Condition : ABNORMAL";
}

cout << "Please enter the ketone concentration:" << endl;
cin >> ketone;

if (ketone == "N" || ketone == "n"){
cout << "Condition : Normal"<<endl;
displayketone = "Condition : NORMAL";
}

else {
cout << "Condition : Abnormal"<<endl;
displayketone = "Condition : ABNORMAL";
}

cout << "Please enter the bilirubin concentration:" << endl;
cin >> billirubin;

if (billirubin == "Negative" || billirubin == "n"){
cout << "Condition : Normal"<<endl;
displaybillirubin = "Condition : NORMAL";
}

else {
cout << "Condition : Abnormal"<<endl;
displaybillirubin = "Condition : ABNORMAL";
}

cout << "Please enter the urobillinogen concentration:" << endl;
cin >> urobillinogen;

if (urobillinogen == "N" || urobillinogen == "n"){
cout << "Condition : Normal"<<endl;
displayurobillinogen = "Condition : NORMAL";
}

else {
cout << "Condition : Abnormal"<<endl;
displayurobillinogen = "Condition : ABNORMAL";
}

cout << "Please enter the red blood cells concentration:" << endl;
cin >> rbc;

if (rbc == "N" || rbc == "n"){
cout << "Condition : Normal"<<endl;
displayrbc = "Condition : NORMAL";
}

else {
cout << "Condition : Abnormal"<<endl;
displayrbc = "Condition : ABNORMAL";
}

cout << "Please enter the white blood cells concentration :" << endl;
cin >> wbc;

if (wbc == "N" || wbc == "n"){
cout << "Condition : Normal"<<endl;
displaywbc = "Condition : NORMAL";
}

else {
cout << "Condition : Abnormal"<<endl;
displaywbc = "Condition : ABNORMAL";
}
}

void uculture::ucultureresults(){

cout << "Please enter the size:" << endl;
cin >> size;

cout << "Please enter the color:" << endl;
cin >> color;

cout << "Please enter the form:" << endl;
cin >> form;

cout << "Please enter N/n if the result is normal or A/a if the result is abnormal:"<< endl;
cin >> result;

if (result == "N" || result == "n"){
cout << "Condition : Normal"<<endl;
displayresult = "Condition : NORMAL";
}

else if (result == "A" || result == "a"){
cout << "Condition : Abnormal" <<endl;
displayresult = "Condition : ABNORMAL";
}
}

void uculture::uculturedisplay(){

   output1 << "****************URINE CULTURE TEST RESULTS***************"<<endl;
   output1 << "Urine Culture Component\t\tCondition" <<endl;
   output1 << "Size\t\t\t\t"<<size<<"\t\t"<<endl;
   output1 << "Color\t\t\t\t"<<color<<"\t\t"<<endl;
   output1 << "Form\t\t\t\t"<<form<<"\t\t"<<endl;
   output1 << "Result\t\t\t\t"<<displayresult<<"\t\t"<<endl;
   output1 << "*********************************************************"<<endl;
   output1 <<"Patient Name:" <<patientname<<endl;
   output1 << "Patient Blood type" << bloodtype <<endl;
   output1 << "*********************************************************"<<endl;
}

void urinet::urinetdisplay(){

   output1 << "****************URINE TEST RESULTS***************"<<endl;
   output1 << "Urine Component\t\tValue\t\tCondition" <<endl;
   output1 << "pH\t\t\t"<<pH<<"\t\t"<<displaypH<<endl;
   output1 << "Protein\t\t\t"<<protein<<"\t"<<displayprotein<<endl;
   output1 << "Sugar\t\t\t"<<sugar<<"\t"<<displaysugar<<endl;
   output1 << "Nitrite\t\t\t"<<nitrite<<"\t"<<displaynitrite<<endl;
   output1 << "Ketone\t\t\t"<<ketone<<"\t"<<displayketone<<endl;
   output1 << "Bilirubin\t\t"<<billirubin<<"\t"<<displaybillirubin<<endl;
   output1 << "Urobilinogen\t\t"<<urobillinogen<<"\t"<<displayurobillinogen<<endl;
   output1 << "RedBloodCells\t\t"<<rbc<<"\t"<<displayrbc<<endl;
   output1 << "WhiteBloodCells\t\t"<<wbc<<"\t"<<displaywbc<<endl;
   output1 << "*********************************************************"<<endl;
   output1 <<"Patient name:" << patientname <<endl;
   output1 << "Patient bloodtype" << bloodtype <<endl;
   output1 << "*********************************************************"<<endl;

}

void vsigns::vsignsdisplay(){
   output1 << "****************VITAL SIGNS RESULTS***************"<<endl;
   output1 << "Vital Signs Component\t\tValue\t\tCondition" <<endl;
   output1 << "Pulse Rate\t\t\t"<<pulserate<<"\t\t"<<displaypulserate<<endl;
   output1 << "Blood Pressure:"<<"\t\t\t\t\t"<<displaybpressure<<endl;
   output1 << "Systolic Pressure\t\t"<<systolic<<endl;
   output1 << "Diastolic Pressure\t\t"<<diastolic<<endl;
   output1 << "displaybodytemp\t\t"<<bodytemp<<"\t\t"<<displaybodytemp<<endl;
   output1 << "Respiration Rate\t\t"<<resprate<<"\t\t"<<displayresprate<<endl;
   output1 << "*********************************************************"<<endl;
   output1 <<"Patient name:" << patientname <<endl;
   output1 << "Patient bloodtype" << bloodtype <<endl;
   output1 << "*********************************************************"<<endl;
}



