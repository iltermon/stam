#include <stdio.h>

void main()
{
    int number_of_iterations = 0;
    float drop_volume = 0.9389;
    int report_interval = 1;
    double total_drop_volume_multiplied = 0;
    double total_drop_volume_accumulated = 0;

    printf("Please provide number of iterations:  ");
    scanf("%d", &number_of_iterations)    ;
    printf("Please provide reporting interval:  ");
    scanf("%d", &report_interval);

    int i = 0;
    printf("Reporting interval is %d\n", report_interval);
    for (i = 1; i < number_of_iterations + 1; i++)
    {
        total_drop_volume_multiplied = i * drop_volume;
        total_drop_volume_accumulated = total_drop_volume_accumulated + drop_volume;
        if (i % report_interval == 0)
        {
           printf("Iteration: %d  total drop volume: %e  (multiplied)\n", i, total_drop_volume_multiplied);
           printf("Iteration: %d  total drop volume: %e  (accumulated)\n", i, total_drop_volume_accumulated);
        }
    }
    printf("Absolute error: %e\n", total_drop_volume_multiplied - total_drop_volume_accumulated);
    printf("Relative error: %e\n", (total_drop_volume_multiplied - total_drop_volume_accumulated) / total_drop_volume_accumulated);
}