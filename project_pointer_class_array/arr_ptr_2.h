#include <array>
#include <algorithm>
#include <cstdlib>
#include <string>
#include <ctime>
#include <iostream>
#include <iomanip>

class stuGrade {
public:
	static const size_t arrSize{ 11 };
	static const size_t colSize{ 5 };
	//	  std::srand(std::static_cast<unsigned int>(time(0)));   //Don't need this here.
	stuGrade() {};

//	void initArr(std::array<int, arrSize>& name) {
//		for (int i{ 0 }; i < name.size(); i++)
//			name[i] = 1 + rand() % 100;
//	}

	void initArr(int *ptrA[colSize]) {
		for (int i{ 0 }; i < colSize; i++){
			for (int j{ 0 }; j < arrSize; j++) {
				if (j != arrSize - 1)
					ptrA[i][j] = 1 + rand() % 100;
				else
					ptrA[i][j] = 0;
			}
		}
	}

	void initArr(std::array<int, arrSize>& name1, std::array<int, arrSize>& name2) {
		for (int i{ 0 }; i < name1.size(); i++) {
			name1[i] = 1 + rand() % 100;
			name2[i] = 1 + rand() % 100;
		}
	}

	void initArr(std::array<int, arrSize>& name1, std::array<int, arrSize>& name2, std::array<int, arrSize>& name3) {
		for (int i{ 0 }; i < name1.size(); i++) {
			name1[i] = 1 + rand() % 100;
			name2[i] = 1 + rand() % 100;
			name3[i] = 1 + rand() % 100;
		}
	}

	void initArr(std::array<int, arrSize>& name1, std::array<int, arrSize>& name2, std::array<int, arrSize>& name3, std::array<int, arrSize>& name4) {
		for (int i{ 0 }; i < name1.size(); i++) {
			name1[i] = 1 + rand() % 100;
			name2[i] = 1 + rand() % 100;
			name3[i] = 1 + rand() % 100;
			name4[i] = 1 + rand() % 100;
		}
	}

	double highestP(std::array<int, arrSize> ar) {
		int hig;
		arr1 = ar;
		sort(arr1.begin(), arr1.end());
		hig = arr1[arr1.size() - 1];
		return hig;
	}

	double lowestP(std::array<int, arrSize> ar) {
		int lo;
		arr2 = ar;
		sort(arr2.begin(), arr2.end());
		lo = arr2[0];
		return lo;
	}

	double avg(std::array<int, arrSize> ar) {
		double sum{ 0 };
		for (int i{ 0 }; i < ar.size(); i++) {
			sum += ar[i];
		}
		return double((round(100*(sum / ar.size())))/100);
	}

	double mean(std::array<int, arrSize> ar) {
		sort(ar.begin(), ar.end());    //Sort the array before we find the array middle index value.

		int mid{ 0 };
		double meanVal{ 0 };

		if (ar.size() % 2 == 0) {
			mid = ar.size() / 2;  //THis value is one more than the actual middle value. Thus, we have to subtract 1 from it as shown below.
			meanVal = (double(ar[mid - 1]) + double(ar[mid])) / 2;
		}
		else{
			mid = ar.size() / 2;   //This value is 1 l ess than the real middle value. It is OK because the index starts at 0.
			meanVal = ar[mid];    //We use the value of mid bvecause the index starts at 0.
		}

		return meanVal;
	}

	void display(std::array<std::string, arrSize>& name1, std::array<int, arrSize>& name2, std::array<int, arrSize>& name3,
		std::array<int, arrSize>& name4, std::array<int, arrSize>& name5) {
		std::cout << "\n\n";
		std::cout << std::setw(55) << "Class Grade information" << "\n\n";
		std::cout << std::setw(6) << "      " << std::setw(22) << "Name        " << std::setw(15)
			<< "Proj 1" << std::setw(15) << "Proj 2" << std::setw(15) << "Proj 3" << std::setw(15) << "Midt 1" << std::endl;

		for (int i{ 0 }; i < name1.size(); i++) {
			if (i < 9)
				std::cout << std::setw(6) << "(" << i + 1 << ")" << std::setw(20) << name1[i] << std::setw(15)
				<< name2[i] << std::setw(15) << name3[i] << std::setw(15) << name4[i] << std::setw(15) << name5[i] << std::endl;
			else
				std::cout << std::setw(5) << "(" << i + 1 << ")" << std::setw(20) << name1[i] << std::setw(15)
				<< name2[i] << std::setw(15) << name3[i] << std::setw(15) << name4[i] << std::setw(15) << name5[i] << std::endl;
		}
	}

	void display2(std::array<std::string, arrSize>& name1, std::array<int, arrSize>& name2, std::array<int, arrSize>& name3,
		std::array<int, arrSize>& name4, std::array<int, arrSize>& name5) {

			std::cout << std::setw(28) << "Average " << std::setw(15) << avg(name2) << 
				std::setw(15) << avg(name3) << std::setw(15) << avg(name4) << std::setw(15) << 
				avg(name5) << std::endl;

			std::cout << std::setw(28) << "Highest " << std::setw(15) << highestP(name2) <<
				std::setw(15) << highestP(name3) << std::setw(15) << highestP(name4) << std::setw(15) <<
				highestP(name5) << std::endl;

			std::cout << std::setw(28) << "Lowest " << std::setw(15) << lowestP(name2) <<
				std::setw(15) << lowestP(name3) << std::setw(15) << lowestP(name4) << std::setw(15) <<
				lowestP(name5) << std::endl;

			std::cout << std::setw(28) << "Mean " << std::setw(15) << mean(name2) <<
				std::setw(15) << mean(name3) << std::setw(15) << mean(name4) << std::setw(15) <<
				mean(name5) << std::endl;

	}

private:
	std::array<int, arrSize> arr1;
	std::array<int, arrSize> arr2;
};


