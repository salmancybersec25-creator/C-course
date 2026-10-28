#include <iostream>
#include <string>
using namespace std;

class Teacher {
  //Properties   or attributes
  private:
    double salary;

  public:
  //constructor //non parameterized
//   Teacher() {
//     cout << "Hi, I am constu=ructor\n";
//   }

  //Parameterized constructor
  // Teacher(string n, string d, string s, double sal) {
  //   name = n;
  //   dept = d;
  //   subject = s;
  //   salary = sal;
  // }

// OR

  // Teacher(string name, string dept, string subject, double salary) {
  //   this->name = name;
  //   this->dept = dept;
  //   this->subject = subject;
  //   this->salary = salary;
  // } 

   // copy constructor
    Teacher (Teacher &orgObj) {
      cout << "I am custom constructor"<<endl;
      this->name = orgObj.name;
       this->dept = orgObj.dept;
        this->subject = orgObj.subject;
         this->salary = orgObj.salary;

      
    }

  string name;
  string dept;
  string subject;
  float salary;
   
  //Methods  or member functions

  
  void changeDept(string newDept) {
    dept = newDept;
  }
   //Setter
  void setsalary(double s) {
    salary = s;
  }
  //Getter
  double getsalary() {
    return salary;
  }
  void getinfo (){
    cout<< "name "<< name << endl;
    cout << "subject " << subject << endl;
  
  }

};
   int main(){
    // Teacher t1;
    //    t1.name = "Salman";
    //    t1.subject = "C++";
    //    t1.dept = "Computer Science";
    //    t1.setsalary(250000);

    //    cout << t1.name << endl;
    //    cout << t1.getsalary() << endl;
    //    return 0;

    //for parameterized constructor
      
    Teacher t1("Salman","Computer science","c++",339999);

    // t1.getinfo();   
  
    Teacher t2(t1);   // default copy constructor
    t2.getinfo();
    return 0; 
    
 } 