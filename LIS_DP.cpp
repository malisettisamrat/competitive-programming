// finding the longest increasing subsequence using binary search + Dynamic programming

void solveTestCase()
{
	int n;
	cin >> n;

	vector < int > v(n), lis;

	for(int i=0; i<n; i++)
		cin >> v[i];

	lis.push_back(v[0]);

	for(int i=1; i<n; i++)
	{
		if(lis[lis.size()-1] < v[i]){
			lis.push_back(v[i]);
		}
		else {
			int ind = lower_bound(lis.begin(),lis.end(), v[i])-lis.begin();
			lis[ind] = v[i];
		}
	}

	cout << lis.size() << endl;

}
