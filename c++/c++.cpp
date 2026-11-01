#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

int main() {
    const std::string student_name_ru = "Олесеюк Артём";
    const std::string student_name_en = "Oleseyuk Artyom";
    const int         student_number  = 15;
    const std::string group_name      = "МЗО-110БВк-26";
    const std::string language_name   = "C++";

    std::ostringstream id;
    id << group_name << "/" << std::setw(2) << std::setfill('0') << student_number;
    const std::string student_id = id.str();
    const int control_value = 304 * student_number;

    std::cout << "Hello to " << control_value << " from " << student_name_en
              << ", number " << student_number << ", group " << group_name << "!\n";
    std::cout << "Привет, " << control_value << "! Это " << student_name_ru
              << ", номер " << student_number << ", группа " << group_name << "!\n";
    std::cout << "Student ID: " << student_id
              << " | Language: " << language_name
              << " | Control: " << control_value << "\n";
    return 0;
}