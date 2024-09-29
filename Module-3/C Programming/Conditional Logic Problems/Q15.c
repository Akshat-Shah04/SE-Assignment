//---- Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and
//Total in all three subject >=190 or Total in Maths and Physics >=140 ----

#include <stdio.h>
#include <string.h>

int main() {
    int total = 0, maths, phy, chem;
    int PM;
    char msg[20];

    printf("Enter marks in following subjects...\nMaths: ");
    scanf("%d", &maths);
    printf("Physics: ");
    scanf("%d", &phy);
    printf("Chemistry: ");
    scanf("%d", &chem);

    total = maths + phy + chem;
    PM = phy + maths;

    if ((maths >= 65 && phy >= 55 && chem >= 50 && total >= 190) || PM >= 140) {
        strcpy(msg, "Eligible");
    } else {
        strcpy(msg, "Not Eligible");
    }

    printf("\n---------------------------------------------");
    printf("\nSubject\t\t\tYour Marks\tEligibility");
    printf("\n---------------------------------------------");
    printf("\nMaths    \t\t  %d\t\t%s", maths, (maths >= 65 ? "65" : "Not Eligible(<65)"));
    printf("\nPhysics  \t\t  %d\t\t%s", phy, (phy >= 55 ? "55" : "Not Eligible(<55)"));
    printf("\nChemistry\t\t  %d\t\t%s", chem, (chem >= 50 ? "50" : "Not Eligible(<50)"));
    printf("\n---------------------------------------------");
    printf("\nTotal of Maths & Physics:  %d\t\t%s", PM, (PM >= 140 ? "140" : "Not Eligible(<140)"));
    printf("\n---------------------------------------------");
    printf("\nTotal:  \t\t  %d\t\t%s", total, (total >= 190 ? "190" : "Not Eligible(<190)"));
    printf("\n---------------------------------------------");
    printf("\nYour Eligibility:  %s", msg);
    printf("\n---------------------------------------------");

    return 0;
}

