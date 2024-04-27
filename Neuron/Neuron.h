#include <vector>
#include <string>

class Neuron
{
private:
    bool isFirst;
    std::string name;
    std::vector<Neuron> neurons;
    std::vector<double> weights;
public:
    Neuron(std::string name, bool isBegin);
public:
    void setRandomWeights();
public:
    std::string getName() const;
    std::vector<Neuron> getNeurons() const;
    std::vector<double> getWeights() const;
public:
    void setName(std::string);
    void setNeurons(std::vector<Neuron>);
    void setWeights(std::vector<double>);
public:
    friend std::ostream& operator<<(std::ostream& os, const Neuron& obj);
};