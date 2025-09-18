#include <stdio.h>
#include <string.h>

int main() {
    int course, spec;
    
    printf("Enter your department name\n");
    printf("1 for Engineering or 2 for Medicine: ");
    scanf("%d", &course);  

    switch (course) {
        case 1:
            printf("You chose Engineering.\n");
            printf("Choose specialization.\n");
            printf("1 for Electrical or 2 for Mechanical: ");
            scanf("%d", &spec);  
            switch (spec) {
                case 1:
                    printf("Subject: Circuits.\n");
                    break;
                case 2:
                    printf("Subject: Torque.\n");
                    break;
                default:
                    printf("Invalid Option chosen for Engineering specialization.\n");
                    break;
            }
            break;
        
        case 2:
            printf("You chose Medicine.\n");
            printf("Choose specialization.\n");
            printf("1 for MBBS or 2 for BDS: ");
            scanf("%d", &spec);  

            switch (spec) {
                case 1:
                    printf("Subject: Dental.\n");
                    break;
                case 2:
                    printf("Subject: Orthodontix.\n");
                    break;
                default:
                    printf("Invalid Option chosen for Medicine specialization.\n");
                    break;
            }
            break;

        default:
            printf("Invalid department option.\n");
            break;
    }

    return 0;
}
