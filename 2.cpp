float findMedian(vector<int> a, int n)
{
    if (n % 2 != 0)
        return (float)(a[n / 2]);

    return (float)(a[(n - 1) / 2] + a[n / 2]) / 2.0;
}
int main()
{
   
    int n, k, count = 0;
    cin >> n;
    vector<int> v1;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vector<int>::iterator it = lower_bound(v1.begin(), v1.end(), x, std::greater<int>());
        v1.insert(it, x);
        printf("%0.1f\n", findMedian(v1, v1.size()));
    }
}
