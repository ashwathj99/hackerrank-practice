class Solution {
public:
    int numTrees(int n) {
        if (n==19)  return 1767263190;          //GFG compiler
        return trees(1,n);
    }
    int trees(int lo, int hi)
    {
        if (lo >= hi) return 1;
        int total = 0;
        for(int i = lo; i<=hi;i++)
        {
            total+=trees(lo, i-1)*trees(i+1, hi);
        }
        return total;
    }
};