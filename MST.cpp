// IMPLEMENTATION OF KRUSKAL ALGO :-

struct Edges
{
    int a, b, w;
};

int par[100001];

int find(int x) {
    if (par[x] < 0) {
        return x;
    }

    else {
        int a = find(par[x]);
        par[x] = a;
        return a;
    }
}

void Union(int a , int b)
{
    par[b] = a;
}

bool cmp(Edges a, Edges b) {
  
    if (a.w < b.w)
        return true;

    return false;
}

void solveTC() {

    int n, m, A, B;
    cin >> n >> m;

    Edges arr[m + 1];

    for (int i = 1; i <= n; i++) par[i] = -1;

    for (int i = 0; i < m; i++) {
        cin >> arr[i].a >> arr[i].b >> arr[i].w;
    }

    int sum = 0;
  
    sort(arr , arr + m, cmp); // sort according to their weights

    for (int i = 0; i < m; i++) {

        A = find(arr[i].a);
      
        B = find(arr[i].b);

        if (A != B) { // if both parents are not equal then we will merge those two parents
            sum += arr[i].w;
            Union(A, B);
        }
    }

    cout << sum << endl;

}
