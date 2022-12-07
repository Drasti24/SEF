#include <stdio.h>

void train()
{
    printf("train");
#<<<<<<< secondFeature
#    printf("The second feature is added");
#=======
    printf("The first feature is added");
#>>>>>>> main
}

void predict()
{
    printf("predict");
}

int main()
{
    train();
    predict();
}