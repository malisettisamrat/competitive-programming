// Implementation of Segment Tree

vector< int > v(100001);

vector< int > st(400006);

// Building a Segment Tree

void SegTree(int index , int start , int end) {

    if (start == end)
    {
        st[index] = v[start];
        return ;
    }

    int mid = (start + end) / 2;

    SegTree( 2 * index, start, mid);
    SegTree( 2 * index + 1, mid + 1, end);

    st[index] = min(st[2 * index], st[2 * index + 1]);

}

// Queries on Segment Tree's

int Seg_query(int index, int start, int end, int qs, int qe)
{
    if(start > qe || end < qs) // check if this is not mentioned whether the code works or not
        return INT_MAX;

    if(start >= qs and qe >= end)
        return st[index];

    int mid = ( start + end ) / 2;
    int left = Seg_query(2*index,start,mid,qs,qe);
    int right = Seg_query(2*index+1,mid+1,end,qs,qe);

    return min(left, right);


}
