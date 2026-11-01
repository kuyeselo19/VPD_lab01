#include <stdio.h>

int main(void) {
    const char *student_name_ru = "Артём Олесеюк";
    const char *student_name_en = "Artyom Oleseyuk";
    const int   student_number  = 15;
    const char *group_name      = "МЗО-110БВк-26";
    const char *language_name   = "C";

    char student_id[64];
    snprintf(student_id, sizeof student_id, "%s/%02d", group_name, student_number);
    const int control_value = 304 * student_number;

    printf("Hello to 304 from %s, number %d, group %s!\n",
           student_name_en, student_number, group_name);
    printf("Привет, 304! Это %s, номер %d, группа %s!\n",
           student_name_ru, student_number, group_name);
    printf("Student ID: %s | Language: %s | Control: %d\n",
           student_id, language_name, control_value);
    return 0;
}