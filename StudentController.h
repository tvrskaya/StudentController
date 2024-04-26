#pragma once

#include <map>
#include <memory>

#include "Student.h"


class StudentController {
public:

    [[nodiscard]]
    size_t StudentsAmount() const noexcept;
    int AddStudent(int id, std::string name, int age); //Возвращает результат операции - 1 если ок, -1 если не ок
    int DeleteStudent(int id);

private:
    std::map<int, std::shared_ptr<Student>> m_Students; //Используем map для более быстрого поиска по id
};
