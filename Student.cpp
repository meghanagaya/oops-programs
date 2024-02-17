#include<iostream>
using namespace std;
class Student
{
public:
string fullName;
int rollNum;
double semPerentage;
string collegeName;
int collegeCode;
Student()
{
cout<<"Student class initialized!!\nIam a student\n";
}
~Student(){}

};
int main()
{
Student meghana;
cout<<"Enter your name : ";
getline(cin,meghana.fullName);
cout<<"Enter your roll number : ";
cin>>meghana.rollNum;
cout<<"Enter your sem percentage : ";
cin>>meghana.semPerentage;
cout<<"Enter your college name : ";
cin>>meghana.collegeName;
cout<<"Enter your college code : ";
cin>>meghana.collegeCode;
cout<<"Name : "<<meghana.fullName<<endl;
cout<<"RollNum : "<<meghana.rollNum<<endl;
cout<<"SemPercentage : "<<meghana.semPerentage<<endl;
cout<<"CollegeName : "<<meghana.collegeName<<endl;
cout<<"CollegeCode : "<<meghana.collegeCode<<endl;
return 0;
}
