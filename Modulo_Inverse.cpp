// MULTIPLICATIVE INVERSE 

long int Inverse_Modulo(int a , int b , int m) // b should be equal to m-2 according to little fermat's theorem
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
