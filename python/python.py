student_name_ru = "Олесеюк Артём"
student_name_en = "Oleseyuk Artyom"
student_number = 15
group_name = "М3О-110БВк-26"
language_name = "Python"
student_id = f"{group_name}/{student_number:02d}"
control_value = 304 * student_number

print(f"Hello to 304 from {student_name_en}, number {student_number}, group {group_name}!")
print(f"Привет, 304! Это {student_name_ru}, номер {student_number}, группа {group_name}!")
print(f"Student ID: {student_id} | Language: {language_name} | Control: {control_value}")
print(f"Words in student_name_en: {len(student_name_en.split())}")