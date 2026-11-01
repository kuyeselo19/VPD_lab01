# Лабораторная работа № 1: языки программирования, терминал и Git

- **ФИО:** Олесеюк Артём Евгеньевич
- **Группа:** М3О-110БВк-26
- **Номер в списке:** 15
- **Status:** done

## Цель проекта

Реализовать одну и ту же программу на 13 языках, сравнить способы сборки и выполнения, а также освоить Git: коммиты, ветки, слияния, конфликты и теги

## Используемые языки

1. C
2. C++
3. Python
4. JavaScript
5. TypeScript
6. Java
7. C#
8. F#
9. Go
10. Rust
11. Bash
12. Prolog
13. Assembler (ARM64)

## Инструменты и команды

| Язык | Версия инструмента | Команда сборки/запуска |
|---|---|---|
| C | gcc | `gcc -Wall -Wextra -pedantic c.c -o c && ./c` |
| C++ | g++ | `g++ -Wall -Wextra -pedantic c++.cpp -o c++ && ./c++` |
| Python | python3 | `python3 main.py` |
| JavaScript | node | `node js.js` |
| TypeScript | tsc | `tsc ts.ts --outDir dist && node dist/ts.js` |
| Java | javac | `javac -encoding UTF-8 Main.java && java Main` |
| C# | dotnet | `dotnet run` |
| F# | dotnet | `dotnet run` |
| Go | go | `go run main.go` |
| Rust | rustc | `rustc main.rs -o main && ./main` |
| Bash | bash | `bash main.sh` |
| Prolog | swipl | `swipl -q -s main.pl -g main -t halt` |
| Assembler | as | `as assembler.s -o assembler.o && gcc assembler.o -o assembler && ./assembler` |

## Пример ожидаемого вывода

```text
Hello to 304 from Oleseyuk Artyom, number 15, group M3О-110BVk-26!
Привет, 304! Это Олесеюк Артём, номер 15, группа М3О-110БВк-26!
Student ID: М3О-110БВ-26/15 | Language: C | Control: 4560
```

## Кириллица в C/C++

Исходные файлы сохранены в UTF-8. В MacOS терминал уже работает в UTF-8, поэтому строки выводятся без доработок. Для Windows в коде предусмотрен блок `#ifdef _WIN32` с `SetConsoleCP(CP_UTF8)` и `SetConsoleOutputCP(CP_UTF8)`

## Assembler

- ОС: MacOs (Tacho)
- Архитектура: ARM64 (проверено `uname -m`)
- Язык ассемблера: ARM64 
- Toolchain: GNU as + gcc 
- Сборка и запуск: `as assembler.s -o assembler.o && gcc assembler.o -o assembler && ./assembler`
