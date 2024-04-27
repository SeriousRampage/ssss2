#include "Network.h"

void Network::echoNetwork() {
    for (Neuron neuron : numeric) {
        std::cout << neuron;
    }
}

void Network::buildIndikator() 
    indikator = std::vector<Neuron>();
    indikator.push_back(Neuron("a", true));
    indikator.push_back(Neuron("b", true));
    indikator.push_back(Neuron("c", true));
    indikator.push_back(Neuron("d", true));
    indikator.push_back(Neuron("e", true));
    indikator.push_back(Neuron("f", true));
    indikator.push_back(Neuron("g", true));

    indikator.push_back(Neuron("h", true));
}