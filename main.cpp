#include <iostream>

#include "StudentController.h"

int main(void) {
    StudentController controller;
    if (controller.AddStudent(0, "Kirill", 21)) {
        std::cout << controller.StudentsAmount() << std::endl;
    } else {
        std::cout << "There is an error occured while adding a student" << std::endl;
        return -1;
    }

    if (controller.DeleteStudent(0)) {
        std::cout << controller.StudentsAmount() << std::endl;
    } else {
        std::cout << "There is an error occured while deleting a student" << std::endl;
        return -1;
    }
    
    return 0;
}