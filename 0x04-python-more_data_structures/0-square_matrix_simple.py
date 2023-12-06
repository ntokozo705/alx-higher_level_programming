#!/usr/bin/python3
def square_matrix_simple(matrix=[]):
    squared = []
    for line in matrix:
        squared.append([d**2 for d in line])
    return squared
