//
//  course.h
//  Project 1_3
//
//  Created by Stephan on 10/14/14.
//  Copyright (c) 2014 cst 238. All rights reserved.
//

#ifndef __Project_1_3__course__
#define __Project_1_3__course__

#include <stdio.h>
#include <string>
using namespace std;

class course
{
    
public:
    course (string title, int number)
    {
        courseName = title;
        courseNumber = number;
    }
    void setInstructor (string name);
    bool addStudent (string name, int id);
    bool dropStudent (int studentID);
    void putScores (int id, double mid1, double mid2);
    void getGrade ();
    void getAvg();
    void report ();
private:
    int numStudents = 0, droppedStudents = 0;
    int a = 0, b = 0, c = 0, d = 0, f = 0;
    string courseName;
    string courseInstructor;
    double courseNumber;
    struct student
    {
    string name;
    int id;
    double score1, score2;
    char grade;
    double avg;
    };
    student students [5];
    double classAvg;
};


#endif /* defined(__Project_1_3__course__) */
