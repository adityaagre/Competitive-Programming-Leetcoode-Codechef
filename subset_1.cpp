/*

https://www.naukri.com/code360/problems/subset-sum_3843086?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM


You are given an array 'nums' of ‘n’ integers.

Return all subset sums of 'nums' in a non-decreasing order.

Note:
Here subset sum means sum of all elements of a subset of 'nums'. A subset of 'nums' is an array formed by removing some (possibly zero or all) elements of 'nums'.

For example
Input: 'nums' = [1,2]

Output: 0 1 2 3

Explanation:
Following are the subset sums:
0 (by considering empty subset)
1 
2
1+2 = 3
So, subset sum are [0,1,2,3].
Detailed explanation ( Input/output format, Notes, Images )

Sample Input 1 :
3
1 2 3
Sample output 1 :
0 1 2 3 3 4 5 6
Explanation For Sample Output 1:
For the first test case,
Following are the subset sums:
0 (by considering empty subset)
1
2
1+2 = 3
3
1+3 = 4
2+3 = 5
1+2+3 = 6
So, subset-sums are [0,1,2,3,3,4,5,6]
Sample Input 2 :
2 
4 5
Sample output 2 :
0 4 5 9
Expected Time Complexity:
Try to do this in O(n*2^n). 
Constraints:
1 <= n <= 15
0 <= nums[i] <= 5000

Time limit: 1 sec
*/


vector<int> subsetSum(vector<int> &num){
	// Write your code here.
	//return f(num, 0);

	vector<int> answer;
	vector<int> temp;
	temp.push_back(num[0]);
	temp.push_back(0);

	int len = num.size();

	sort(num.begin(), num.end());

	vector<int> num1;

	if(len>1)
	{
		for(int i = 1; i<len; i++)
		{
			num1.push_back(num[i]);
		}

		

		vector<int> r = subsetSum(num1);

		int len2 = r.size();

		for(int i = 0; i<len2; i++)
		{
			answer.push_back(r[i]);
			answer.push_back(r[i] + num[0]);
		}
		sort(answer.begin(), answer.end());
		return answer;
	}

	else{
		sort(temp.begin(), temp.end());
		return temp;
	}





	
}


