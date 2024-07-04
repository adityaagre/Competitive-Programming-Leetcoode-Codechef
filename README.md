
# Coding concepts for future quick reference: #
1. Sorting a nested vector based on one of its terms.
2. Difference in assigning one vector to another in cpp and assigning a list to another in python.
3. Making copy of a list in python.
4. Shallow and deep copy operations in python.
5. Mod Modulous of negative number. Cpp Vs Python
6. Subarray
7. Sum of subarrays and their divisibility. Number of subarrays with this sum or this divisibility, etc.
8. Iterating over dictionary in Python
9. Python – Store Function as dictionary value
10. Flippling bits.
11. Odd or Even Number of factors of a number.
12. Number of perfect squares till n
13. K consecutive bit flips.
14. Rotate an array or matrix by k when k greater than n.
15. Integer division and float division in cpp:
16. Smallest prime divisor of a number.
17. Frequency Counting
18. Sorting based on a member of an object.
19. Substring in cpp.
20. Sorting vector
21. 

## 1. Sorting a nested vector based on one of its terms. ##
Vector : [[5,7], [1,3], [8,9]]
To sort this vector based on the the first terms inside their internal vectors. 
Sorted Vector : [1,3], [5,7], [8,9]]
Code :
//let the vector be:
vector<vector<int>> v
sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {return a[0] < b[0];});

Used this in question : 3169-count-days-without-meetings 

## 2. Difference in assigning one vector to another in cpp and assigning a list to another in python. ##
In python: 
l1 = [1,2]
l2=l1
l1[0] = -33
print(l1)
print(l2)

[-33, 2]
[-33, 2]

listOne is pointing to the contents of the list. Then listTwo = listOne will just create another pointer (listTwo) to that same list. So when you do anything to either pointer, e.g. listTwo.append(4), you will affect the list that both listOne and listTwo are pointing to.

In CPP:
 // Initializing vector with values  
    vector<int> vect1{100, 100, 100}; 
    // Declaring new vector  
    vector<int> vect2;  
    // Making new copy.
    vect2 = vect1;
    vect1[0] = 0;
    cout<<vect1[0]<<endl<<vect2[0]<<endl;
    
0
100

Here, in CPP, change in vector1 did not reflect in vector 2. Therefore assigning vector 1 to vector creates a copy.

## 3. Making a copy of a list in python ##
There are these ways:
  1. .copy()
  2. list()
  3. slicing

1. .copy() Method:
 thislist = ["apple", "banana", "cherry"]
 mylist = thislist.copy()
 thislist[0] = "changed"
 print(thislist, mylist, sep="\n")

 ['changed', 'banana', 'cherry']
 ['apple', 'banana', 'cherry']


2. list() METHOD :
 thislist = ["apple", "banana", "cherry"]
 mylist = list(thislist)

3. Slicing method:
   thislist = ["apple", "banana", "cherry"]
   mylist = thislist[:]

## 4. Shallow and deep copy operations in python. ##
https://docs.python.org/3.6/library/copy.html

Assignment statements in Python do not copy objects, they create bindings between a target and an object. For collections that are mutable or contain mutable items, a copy is sometimes needed so one can change one copy without changing the other. This module provides generic shallow and deep copy operations (explained below).

copy.copy(x)
Return a shallow copy of x.
copy.deepcopy(x[, memo])
Return a deep copy of x.

exception copy.error
Raised for module specific errors.

If you're not familiar with the difference between Shallow and Deep Copy, read these docs. Basically, a Shallow Copy is a new outer container object (the [ ] and the internal elements are references to the same memory locations. A Deep Copy is also a new outer container but gets brand new copies of the objects inside (i.e. identical copies of the objects but at new memory locations).
The difference between shallow and deep copying is only relevant for compound objects (objects that contain other objects, like lists or class instances):

A shallow copy constructs a new compound object and then (to the extent possible) inserts references into it to the objects found in the original.

