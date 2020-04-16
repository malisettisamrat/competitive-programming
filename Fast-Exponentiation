// FAST EXPONENTIATION WITHOUT MODULO 

long int Fast_Expo(int a , int b )
{
    long int res=1;

    while(b)
    {
        if(b & 1)
        {
            res = (res * a);
            b -= 1;
        }
        else{
            a = (a * a);
            b /= 2;
        }
    }
    return res;
}

// TIME COMPLEXITY : O(Logn)
