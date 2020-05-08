/* https://codingcompetitions.withgoogle.com/kickstart/round/000000000019ffc8/00000000002d82e6
    Bike Tour  */

#include<iostream>
#include<vector>
using namespace std;

int checkpeak(vector<int> numbers, int N){
    int peaks=0;
    for(int i=1;i<N-1;i++){
        if(numbers[i]>numbers[i-1] && numbers[i]>numbers[i+1]){
            peaks++;
            i++;
        }
    }
    return peaks;
}

int main(){
    int N,T,num;
    vector<int> numbers;
    cin>>T;
    for(int i=1;i<=T;i++){
        cin>>N;
        for(int j=0;j<N;j++){
            cin>>num;
            numbers.push_back(num);
        }
        cout<<"Case #"<<i<<": "<<checkpeak(numbers,N)<<endl;
        numbers.clear();
    }
    return 0;
}
