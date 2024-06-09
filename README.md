Maintaining records of my solutions to problems I found most challenging.


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


# Coding concepts for future quick reference: #

### 1. Sorting a nested vector based on one of its terms. ###

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



