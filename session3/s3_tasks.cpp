#include <iostream>
#include <array>
#include <numeric>
#include <signal.h>

void signal_callback_handler(int signum) {
   std::cout << "Caught signal " << signum << std::endl;
   // Terminate program
   exit(signum);
}

int main (void)
{
    /*TASK1: Initialize an array with numbers from 10 to 10000*/
    std::array<int, 9991/*10000-10+1*/ > a;
    std::iota(a.begin(), a.end(), 10);

    for(int i: a )
    {
        //std::cout << i << ",";
    }
    std::cout << std::endl;

    /*TASK2: Accumulate array elements*/
    std::cout << "\n************\n";
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int n = 7, sum = 0;
    sum = std::accumulate(arr, arr+n, sum);
    std::cout << "arr = {" ;
    for(int i: arr )
    {
        std::cout << i << ",";
    }
    std::cout<<"}\nThe array sum is "<<sum << std::endl;

    /*TASK3: Handle a hotkey*/
    std::cout << "\n************\n";
    //Register signal and signal handler
    signal(SIGINT, signal_callback_handler);

    while(true){
        std::cout << "Program processing..." << std::endl;
        sleep(1);
    }


    return EXIT_SUCCESS;

    return 0;
}