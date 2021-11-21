// https://leetcode.com/problems/unique-binary-search-trees

class Solution {
public:

    int numTrees(int n) {
     

	unsigned long int res = 1;
        unsigned long int a=2*n,b=n;
	if (b > a - b)
		b = a- b;
	for (int i = 0; i < b; ++i) {
		res *= (a - i);
		res /= (i + 1);
      //cout<<res<<" ";
	}
      return res/(n+1);
    }
};