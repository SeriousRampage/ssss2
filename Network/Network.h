#include <iostream>
#include "Neuron.h"

class Network
{
private:
    std::vector<Neuron> indikator;
    std::vector<Neuron> numeric;
public:
    Network();

    void echoNetwork();

    void buildIndikator();

    void buildNumeric(){
        numeric = std::vector<Neuron>();

        // 1
        Neuron one = Neuron("One", false);
        one.setNeurons(indikator);
        one.setRandomWeights();
        numeric.push_back(one);

        // 7
        Neuron seven = Neuron("Seven", false);
        seven.setNeurons(indikator);
        seven.setRandomWeights();
        numeric.push_back(seven);
    }
};