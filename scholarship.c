#include <stdio.h>
int main() {
char studentName[50];
float average;
float maths, physics, chemistry, english, computerScience;
int extracurriculars, specialNeeds, location;
float familyIncome;

// minimum average required for the scholarship
const float scholarshipEligibility = 85.0;

// for financial aid eligibility
const float financialAidEligibility = 300000.0;

printf("Enter the student's name for scholarship eligibility: ");
scanf("%s", studentName);
printf("Enter Grade 12 marks for the following subjects:\n");
printf("Maths: ");
scanf("%f", &maths);
printf("Physics: ");
scanf("%f", &physics);
printf("Chemistry: ");
scanf("%f", &chemistry);
printf("English: ");
scanf("%f", &english);
printf("Computer Science: ");
scanf("%f", &computerScience);
average = (maths + physics + chemistry + english + computerScience) / 5;

// Display average and check eligibility
printf("\nAverage Marks: %.2f\n", average);
if (average >= scholarshipEligibility) {
printf("%s is eligible for the scholarship based on academic performance.\n",
studentName);
} else {
printf("%s is not eligible for the scholarship based on academic performance.\n",
studentName);
}

// Additional checks for scholarship eligibility
// Financial background check
printf("\nEnter parent's annual income (in INR): ");
scanf("%f", &familyIncome);
if (familyIncome < financialAidEligibility) {
printf("Eligible for scholarship based on financial need.\n");
} else {
printf("Not eligible for financial aid-based scholarship.\n");
}

// Extracurricular achievements check
printf("\nEnter number of extracurricular achievements (0-5): ");
scanf("%d", &extracurriculars);
if (extracurriculars >= 3) {
printf("Eligible for extracurricular achievements-based scholarship.\n");
} else {
printf("Not eligible for extracurricular achievements-based scholarship.\n");
}

// Location-based quotas check
printf("\nEnter your location (1 for Rural, 2 for Urban): ");
scanf("%d", &location);
if (location == 1) {
printf("Eligible for rural area-based scholarship.\n");
} else {
printf("Not eligible for rural area-based scholarship.\n");
}

// Special needs eligibility
printf("\nDo you have any special needs (1 for Yes, 0 for No): ");
scanf("%d", &specialNeeds);
if (specialNeeds == 1) {
printf("Eligible for special needs-based scholarship.\n");
} else {
printf("Not eligible for special needs-based scholarship.\n");
}
return 0;
}
