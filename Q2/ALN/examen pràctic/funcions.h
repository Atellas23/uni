#ifndef funcions_h
#define funcions_h

#include <iostream>
#include <vector>
#include <math.h>
#include <fstream>
#include <cstdlib>
#include <iomanip>

using namespace std;
typedef vector <double> vec;
typedef vector <vec> matriu;

const double epsilon = 1e-12;
const double INF = 1.0/0.0;

// returns the index of the row to be swapped (using scaled partial pivoting)
int pivoting (matriu& A, int index);

// Completes the "row -th" step of the method of Gauss 
void Gauss (matriu& A, int row);

// Decomposes a matriu A in the PA = LU form
int lu (matriu& A, vector <int>& perm);

// Given a matriu A and b returns x such that Ax = b
vec solve(const matriu& A, const vec& b);

// Given a matriu A returns its inverse
matriu inverse(const matriu& A);

double determinant(const matriu& A);

matriu multiply(const matriu& A, const matriu& B);

// it expresses a vector as a matriu (column vector)
matriu transform(const vec& b);

matriu add (const matriu& A, const matriu& B);

matriu subtract (const matriu& A, const matriu& B);

matriu transpose(const matriu& A);

double norm_one(const matriu& A);

double norm_inf(const matriu& A);

double norm_two(const vec& b);

double condition_one(const matriu& A);

double condition_inf(const matriu& A);

void print_matriu(const matriu& A);

void print_matlab(const matriu& A);

matriu identity(int n);

double norm_one_vector (const vec& b);

// sums two vec (of the same dimension)
vec vector_sum (const vec& u, const vec& v);

double trace (const matriu& A);

matriu lowLU(const matriu& LU);

matriu upperLU(const matriu& LU);

#endif
