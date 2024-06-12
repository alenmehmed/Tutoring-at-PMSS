// Alen Mehmedbegovic
// Tutoring at PMSS June 5th, 2024

#include <stdio.h>

unsigned int square(unsigned int i)
{
    return i*i;
}

int main()
{
    unsigned int counter = 1;
    unsigned int result;

    while(counter < 4)
    {
        result = square(counter);
        printf("%d\n",result);
        counter++;
    }

}
