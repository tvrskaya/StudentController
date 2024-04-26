#pragma once
#include <string>

class Student {
private:
    int m_Id;
    std::string m_Name;
    int m_Age;
public:
    Student()=default;
    Student(int id, std::string name, int age);

    //Прописываем геттеры
    int GetId() const noexcept;
    std::string GetName() const noexcept;
    int GetAge() const noexcept;

    void SetId(int newId) noexcept;
    void SetName(std::string newName) noexcept;
    void SetAge(int newAge) noexcept;
};