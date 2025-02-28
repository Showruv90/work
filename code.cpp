#include <iostream>
#include <thread>
#include <chrono>
#include <unordered_map>
#include <string>

using namespace std;

class TrafficSignal {
private:
    int greenTime;
    int redTime;
    int pedestrianTime;
    int trafficDensity;
    unordered_map<string, int> finesDatabase;

public:
    TrafficSignal(int green, int red, int pedestrian)
        : greenTime(green), redTime(red), pedestrianTime(pedestrian), trafficDensity(0) {}

   

