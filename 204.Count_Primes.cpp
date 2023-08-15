class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
            return 0;
        return prime_check(n);
    }
    int prime_check(int n)
    {
        int counter = 0;
        vector<int> primes(n+1,true);
        primes[0] = primes[1] = false;
        for(int i = 2;i*i <= n;++i)
        {
            if(primes[i])
            {
                for(int j = i*i;j<=n;j+=i)
                {
                    primes[j] = false;
                }
            }
        }
        for(int i = 0;i<n;i++)
        {
            if(primes[i])
                counter++;
        }
        return counter;
    }
};