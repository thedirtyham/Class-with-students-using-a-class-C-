//
//  course.cpp
//  Project 1_3
//
//  Created by Stephan on 10/14/14.
//  Copyright (c) 2014 cst 238. All rights reserved.
//

#include "course.h"
#include <iostream>
#include <string>
using namespace std;

void course::setInstructor(string name)
{
    courseInstructor = name;
    
}

bool course::addStudent(string name, int n)
{
    
    for (int i = 0; i < numStudents; i ++) {
        
        if (n == students[i].id ) {
            return false;
        }
    }
    
    students[numStudents].name = name;
    students[numStudents].id = n;
    
        numStudents++;
    
    return true;
}
bool course::dropStudent(int studentID)
{
    for (int i = 0; i < numStudents; i ++) {
        if (studentID == students[i].id) {
            for (int j = i; j < (numStudents - 1); j ++) {
                students[j] = students[j+1];
            }
            numStudents--;
            droppedStudents++;
            return true;
        }
    }
    return false;
}

void course::putScores(int studentID, double mid1, double mid2)
{
 
    for (int i = 0; i < numStudents; i ++) {
        if (studentID == students[i].id) {
            students[i].score1 = mid1;
            students[i].score2 = mid2;
            
        }
        students[i].avg = (students[i].score1 + students[i].score2) / 2;
    }
}
void course::getGrade ()
{
    for (int i = 0; i < numStudents; i ++) {
        
    if (students[i].avg >= 90){
        students[i].grade = 'A';
        a++;
    }
    else if (students[i].avg >= 80){
        students[i].grade = 'B';
        b++;
    }
    else if (students[i].avg >= 70){
        students[i].grade = 'C';
        c++;
    }
    else if (students[i].avg >= 60){
        students[i].grade = 'D';
        d++;
    }
    else if (students[i].avg >= 50){
        students[i].grade = 'F';
        f++;
    }
        
    }
    
}

void course::getAvg()
{
    for (int i = 0; i < numStudents; i ++) {
        
        classAvg += (students[i].avg) / numStudents;
    }
    
}

void course::report()
{
    cout << "---------------------------------" << endl;
    cout << courseName << "  (" << courseNumber << ")   Course Report " << endl;
    cout << "---------------------------------" << endl;
    cout << "Course Instroctor   " << courseInstructor << endl;
    cout << numStudents << " students are enrolled in the course." << endl;
    cout << droppedStudents << " student dropped the course during the semester. " << endl;
    cout << "---------------------------------" << endl;
    cout << "Average of all students: " << classAvg << endl;
    cout << " 'A' --> " << a << endl;
    cout << " 'B' --> " << b << endl;
    cout << " 'C' --> " << c << endl;
    cout << " 'D' --> " << d << endl;
    cout << " 'F' --> " << f << endl;
    cout << "---------------------------------" << endl;
    cout << "Individual Record " << endl;
    for (int i = 0; i < numStudents; i++) {
        
        cout << students[i].id << ": " << students[i].name << " - " << students[i].avg << " (" << students[i].grade << ") " << endl;
        
    }
}
