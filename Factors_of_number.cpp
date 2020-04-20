// Finding Factors for a given number in sqrt(N) time
vector<int>Factor;

void Divisors(int n) 
{ 
    for (int i=1; i<=sqrt(n); i++) 
    { 
        if (n%i == 0) 
        { 
            if (n/i == i) 
                Factor.push_back(i);
            else 
                Factor.push_back(n/i) , Factor.push_back(i); 
        } 
    } 
} 
