#include <memory>
#include <iostream>
#include <algorithm>

#include "StudentController.h"

[[nodiscard]]
size_t StudentController::StudentsAmount() const noexcept {
    return m_Students.size();
}

int StudentController::AddStudent(int id, std::string name, int age) {
    Student s(id, name, age);
    //m_Students.insert(id, std::make_shared<Student>(std::move(s)));
    if (!m_Students.insert( std::make_pair(id, std::make_shared<Student>(std::move(s)))).second) {
        std::cout << "There is another identical student exist" << std::endl;
        return -1;
    }
    return 1;
}

int StudentController::DeleteStudent(int id) {
    for (auto it = m_Students.begin(); it != m_Students.end(); ++it) {
        if (it->first == id) {
            m_Students.erase(id);
            return 1;
        }
    }
    std::cout << "There is no student with id " << id << std::endl;
    return -1;
}