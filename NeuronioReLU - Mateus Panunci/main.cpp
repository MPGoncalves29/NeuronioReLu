#include "neuronioReLU.hpp" 
using namespace std;


int main(){
    Neuronio* one= new NeuronioReLu({8.4, 9.2 ,1}, 5);

    Neuronio* two = new NeuronioReLu({2, -1.3, 4, 6.5}, 6);

    Neuronio* three = new NeuronioReLu({-3.9, 0.3, 0.8, 1}, -4);

    Neuronio* four = new NeuronioReLu({-3, -2.2, -1, 1, 12}, -3);

    cout << one->predict({0.3, 3, -1}) << endl;
    cout << two->predict({-3, 2.2, 2, -1.3}) << endl;
    cout << three->predict({-2.9, 4, 0.2, -2}) << endl;
    cout << four->predict({5.8, 0.1, -1.8, 9, -9.9}) << endl;
}