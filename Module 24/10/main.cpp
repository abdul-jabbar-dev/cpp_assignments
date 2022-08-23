#include <bits/stdc++.h>
#include "ABDUL_STACK.h"
using namespace std;
int main()
{
    // myStack<float> st;
    myStack<int> st;
    // st.push(7.2);
    // st.push(8.3);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(7);

    cout << st.mid();
    // cout << st.count << endl;
    return 0;
}
