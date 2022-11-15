// Definition of class GradeBook that uses an array to store test grades.
#include <string> 
#include <array>
#include <iostream> 
#include <iomanip> // parameterized stream manipulators


// GradeBook class definition
class GradeBook {
public:
   // constant number of students who took the test
   static const size_t students{15}; // note public datas

   GradeBook(std::string name, const int *ptrGrade) {
	   courseName = name;
   };

   // determine average grade for test
//   double getAverage(const int *ptr) const;
   double getAverage(const int *ptr) const {
	   double total{ 0 }; // initialize total
	   int element{ 0 };

	   // sum grades in array
	   for (int i{ 0 }; i < 15; i++) {
		   total += *(ptr + i); //To access the elements of the pointer "ptr", use *(ptr + i); where i represents the index of the element.
		   element++;
	   }
	   // return average of grades
	   return total / element;
   }

//   int getAboveAvg(const int *ptr);
   int getAboveAvg(const int *ptr) {
	   int ttl{ 0 };
	   for (int i{ 0 }; i < 15; i++) {
		   if (*(ptr + i) > 69)
			   ttl++;
	   }
	   return ttl;
   }

//   void outputGrades(const int *ptrGrade1, const int *ptrGrade2, string s1, string s2);
   void outputGrades(const int *ptrGrade1, const int *ptrGrade2, std::string s1, std::string s2) {
	   std::cout << "\nThe grades for " << s1 << " and " << s2 << " are:\n\n";

	   // output each student's grade
	   for (size_t t{ 0 }; t < students; ++t) {
		   std::cout << "Student " << std::setw(2) << t + 1 << ": "
			   << std::setw(15) << *(ptrGrade1 + t) << std::setw(15) << *(ptrGrade2 + t) << std::endl;
	   }
   }

private:
	std::string courseName; // course name for this grade book
	std::array<int, students> grades; // array of student grades
};
