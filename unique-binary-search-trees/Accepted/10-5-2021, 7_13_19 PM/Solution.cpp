// https://leetcode.com/problems/unique-binary-search-trees

class Solution {
public:
    unsigned long int bino(unsigned int n,
								unsigned int k)
 {
	unsigned long int res = 1;
	if (k > n - k)
		k = n - k;
	for (int i = 0; i < k; ++i) {
		res *= (n - i);
		res /= (i + 1);
      cout<<res<<" ";
	}
	return res;
}
    int numTrees(int n) {
     

      return (bino(2*n,n)/(n+1));
    }
};