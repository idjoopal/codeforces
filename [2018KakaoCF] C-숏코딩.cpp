#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

int main(void){

    int n, k;
    int doll;

    double k_avg=0;
    double k_dev=0;
    double min_dev=10000;

    vector<int> dolls;

    scanf("%d %d", &n, &k);

    for(int i=0; i<n; i++){
        scanf("%d ", &doll);
        dolls.push_back(doll);
    }

    for(int i=0; i<=n-k; i++){
        k_avg=0;
        k_dev=0;

        //평균 구하기
        for(int j=i; j<i+k; j++){
            k_avg += dolls[j];
        }
        k_avg = k_avg/k;

        for(int j=i; j<i+k; j++){
            k_dev += pow(dolls[j]-k_avg, 2);
        }
        k_dev = sqrt(k_dev);

        if(min_dev > k_dev){
            min_dev = k_dev;
        }
    }
    printf("%lf", min_dev);
    return 0;
}