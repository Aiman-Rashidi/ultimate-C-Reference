// #include <stdio.h>

// int *change(int *);

// int *change(int *num_passesd)
// {
//     printf("3The number in change function before changed %d\n", *num_passesd);
//     // printf("3The number in change function before changed %d\n", num_passesd);
//     printf("4Address of num_passed before it get changed %u\n", *(&num_passesd)); // pointer to pointer used here as the 1st ponter is pointer from it
//     // printf("4Address of num_passed before it get changed %u\n", &num_passesd);
//     *num_passesd = 17;
//     printf("5The number in change function after changed %d\n", *num_passesd);
//     // printf("5The number in change function after changed %d\n", num_passesd);
//     printf("6Address of num_passed after it get change %u\n", &num_passesd);
//     return num_passesd;
// }

// int main()
// {
//     int num = 7;

//     printf("1The number before chnage function is %d\n", num);
//     printf("2Address of num before change function is %u\n", &num);

//     change(&num);

//     printf("7The number after change function is %d\n", num);
//     printf("8Address of num after change function is %u\n", &num);

//     return 0;
// }

// a num is passed as its address(pointer) to changed function and then that pointer (which is actually the address on main variable which have to be changed) and have an another pointer address(value at that pinter address is the the pointer of main variable passed) then the value at 1st pointer/address_pointer get changed. in this way pointer to pointer relation works and the pointer_address of main variable's value get changed

// GPT SUMMARIES:::A pointer to a pointer allows indirect modification of a variable in the main function. The main variable's address is passed to a function as a pointer. Within the function, another pointer points to this pointer (pointer-to-pointer). By modifying the value at the address held by the first pointer, the value of the main variable is updated. This demonstrates how pointer-to-pointer relationships enable changes to the original variable.

#include <stdio.h>

int *change(int *);

int *change(int *num_passed)
{
    *num_passed = 7;
    printf("The number in change function is %d\n", *num_passed);
    // printf("Address of num variable inside change function is %p\n", *(&num_passed));
    printf("Address of num variable inside change function is %p\n", &num_passed);
    // return num_passed; // returning is not necessary because we just want to change the value at that address even it is not necessary to use int function we can also use void function(as in swap.c file)
}

int main()
{
    int num = 5;

    printf("The number before change function is %d\n", num);
    printf("Address of num variable before execuation of change function is %p\n", &num);

    change(&num);

    printf("The number after change function is %d\n", num);
    printf("Address of num variable after execuation of change function is %p\n", &num);

    return 0;
}

// call by reference can change the value of variable also in main ariable as now the memory location is manupilated
