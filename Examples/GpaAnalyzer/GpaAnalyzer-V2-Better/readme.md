# Grade Analyzer
This is a simple program that read in student, class (i.e., course section), and registration (i.e., transcript) data and then computes:
1. Each students GPA
2. Each class's average grade (one a 4.0 scale)

## Version 1
Initial version, not very high quality

## Version 2
The functionality is the same as Version 1, but make some improvements to the code.
* Declaration of the Student class move to Student.h and implementation moved to Student.cpp
* Declaration of the CourseSection class move to CourseSection.h and implementation moved to CourseSection.cpp
* Declaration of the Registration class move to Registration.h and implementation moved to Registration.cpp
* A prototype class declaration for Registration added to Student.h and CourseSection.h
* Prototype class declaration for Student and CourseSection added to Registration.h
* The ConvertLetterGradeToScore function added to both the Student and CourseSection. (Yes, this is not a great solution because it duplicates the code.  We'll solve this a better duplicate code problem later.)
