package com.company;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import java.util.ArrayList;
import java.util.List;

import static org.junit.jupiter.api.Assertions.*;

class StudentTest {

    @Test
    @DisplayName("Test student average grade func")
    void getAverageGrade(){
        List<Double> grades = new ArrayList<Double>();
        grades.add(15.0);
        grades.add(15.0);
        grades.add(15.0);
        Student std = new Student(grades);
        Assertions.assertEquals(15.0, std.getAverageGrade());
    }

}
