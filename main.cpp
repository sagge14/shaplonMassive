#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

template<typename T>
void inputVector(vector<T>& vecT, int size)
{
    for (int i = 0; i < size; ++i) {
        T value;
        cout << "Enter " << i+1 << " value:";
        cin >> value;
        vecT.push_back(value);
    }
}

template<typename T>
T average(vector<T>& vecT)
{
    T sum = accumulate(vecT.begin(),vecT.end(),T{});
    return sum/(T)vecT.size();
}

int main() {

    int size;
    string type;
    cout << "---Average---" << endl;
    cout << "Enter massive size :";
    cin >> size;
    cout << "Enter massive type(int, double or float):";
    cin >> type;

    if(type == "int")
    {
        vector<int> myV;
        inputVector(myV, size);
        cout << "Average = " << average(myV) << endl;
    }
    else if (type == "double")
    {
        vector<double> myV;
        inputVector(myV, size);
        cout << "Average = " << average(myV) << endl;
    }
    else if (type == "float")
    {
        vector<float> myV;
        inputVector(myV, size);
        cout << "Average = " << average(myV) << endl;
    }
    else
        cout << "Unknown type!" << endl;

    cout << "---Bye, bye!---" << endl;
    return 0;
}
