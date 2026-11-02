public class Main {
    static class Student {
        final String nameRu, nameEn, group, language;
        final int number;
        Student(String nameRu, String nameEn, int number, String group, String language) {
            this.nameRu = nameRu; this.nameEn = nameEn;
            this.number = number; this.group = group; this.language = language;
        }
    }

    public static void main(String[] args) {
        Student s = new Student("Иван Иванов", "Ivan Ivanov", 7, "МЗО-000БВ-26", "Java");
        String studentId = String.format("%s/%02d", s.group, s.number);
        int controlValue = 304 * s.number;

        System.out.printf("Hello to 304 from %s, number %d, group %s!%n",
                s.nameEn, s.number, s.group);
        System.out.printf("Привет, 304! Это %s, номер %d, группа %s!%n",
                s.nameRu, s.number, s.group);
        System.out.printf("Student ID: %s | Language: %s | Control: %d%n",
                studentId, s.language, controlValue);
    }
}