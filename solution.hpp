#ifndef SOLUTION_HPP
#define SOLUTION_HPP

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;

class SolutionTwentyThree{
public:
	/*intenta contar cuantos subarreglos removibles de un arreglo
	dado cumplen con la propiedad de ser estrictamente crecientes*/
	bool check(vector<int> tmp){
		for(int i=1; i<tmp.size(); i++){
			//si es decreciente es falso
			if(tmp[i] <= tmp[i-1]) return false;
		}
		return true;
	}
	int incremovableSubarrayCount(vector<int>& nums){
		int c=0, n=nums.size();
		for(int i=0; i<n; i++){
			for(int j=i; j<n; j++){
				vector<int> tmp;
				//aaaaaa ya entendi
				for(int k=0; k<i; k++) tmp.push_back(nums[k]);
				for(int k=j+1; k<n; k++) tmp.push_back(nums[k]);
				if(check(tmp)) c++;
			}
		}
		return c;
	}
};

#endif