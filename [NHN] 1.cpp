#include <iostream>
#include <vector>
using namespace std;

int c, p;
int mix_n;
vector<int> card;
vector<int> temp;

//카드 섞는 함수
void mixing(int n){
	int now_mixed = c;

    do{
       now_mixed -= n*2;

       temp.clear();
       //가운데 것을 맨위에 넣기
       temp.insert(temp.begin(), card.begin()+n, card.begin()+n+now_mixed);
       
       //맨위에 있던 것을 그다음에 넣기
       temp.insert(temp.end(), card.begin(), card.begin()+n);
       
       //맨 밑에 있던 것을 밑에 깔기
       temp.insert(temp.end(), card.begin()+n+now_mixed, card.end());

       card.clear();
       card.swap(temp);
       //card.insert(card.begin(), temp.begin(), temp.end());

    }while( now_mixed > (n*2) );
}


int main() {
	
    //카드개수받아서 세팅
    scanf("%d", &c);
    for(int i=1; i<=c; i++){
        card.push_back(i);
    }

    //카드 섞는 횟수받기
    scanf("%d", &p);

    //횟수만큼 카드 섞기
    for(int i=0; i<p; i++){
        scanf("%d", &mix_n);
        mixing(mix_n);
    }

    //카드 5개 출력
    for(int i=0; i<5; i++){
        printf("%d\n", card[i]);
    }
    
	return 0;
}