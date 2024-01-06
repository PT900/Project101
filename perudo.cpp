// Library
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;

// Prototypes
double maxDiceProbability(double, int, char);
vector<int> extractDigits(int);
void vectorResult(vector<int>);
vector<double> diceFaceProbability(vector<int>, int);

int main() {
  // Variables
  int player = 6;
  double maxDice = player * 5;
  int subtDice, myDice;
  char palifico;

  // Input
  printf("Current Lose Dice: ");
  scanf("%d", &subtDice);
  printf("My Dice: ");
  scanf("%d", &myDice);
  printf("Palifico? (y/n): ");
  scanf(" %c", &palifico);

  vector<int> myDiceVector = extractDigits(myDice);
  double maxDiceProb = maxDiceProbability(maxDice, subtDice, palifico);

  printf("\nCurrent Max Dice Probability: %.2lf\n\n", maxDiceProb);
  // printf("My Dice: ");

  printf("My Dice Vector: ", myDiceVector[1]);
  vector<double> myDiceProbabilityVector = diceFaceProbability(myDiceVector, (int)maxDiceProb);
  for (double& probability : myDiceProbabilityVector) {
    printf("%.2lf ", probability);
  }
}

// Functions to calculate probability of max dice
double maxDiceProbability(double max, int subt, char pal) {
  return (max - subt) / (pal == 'y' ? 6 : 3);
}

// Functions to extract digits from integer
vector<int> extractDigits(int myDiceParam) {
  vector<int> myDiceVector;
  while (myDiceParam > 0) {
    int digit = myDiceParam % 10;
    myDiceVector.push_back(digit);
    myDiceParam /= 10;
  }

  reverse(myDiceVector.begin(), myDiceVector.end());
  return myDiceVector;
}

// Functions to print vector result with auto type  
template <typename T>
void vectorResult(const vector<T>& vectorInput) {
  for (const auto& item : vectorInput) {
    cout << item << " ";
  }
  cout << endl;
}

// Functions to calculate probability of each dice face 1-6
vector<double> diceFaceProbability(vector<int> myDiceVector, int maxDiceValue) {
    // Initialize the probability vector
    vector<double> diceProbabilityVector(maxDiceValue, 0.0);

    // Base chance of each face value
    for (int i = 0; i < 6; i++) {
      diceProbabilityVector[i] = maxDiceValue / 6;
    }

    // Count the occurrences of each face value
    for (int faceValue : myDiceVector) {
      if (faceValue >= 1 && faceValue <= maxDiceValue) {
        diceProbabilityVector[faceValue - 1] += 1.0;
      }
    }

    // Calculate probabilities
    for (double& probability : diceProbabilityVector) {
      probability /= myDiceVector.size();
    }

    return diceProbabilityVector;
}