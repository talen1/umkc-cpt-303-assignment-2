#pragma once

class Employee {
public:
    // Abstract methods that must be implemented in derived classes
    virtual double calculateWeeklySalary() const = 0;
    virtual double calculateHealthCareContributions() const = 0;
    virtual double calculateVacationDays() const = 0;
};

class Professional : public Employee {
private:
    double monthlySalary;
    int vacationDays;

public:
    Professional(double salary, int days) : monthlySalary(salary), vacationDays(days) {}

    // Implementations of abstract methods
    double calculateWeeklySalary() const override {
        return monthlySalary / 4.0; // Assuming 4 weeks in a month
    }

    double calculateHealthCareContributions() const override {
        return 100.0; // Replace with actual calculation
    }

    double calculateVacationDays() const override {
        return vacationDays / 4.0; // Assuming 4 weeks in a month
    }
};

class Nonprofessional : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Nonprofessional(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

    // Implementations of abstract methods
    double calculateWeeklySalary() const override {
        return hourlyRate * hoursWorked;
    }

    double calculateHealthCareContributions() const override {
        return 50.0; // Replace with actual calculation
    }

    double calculateVacationDays() const override {
        return hoursWorked / 40.0; // Assuming 40 hours of work per week
    }
};
