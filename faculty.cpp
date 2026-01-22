/* 
faculty.cpp
Date: 1/12/2026
Author: Bryan Couzens

Description: Writes a class describing Faculty with basic attributes:
*/

#include <iostream>
#include <string>
using namespace std;

class Faculty {
    private:
        string firstName;
        string lastName;
        bool tenureStatus;
        int yearsAtUniversity;
        string officeNumber;
    public:
        // Mutators
        void setFirstName(const string& fName) {
            firstName = fName;
        }
        void setLastName(const string& lName) {
            lastName = lName;
        }
        void setTenureStatus(bool status) {
            tenureStatus = status;
        }
        void setYearsAtUniversity(int years) {
            yearsAtUniversity = years;
        }
        void setOfficeNumber(const string& officeNum) {
            officeNumber = officeNum;
        }
        // Accessors
        string getFirstName() const {
            return firstName;
        }
        string getLastName() const {
            return lastName;
        }
        bool getTenureStatus() const {
            return tenureStatus;
        }
        int getYearsAtUniversity() const {
            return yearsAtUniversity;
        }
        string getOfficeNumber() const {
            return officeNumber;
        }
};

int main() {
    Faculty prof;
    prof.setFirstName("John");
    prof.setLastName("Doe");
    prof.setTenureStatus(true);
    prof.setYearsAtUniversity(10);
    prof.setOfficeNumber("B123");

    cout << "Faculty Information:" << endl;
    cout << "Name: " << prof.getFirstName() << " " << prof.getLastName() << endl;
    cout << "Tenure Status: " << (prof.getTenureStatus() ? "Tenured" : "Non-Tenured") << endl;
    cout << "Years at University: " << prof.getYearsAtUniversity() << endl;
    cout << "Office Number: " << prof.getOfficeNumber() << endl;

    return 0;
}