# Student Database Management System

A console-based student record management system written in C. Uses structures to store student data (roll number, name, subject, and marks) and provides a menu-driven interface for basic CRUD-style operations.

## Features
- Create student records
- Display all student records
- Modify existing records by roll number
- Search for a student by roll number
- Sort records by roll number (bubble sort)

## How to Run

```bash
gcc StudentDatabase.c -o student_database
./student_database
```

## Sample Menu
----STUDENT DATABASE----

1.Create student data
2.Display student data
3.Modify student data
4.Display Modified student data
5.Search student data(linear search)
6.Sort student data(Bubble sort)
7.Exit
Enter your choice:
## Notes
Built as a learning project to practice C structures, functions, arrays, and menu-driven program design.

## Possible Improvements
- Let the user choose how many students to enter at runtime
- Add input validation for roll number and marks
- Add delete functionality
- Save/load records to a file for persistence
