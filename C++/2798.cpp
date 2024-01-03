#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M;
    cin >> N >> M;
    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    int max_sum = 0;
    // 3중 반복문을 사용하여 3장의 카드 조합을 모두 탐색
    for(int i = 0; i < N-2; i++) {
        for(int j = i+1; j < N-1; j++) {
            for(int k = j+1; k < N; k++) {
                int sum = cards[i] + cards[j] + cards[k];
                if(sum <= M) {
                    max_sum = max(max_sum, sum);
                }
            }
        }
    }

    cout << max_sum;
    return 0;
}


#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, M;
    cin >> N >> M;
    vector<int> cards(N);
    for (int i = 0 ; i < N; i++){
        cin >> cards[i];
    }

    sort(cards.begin(), cards.end());

    int max_sum = 0;
    do{
        int sum = 0;
        for(int i = 0; i < 3; i++){
            sum += cards[i];
        }
        if(sum <= M){
            max_sum = max(max_sum, sum);
        }
    } while(next_permutation (cards.begin(), cards.end()));
    cout << max_sum;
    return 0;
}