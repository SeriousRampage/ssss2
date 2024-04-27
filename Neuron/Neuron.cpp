#include "Neuron.h"
#include <random>

Neuron::Neuron(std::string name, bool isFirst) : 
    name(name), 
    isFirst(isFirst)
{
    neurons = std::vector<Neuron>();
    weights = std::vector<double>();
}

void Neuron::setRandomWeights() {
    int size = neurons.size();
    weights = std::vector<double>();
    for (int i = 0; i < size; i++) {
        std::uniform_real_distribution<double> unif;
        std::default_random_engine re;
        weights.push_back(unif(re));
    }
}

std::string Neuron::getName() const
{
    return name;
}

std::vector<Neuron> Neuron::getNeurons() const
{
    return neurons;
}

std::vector<double> Neuron::getWeights() const
{
    return weights;
}

void Neuron::setName(std::string name)
{
    this->name = name;
}

void Neuron::setNeurons(std::vector<Neuron> neurons)
{
    this->neurons = neurons;
}

void Neuron::setWeights(std::vector<double> weights)
{
    this->weights = weights; 
}

std::ostream &operator<<(std::ostream &os, const Neuron &obj)
{
    std::string res = "Neuron " + obj.name + ":\n [";
    for (int i = 0; i < obj.neurons.size(); i++) {
        res += obj.getNeurons()[i].getName() + " ";
        res += obj.getWeights()[i];
        res += ", ";
    }
    res += "]\n";
    os << res;
    return os;
}
