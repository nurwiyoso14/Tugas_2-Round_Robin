#include <stdio.h>
#include <stdlib.h>

int main()
{
    int process[6] = {1, 2, 3, 4, 5, 6};
    int  arrive[6] = {0, 50, 130, 190, 210, 350};
    int execute[6] = {250, 170, 75, 100, 130, 50};

    int temp_process;
    int temp_execute;
    int finish[6];
    int queue[6];
    int queue_execute[6];
    int count = 1;
    int time_quantum = 100;
    int time = 100;

    for(int i = 0; i < 6; ++i){
        printf("%d ", process[i]);
    }

    for(int i = 0;i < count && arrive <= time; ++i){
        queue[0] = process[0];
        if (execute >= time_quantum){
           execute[0] = time_quantum - arrive[0];
           time += time_quantum;

           temp_process = process[0];
           temp_execute = execute[0];

           for(i; i > 0 && i < count + 1;++i){
                queue[i] = process[i+1];
                queue_execute[i] = execute[i+1];
           }
        printf("%d ", queue[i]);
        }
        else{
            for(int order = 0; order < 6; ++order){
                finish[i] = process[i];

            }
        }


    }

    return 0;
}
