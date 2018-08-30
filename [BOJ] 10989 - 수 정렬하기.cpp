#include <bits/stdc++.h>
using namespace std;

//int arr[10000000];
//int m_arr[10000000];
int n, t;

// // 선택정렬
// void select_sort(){
//     int min, index, temp;

//     for(int i=0; i<n; i++){
//         min=10001;
//         for(int j=i; j<n; j++){
//             if(min > arr[j]){
//                 min = arr[j];
//                 index = j;
//             }
//         }
//         temp = arr[i];
//         arr[i] = arr[index];
//         arr[index] = temp;
//     }
// }

// // 버블 정렬
// void bubble_sort(){
//     int temp;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-1-i; j++){
//             if(arr[j] > arr[j+1]){
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }

// // 삽입 정렬
// void insert_sort(){
//     int i, j, temp;
//     for(i=0; i<n-1; i++){
//         j=i;
//         while(j>=0&& arr[j] > arr[j+1]){
//             temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//             j--;
//         }
//     }
// }

// // 퀵 정렬
// void quick_sort(int start, int end){
//     if(start >= end){
//         return;
//     }
//     int key = start;
//     int i = start + 1;
//     int j = end;
//     int temp;

//     while(i<=j){
//         while(i<=end && arr[i] < arr[key]){
//             i++;
//         }
//         while(j<=start && arr[j] < arr[key]){
//             j--;
//         }

//         if(i>j){
//             temp = arr[j];
//             arr[j] = arr[key];
//             arr[key] = temp;
//         }else{
//             temp = arr[i];
//             arr[i] = arr[j];
//             arr[j] = temp;
//         }
//     }
//     quick_sort(start, j-1);
//     quick_sort(j+1, end);
// }

// 병합 정렬
// void merge(int m, int middle){
//     int i = m;
//     int j = middle +1;
//     int k = m;

//     while(i <= middle && j<=n){
//         if(arr[i] <= arr[j]){
//             m_arr[k] = arr[i];
//             i++;
//         }else{
//             m_arr[k] = arr[j];
//             j++;
//         }
//         k++;
//     }

//     if(i>middle){
//         for(int t=j; t<=n; t++){
//             m_arr[k] = arr[t];
//             k++;
//         }
//     }else{
//         for(int t=i; t<=middle; t++){
//             m_arr[k] = arr[t];
//             k++;
//         }
//     }
//     for(int t=m; t <= n; t++){
//         arr[t] = m_arr[t];
//     }
// }

// void merge_sort(int m, int n){
//     if(m < n){
//         int middle = (m+n)/2;
//         merge_sort(m, middle);
//         merge_sort(middle+1, n);
//         merge(m, middle);
//     }
// }

// void heap_sort(){
//     for(int i = 1; i < n; i++){
//         int c = i;
//         do{
//             int root = (c-1)/2;
//             if(arr[root] < arr[c]){
//                 int temp = arr[root];
//                 arr[root] = arr[c];
//                 arr[c] = temp;
//             }
//             c = root;
//         }while(c != 0);
//     }

//     for(int i=n-1; i>=0; i--){
//         int temp = arr[0];
//         arr[0] = arr[i];
//         arr[i] = temp;
//         int root = 0;
//         int c = 1;
//         do{
//             c = 2* root +1;
//             if(c < i-1 && arr[c] < arr[c+1]){
//                 c++;
//             }
//             if(c<i && arr[root] < arr[c]){
//                 temp = arr[root];
//                 arr[root] = arr[c];
//                 arr[c] = temp;
//             }
//             root = c;
//         } while(c < i);
//     }
// }

void count_sort(){
    int count[10001]={0,};
    int t;
    for(int i=0; i<n; i++){
        scanf("%d", &t);
        count[t]++;
    }
    for(int i=1; i<=10000; i++){
        if(count[i] != 0){
            for(int j=0; j<count[i]; j++){
                printf("%d\n", i);
            }
        }
    }
}


int main(void){
    scanf("%d", &n);
    
    // for(int i=0; i<n; i++){
    //     scanf("%d", &arr[i]);
    // }

    //sort
    //quick_sort(0, n-1);
    //merge_sort(0, n-1);
    //heap_sort();
    count_sort();

    // for(int i=0; i<n; i++){
    //     printf("%d\n", arr[i]);
    // }
    return 0;
}