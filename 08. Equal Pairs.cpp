#include <iostream>
#include <climits>
using namespace std;

int main(){
	int numberOfPairs, firstNumber, secondNumber, sum = 0, lastSum = 0,max = INT_MIN, temp = 0;
	cin >> numberOfPairs;
	bool isEqualPairs = true;

	for (int count = 0; count < numberOfPairs; count++)
	{
		cin >> firstNumber >> secondNumber;
		sum = firstNumber + secondNumber;
		
		if (lastSum != sum && count > 0)
			{
				isEqualPairs = false;
				temp = abs(lastSum - sum);
				max = (max < temp ? temp : max);
			}
			lastSum = sum;
		 
	}
	if (isEqualPairs == true)
	{
		cout << "Yes, value=" << sum;
	}
	else
	{
		cout << "No, maxdiff=" << max;
	}

	return 0;
}
