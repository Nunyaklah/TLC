package com.company;

import java.util.ArrayList;
import java.util.List;

public class Student {
    private List<Double> studentGrades = new ArrayList<Double>();

    public Student(List<Double> grades){
        this.studentGrades = grades;
    }

    public double getAverageGrade(){
        double averageGrade, totalGrade = 0.0;
        for(double grade : this.studentGrades){
            totalGrade += grade;
        }
        averageGrade = totalGrade / this.studentGrades.size();
        return averageGrade;
    }

}
