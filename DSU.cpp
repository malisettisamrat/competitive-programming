// find and union of DSU


// FIND :-

int find(int a)
{
    if (par[a] < 0)
        return a;
    else {
        int x = find(par[a]);
        par[a] = x;
        return x;
    }
}

// UNION :-

void Union(int a , int b)
{
    par[b] = a;
}