A deep copy constructs a new compound object and then, recursively, inserts copies into it of the objects found in the original.

### Simple Language ###
If list 1 has class objects. if you make a copy() of list1, it will create a new outer container for the new list. but for all the elements inside list 2, there will be pointers to the same class objects as in list1.
Therefore use deepcopy()
This difference wont be evident for a list of int, etc.

Two problems often exist with deep copy operations that don’t exist with shallow copy operations:

Recursive objects (compound objects that, directly or indirectly, contain a reference to themselves) may cause a recursive loop.

Because deep copy copies everything it may copy too much, such as data which is intended to be shared between copies.

The deepcopy() function avoids these problems by:

keeping a memo dictionary of objects already copied during the current copying pass; and

letting user-defined classes override the copying operation or the set of components copied.

This module does not copy types like module, method, stack trace, stack frame, file, socket, window, array, or any similar types. It does “copy” functions and classes (shallow and deeply), by returning the original object unchanged; this is compatible with the way these are treated by the pickle module.

Shallow copies of dictionaries can be made using dict.copy(), and of lists by assigning a slice of the entire list, for example, copied_list = original_list[:].

Classes can use the same interfaces to control copying that they use to control pickling. See the description of module pickle for information on these methods. In fact, the copy module uses the registered pickle functions from the copyreg module.

In order for a class to define its own copy implementation, it can define special methods __copy__() and __deepcopy__(). The former is called to implement the shallow copy operation; no additional arguments are passed. The latter is called to implement the deep copy operation; it is passed one argument, the memo dictionary. If the __deepcopy__() implementation needs to make a deep copy of a component, it should call the deepcopy() function with the component as first argument and the memo dictionary as second argument.

## 5. Mod Modulous of negative number. C++ Vs Python ##
11%6 = 5.
-16%6 = ?
the number just smaller than -16 that is a negative multiple of 6 is -18.
Therefore, -16%6 = -16 - (-18) = 2.
Or, the remainder 2 can also always be written as -4.

## 6. Subarray ##
A subarray is a continuous part of an array.

## 7. Sum of subarrays and their divisibility. Number of subarrays with this sum or this divisibility, etc..
Problems solved on this concept:
0974-subarray-sums-divisible-by-k. Solution link:https://www.youtube.com/watch?v=10wbS3uk2F8
0560-subarray-sum-equals-k. 

To Solve:
https://leetcode.com/problems/make-sum-divisible-by-p/

## 8. Iterating over dictionary in Python
You can iterate over dictionaries in python, like so:
def put_in_lettered_digits(str1):
    # Define a dictionary mapping digits to their lettered form
    digit_to_word = {
        '0': 'zero',
        '1': 'one',
    }

    for digit, word in digit_to_word.items():
        str1 = str1.replace(digit, word)
    
    return str1

## 9. Python – Store Function as dictionary value
When deciding what function to use at run time, instead of if, elif, elif, else, use dictionary function calling. Works even with parameters.

Eg: 
```
def sum_key(a, b):
	return a + b

#initializing dictionary
#check for function name as key
test_dict = {"Gfg": sum_key, "is" : 5, "best" : 9}

#printing original dictionary
print("The original dictionary is : " + str(test_dict))

#calling function using brackets 
#params inside brackets
res = test_dict['Gfg'](10, 34)

#printing result 
print("The required call result : " + str(res))
```

## 10. Flippling bits.
The most efficient way to change 1 to 0 and 0 to 1 is :
let the bit be x.
```
x=x^1
## ^ XOR
## 0 XOR 1 -> 1
## 1 XOR 1 -> 0
```

## 11. Odd or Even Number of factors of a number.
Note: In many Questions, we need to find if number of factors of a given number is odd or even.
Remeber : 
#### Squares have odd number of factors while non squres have an odd number of factors.

## 12. Number of perfect squares till n 

