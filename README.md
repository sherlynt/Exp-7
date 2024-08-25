# Experiment 7

# AIM:

To study and implement C++ Arrays and Strings.

# SOFTWARE: 
Visual Studio Code

# THEORY:
ARRAYS:

Arrays in C++ are collections of elements of the same type stored in contiguous memory locations. They provide a way to group multiple values under a single variable name, which can be accessed using an index.

An array is declared by specifying the type of its elements followed by square brackets [] and the size of the array. For example, int numbers[5]; declares an array of 5 integers.

Elements of an array are accessed using indices, with the first element having an index of 0. For instance, numbers[0] refers to the first element.

C++ supports multidimensional arrays, such as 2D arrays, declared with multiple sets of square brackets. For example, 
int matrix[3][4]; declares a 3x4 matrix.

STRINGS:

A string refers to a sequence of characters.The #include <string> in C++ is used to include the standard library's string class, which provides a convenient and powerful way to work with text strings. Strings are essentially arrays of characters.
Strings are used to store words and text. They are also used to store data, such as numbers and other types of information. Strings in C++ can also be defined using the std::string class.

# CODES:

1) Declaring Arrays

```
#include <iostream>
using namespace std;

int main() {
    int a1[5] = {9, 3, 8, 6, 7}; 
    int a2[] = {2, 1, 6, 3, 4}; 
    int a3[5] = {8, 6, 7};

 
  cout << "\n Traditional Method: ";
  for (int i = 0; i < 5; ++i) {
    cout << a3[i] << "  ";
  }
  cout << endl;



   return 0;
}
```
O/P:
![image](https://github.com/user-attachments/assets/081a8be9-bae7-4cf5-9380-bbd8702a94e3)



2) Creating input and output.

```
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;
   
    int array[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    cout << endl;
    return 0;
}
```
O/P:
![image](https://github.com/user-attachments/assets/e2ba6325-3c5d-40a0-be12-cbe285c110ac)



3) Reversing Arrays.

```
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int a[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < size / 2; i++) {
        int temp = a[i];
        a[i] = a[size - 1 - i];
        a[size - 1 - i] = temp;
    }

    cout << "The reversed array is:" << endl;
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}
```

O/P: ![image](https://github.com/user-attachments/assets/6b3c85e7-3029-47b5-8fe8-7b5dd2ef60e3)




4) Searching elements in an array.

```
#include<iostream>
using namespace std;
int main() {
    int marks[5], i, j, num, flag=0, count=0;
    for(i=0;i<5;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>marks[i];
    }
    cout<<"Enter element to be searched: ";
    cin>>num;
    for(j=0;j<5;j++) {
        if(marks[j]==num) {
            cout<<"Position of "<<num<<": "<<j+1<<endl;
            count++;
            flag=1;
        }
    }
    if(flag==0) {
        cout<<"Element not present";
    }
    else if(flag==1) {
        cout<<"Element is present: "<<count<<" times";
    }
}
```
O/P: ![image](https://github.com/user-attachments/assets/da11978b-6851-43ed-9c40-5adf5a428c11)




5) Sum and average of an array.

```
#include<iostream>
using namespace std;

int main() {
    int a1[4], i, j;
    float sum=0, avg;
    for(i=0;i<4;i++) {
        cout<<"Enter element-"<<i+1<<": ";
        cin>>a1[i];
    }
    for(j=0;j<4;j++) {
        sum = sum + a1[j];
    }
    cout<<"Sum of elements = "<<sum<<endl;
    avg = sum/4;
    cout<<"Average = "<<avg;
}

```

O/P:
![image](https://github.com/user-attachments/assets/00c5716d-eebc-45a9-856a-18235ccce782)




6) Maximum and Minimum element of an array.
```
#include <iostream>
using namespace std;

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int max = array[0];
    int min = array[0];

    for (int i = 1; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
        if (array[i] < min) {
            min = array[i];
        }
    }
    cout << "Maximum value in the array: " << max << endl;
    cout << "Minimum value in the array: " << min << endl;

    return 0;
}
```
O/P:
![image](https://github.com/user-attachments/assets/cefccbf7-2ae8-4436-91d8-b6571b5d04d6)



7)Printing string input:

```
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cout<<"Enter a string:"<<endl;
    cin>>s;
    cout<<"Entered string is:"<<s<<endl;
    return 0;
    
}
```
o/p:
![image](https://github.com/user-attachments/assets/0bdc53d9-db2e-4a7a-acdf-7cd91d19a1f0)



8)Concatenation of Strings:
```
#include <iostream>
#include <string>
using namespace std;
int main(){
    string s,t;
    cout<<"Enter first string:"<<endl;
    cin>>s;
    cout<<"Enter second string:"<<endl;
    cin>>t;
    cout<<"Concatenation of strings is:"<<s+t<<endl;
    return 0;
}
```
o/p:
![image](https://github.com/user-attachments/assets/3f1add36-3d23-4908-be32-7b937498c80d)



9)Palindrome of string:
```
#include<iostream>
#include<string>
using namespace std;

int main() {
    string a;
    cout<<"Enter string:";
    cin>>a;

    int n = a.length();
    int i;

    for (i=0;i<n/2;i++) {
        if (a[i]!=a[n-1-i]) {
            break; 
        }
    }

    if (i==n/2) {
        cout<<"String is a palindrome."<<endl;
    } else{
        cout<<"String is not a palindrome."<< endl;
    }

    return 0;
}
```
o/p:![image](https://github.com/user-attachments/assets/185f84cd-0395-4977-9ff9-307b7498cc0c)

![image](https://github.com/user-attachments/assets/80129604-1f22-48d4-a272-56ee3e647201)




10)Reversing string:

```
#include<iostream>
#include<string>
using namespace std;
int main() {
string a;
cout<<"Enter string: ";
cin>>a;
int i;
for(i=a.length()-1;i>=0;i--) {
cout<<a[i];
}
return 0;
}

```
o/p: 


![image](https://github.com/user-attachments/assets/a66d60e0-5150-43fb-9c6a-10921f662933)



# CONCLUSION:

These code snippets show basic operations with arrays in C++. They include printing array elements, taking user input to fill arrays, reversing the order of elements, searching for specific values, and calculating sums and averages. The examples use different types of loops and handle both fixed and user-defined array sizes. Overall, they provide a straightforward introduction to working with arrays and performing common tasks like finding maximum and minimum value.

The last four C++ code demonstrate basic string operations: reading, displaying, concatenating, reversing, and checking for palindromes. Each program effectively handles single-word strings. Overall, they provide a solid foundation for understanding string manipulation in C++.



