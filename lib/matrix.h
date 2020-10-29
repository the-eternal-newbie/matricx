/*
 * matrix.h
 * Matrix class declarations
 */

#ifndef __MATRIX_H__
#define __MATRIX_H__

#include <iostream>

class Matrix
{
public:
    // First we define the different kinds of class constructor that our class will support
    Matrix(int, int);
    Matrix(double **, int, int);
    Matrix();
    ~Matrix();
    Matrix(const Matrix &);
    Matrix &operator=(const Matrix &);

    inline double &operator()(int x, int y) { return p[x][y]; }

    // Sum operator declaration
    Matrix &operator+=(const Matrix &);

private:
    int rows_, cols_;
    double **p;

    void allocSpace();
    Matrix expHelper(const Matrix &, int);
};

// Sum operator function definition
Matrix operator+(const Matrix &, const Matrix &);

#endif