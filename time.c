#include <sys/time.h>

double elapsed_time(struct timeval* start_time, struct timeval* end_time){
    //TODO: return the difference between end_time and start_time.
    double startsec = start_time->tv_sec, endsec = end_time->tv_sec,
    startnsec = start_time->tv_usec, endnsec = end_time->tv_usec;
    return (endsec - startsec) * 1000000 + (endnsec - startnsec);
}