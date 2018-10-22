int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int now=0;
    int cnt=1;
    
    while(true){
        if(A[now] == -1){
            return cnt;
        }
        now = A[now];
        cnt++;
    }
}