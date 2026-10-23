#include <iostream>
#include <string.h>

class Student {
  private:
    std::string studentName;
    int studentAge;

//Constructor
  public:
  Student (std::string newName = "Jerry Matthew", int newAge = 19){
      studentName = std::move(newName);
      studentAge = newAge;
      std::cout << "Constructor Called." << std::endl;
  }
//Deconstructor
  ~Student(){
    std::cout << "Destructor Called." << std::endl;
  }
//Copy Constructor
  Student(const Student &copyStudent) {
    std::cout << "Copy Constructor Called" << std::endl;
    studentName = copyStudent.studentName;
    studentAge = copyStudent.studentAge;
  }
//Copy Assignment Operator

//Display Attributes
  void printDetails(){
    std::cout << this->studentName << " " << this->studentAge << std::endl;
  }
};


int main(){
  const size_t j = 5;

  Student studentList[j] = {};
  std::string nameList[j] = {"Jack", "Sebastian", "Edward", "Mark", "Kristian"};
  int ageList[j] = {18, 20, 18, 19, 21};   
  
  for(int i = 0; i < j; i++) {
    //loop A
    Student *ptr = new Student(nameList[i], ageList[i]);
    studentList[i] = *ptr;
  }
  for(int i = 0; i < j; i++){
    //loop B
    studentList[i].printDetails();
  }
  
  return 0;
}
