#include<iostream>
using namespace std;
template <typename T>
class Array
{
    T *arr;
    int arr_size;
    public:
    Array(T *a, int size)
    {
	arr_size = size;
	arr = new T[size];
	for(int i = 0; i < arr_size; i++)
	    arr[i] = a[i];
    }
    void display()
    {
	for(int i = 0; i < arr_size; i++)
	    cout << arr[i] << " ";
	cout << "\n";
    }
};

int main()
{
    int arr1[5] = {1,2,3,4,5};
    double arr2[5] = {1.1, 1.2, 1.3, 1.4, 1.5};
    Array <int>int_arr(arr1, 5);
    int_arr.display();
    Array <double>double_arr(arr2, 5);
    double_arr.display();
}













