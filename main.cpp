/* 
 Git repo 6/22/2015
 
 This program will calculate a user's BMI value based on the provided
 weight/height and give evaluation.
 */

#include <iostream>
using namespace std;

int main()
{
   // User-provided values
   double weight, height;

   // BMI value
   double bmi;

   // Ask for user inputs
   cout << "Hello, please enter your weight (in pounds): ";
   cin >> weight;
   cout << "\nPlease enter your height (in inches): ";
   cin >> height;

   // Echo results to screen
   cout << "\nYou weigh " << weight << " pounds and you are "
   << height << " inches tall. ";

   // Check if there is invalid value(<=0) and give error info if detected.
   if (weight <= 0 || height <= 0) {
      cout << "\nError: Invalid input detected.";
      return 1;
   }

   // Calculate BMI value and put to screen, BMI = weight x 703.0 / height ^ 2
   bmi = weight * 703.0 / (height * height);
   cout << "Your BMI value is " << bmi << ". ";

   // Give the evaluation result
   if (bmi < 18.5)
      cout << "You are underweight.";
   else if (bmi > 25)
      cout << "You are overweight.";
   else
      cout << "You are in good shape. Good job!";

   return 0;
}

/* ----------------------RUN #1-------------------------

Hello, please enter your weight (in pounds): 130

Please enter your height (in inches): 66

You weigh 130 pounds and you are 66 inches tall. Your BMI value is 20.9803. You are in good shape. Good job!

------------------------------------------------------ */

/* ----------------------RUN #2-------------------------

Hello, please enter your weight (in pounds): 130

Please enter your height (in inches): 90

You weigh 130 pounds and you are 90 inches tall. Your BMI value is 11.2827. You are underweight.

------------------------------------------------------ */

/* ----------------------RUN #3-------------------------

Hello, please enter your weight (in pounds): 200

Please enter your height (in inches): 56

You weigh 200 pounds and you are 56 inches tall. Your BMI value is 44.8342. You are overweight.

------------------------------------------------------ */

/* ----------------------RUN #4-------------------------

Hello, please enter your weight (in pounds): 0

Please enter your height (in inches): 0

You weigh 0 pounds and you are 0 inches tall. 
Error: Invalid input detected.

------------------------------------------------------ */

/* ----------------------RUN #5-------------------------

Hello, please enter your weight (in pounds): 100

Please enter your height (in inches): -60

You weigh 100 pounds and you are -60 inches tall. 
Error: Invalid input detected.

------------------------------------------------------ */

