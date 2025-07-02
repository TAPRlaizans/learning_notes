import os
import sys

def bubble_sort(A):
    for i in range(0, len(A)-1):
        for j in range(i + 1, len(A)-1):
            if A[j] < A[i]:
                A[j], A[i] = A[i], A[j] 

A = [8, 7, 6, 5, 4, 3, 2, 1]
bubble_sort(A)
print(A)