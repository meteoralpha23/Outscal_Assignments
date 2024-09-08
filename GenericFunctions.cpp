

#include <iostream>
using namespace std;

template <typename T>
T Myscore(T currentScore,T AddedScore)
{
    return (currentScore+AddedScore);
}

int main()
{
    
    cout<<"Your score is"<<Myscore<int>(1,2)<<endl;  //int
    cout<<"Your score is"<<Myscore<float>(1.2,3.2)<<endl;
    
}
