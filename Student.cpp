#include "Student.h"

Student::Student(int id, std::string name, int age) {
    m_Id = id;
    m_Name = name;
    m_Age = age;
}

int Student::GetId() const noexcept {
    return m_Id;
}
std::string Student::GetName() const noexcept {
    return m_Name;
}
int Student::GetAge() const noexcept {
    return m_Age;
}

void Student::SetId(int newId) noexcept {
    m_Id = newId;
}
void Student::SetName(std::string newName) noexcept {
    m_Name = newName;
}
void Student::SetAge(int newAge) noexcept {
    m_Age = newAge;
}