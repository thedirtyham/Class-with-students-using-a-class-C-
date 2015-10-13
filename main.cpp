//
//  main.cpp
//  Project 1_3
//
//  Created by Stephan on 10/14/14.
//  Copyright (c) 2014 cst 238. All rights reserved.
//

#include <iostream>
#include "course.h"

int main(int argc, const char * argv[]) {
    
        course cst238 ("Data Structures", 238);
        cst238.setInstructor ("Dr. Byun");
        cst238.addStudent ("Tom",   1000);
    cst238.addStudent("Stephan", 1234);
        cst238.addStudent ("Brian", 2000);
        cst238.addStudent ("Alex",  3000);
    cst238.addStudent("kendal", 1234);
    cst238.putScores(1234, 100, 94.5);
        cst238.putScores (1000, 78.50, 100.0);
        cst238.putScores (2000, 90.0, 90.0);
        cst238.putScores (3000, 85.5, 74.5);
        cst238.putScores (1000, 100.0, 100.0);
        cst238.dropStudent (2000);
        cst238.getAvg();
        cst238.getGrade();
        cst238.report ();
        return 0;

}