#### 				Sqrt(n)
  All numbers have squares. We need to know the highest number which has its square less than n. 
  sqrt(n) has its square equal to n. 
  If n = 5
  sqrt(n) = 2.2
  Now integer less than 2.2 = 2.
  Therefore 2 numbers in 1-5 are squares.
  {1,4}.

  Solve 0319-Bulb-Switcher with this.

## 13. K consecutive bit flips.

Two very good problems based on flipping k consecutive bits in a [0, 1, 0, 1 ....] array to make all 1s.

First solve medium level : 3191. Minimum Operations to Make Binary Array Elements Equal to One I
Then solve hard : 995. Minimum Number of K Consecutive Bit Flips

## 14. Rotate an array or matrix by k when k greater than n.

When you need to rotate an n number array to the left by k:
n=5
k=2
ans = []
k=k%n
for (i r(k, n)):
	ans.app(a[i][j])
for( i r(0, k)):
	ans.app(a[i][j])
 ret ans

 #### In cases where k > n, do a k=k%n in the beginning. 

## 15. Integer division and float division in cpp:

```
 int main()
{
    int a = 12;
    int b = 5;
    float c = a/b;
    float d = a/b;
    float f = (float) a / (float) b;
    float f1 = floor(f);
    float f2 = ceil(f);
    cout<<c<<endl<<d<<endl<<f<<endl<<f1<<endl<<f2<<endl;
    int original = (a/b)*b + a%b;
    cout<<"Original: "<<original;

    return 0;
}

float c = a/b   -> 2
float d = a/b   -> 2
float f = (float) a / (float) b     -> 2.4
float f1 = floor(f)     -> 2
float f1 = floor(f)     -> 3
Original: 12

```

## 16. Smallest prime divisor of a number.

```
int smallestDivisor(int n)
{
    // if divisible by 2
    if (n % 2 == 0)
        return 2;
 
    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2)
	{
        	if (n % i == 0)
            		return i;
    	}
 
    return n;
}
```

## 17. Frequency Counting

```
unordered_map<int, long long> frequencyMap;
        for(int i = 0; i<roads.size(); i++)
        {
            frequencyMap[roads[i][0]]++;
            frequencyMap[roads[i][1]]++;
        }
```
To practice both the 17th and 18th point, solve : 2285. Maximum Total Importance of Roads

## 18. Sorting based on a member of an object.

Just like vector sorting, we sort a vector of objects. just that you need a trird parameter after the begin and end.
[](const city &a, const city &b) {return a.degree > b.degree ;}
```
sort(
            city_list.begin(), 
            city_list.end(), 
            [](const city &a, const city &b) {return a.degree > b.degree ;}
);
```

## 19. Substring in cpp
```
#include <string>
/ Take any string
    string s1 = "Geeks";

// Copy two characters of s1 (starting
// from position 3)
string r = s1.substr(3, 2);
```

## 20. Sorting vector
```
#include<vector> 
#include<algorithm>
vector<int> vec { 2,4,6,8,10 };

//Sorting the vector
std::sort(vec.begin(),vec.end());

//Sorting the vector using greater<int>() function
std::sort(vec.begin(),vec.end(), greater<int>());

//Sorting the vector using user-defined lambda expression(return type bool)
std::sort(vec.begin(),vec.end(), [](int &a, int &b){ return a>b; });
```






# Maintaining records of my solutions to problems I found most challenging.


1. Duplet
2. Ties
3. Count nodes equal to avg of subtree: leetcode: tree, recursion, pair return, pair.
4. Add two numbers : recursion, linked list, handling long int in int.  note: We can't store the etire sum, so calculate sum digits directly.
5. Double number: recursion, linked list,  handling long int in int. This is similar to last problem but better, also, we have implemented this without using stack.
6. max_index_diff really good array problem.
7. sorted_rotated array: array rotation.
8. MD_Riev: prime numbers and palindromes. interesting property.
9. 0009-palindrome-number: Simple palindrome question, but interesting point regarding nagative palindromes' existence.

1. 3_sum_closest. 
2. subset_1 : Basic regression
3. 
  
  
  


