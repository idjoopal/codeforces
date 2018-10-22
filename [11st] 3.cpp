int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int cnt_tail=0;
    int size = A.size();
    
    for(int i=0; i<size; i++){
        cnt_tail += A[i];    
    }
    
    if(cnt_tail>= size/2){
        return size-cnt_tail;
    }else{
        return cnt_tail;
    }
}