 #include <stdio.h>
 void swap (int *a, int *b) // a and b are reference variables
 {
    int temp;
    temp = *a; 
    *a = *b;
    *b = temp;
    
 } 
 int main()
 {
    int x = 2, y = 4;
    printf("before swapping x = %d and y = %d\n", x, y);
    swap(&x, &y);     // call by reference
    printf("\n After swapping x=%d and y=%d",x,y);
    return 0;
}
