#include "Student.h"
#include <iostream>
#include<cstring>

using namespace std;
// Assign studentId and name
void Student::assignDetails(int SId, const char Sname[]) {

  strcpy(name,Sname);
  SId=studentId;
}

// Display StudentId and Name
void Student::display() {


cout<<endl<<"Student name: "<<name<<endl;
  cout<<"Student Id: "<<studentId<<endl;
  
}
