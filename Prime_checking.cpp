// Checking Prime or not in Sqrt(N)

bool prime(int n)
{
    if(n<=1)
        return true;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    
    return true;
}
