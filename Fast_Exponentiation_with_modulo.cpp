// FAST EXPONENTIATION WITH MODULO SOME VALUE

long int Fast_Expo_modulo(int a , int b , int m)
{
    long int res=1;

    while(b)
    {
        if(b & 1)
        {
            res = (res * a) % m;
            b -= 1;
        }
        else{
            a = (a * a) % m;
            b /= 2;
        }
    }
    return res % m;
}

// TIME COMPLEXITY : O(Logn)
