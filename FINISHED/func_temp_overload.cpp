#include <iostream>
#include <string>, 

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void swap(T a[], T b[], int size)
{
    for(int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b [i];
        b[i] = temp[i];
    }
}

int main()
{
    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1 ,1 ,1 ,1 ,1};
}