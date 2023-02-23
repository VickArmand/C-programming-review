#include <stdio.h>
/**
 * enum is a user defined type to assign names to integer constants
 * macros is in global scope while enum can be local or global scope
 * macros requires a value while enum members can be assigned values by compiler automatically when not assigned
 * macros can only take one value while enums can take a list of values
 * in enums an enum value cant exist in 2 different enums in the same scope
 * in enums only integers are allowed
 * enum can be used in switch case , when we need a set of possible values
*/
int main(void)
{
    enum days {
        monday,
        tuesday,
        wednesday,
        thursday,
        friday,
        saturday,
        sunday
        };
        printf("%d\n",monday);
        printf("%d\n",tuesday);
        printf("%d\n",wednesday);
        printf("%d\n",thursday);
        printf("%d\n",friday);
        printf("%d\n",saturday);
        printf("%d\n",sunday);
    enum days today = saturday;
    switch(today)
    {
        case monday:
            printf("Weekday");
            break;
        case tuesday:
            printf("Weekday");
            break;
        case wednesday:
            printf("Weekday");
            break;
        case thursday:
            printf("Weekday");
            break;
        case friday:
            printf("Weekday");
            break;
        case saturday:
            printf("Weekend");
            break;
        case sunday:
            printf("Weekend");
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}