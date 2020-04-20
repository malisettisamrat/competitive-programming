// pre-computation of prime using sieve of erosthenes

const int maxN=1e8+9;

bool prime[maxN];

void sieve()
{

    fill(prime,prime+maxN,true);

    prime[0] = prime[1] = false;
    for(int i=2;i*i<maxN;i++)
    {
        if(prime[i])
            for(int j=i*i;j<maxN;j+=i)
                prime[j]=false;
    }
    
}
// call sieve in main() function
