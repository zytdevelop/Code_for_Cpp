//利用二项式定理解题


vector<int> getRow(int rowIndex) {
    vector<int> ans;
    for(int i = 0; i <= rowIndex; ++i)
    {
        ans.push_back(combination(rowIndex,i));
    }
    return ans;
}

//求组合数函数
int combination(const int m, const int i) {
    long long n = min(i, m - i);
    long long k = m - n;
    long long c = 1;
    for (long long j = 1; j <= n; ++j) {
        c *= (k + j);
        c /= j;
    }        
    return c;
}
