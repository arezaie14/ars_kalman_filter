# A Simple Kalman Filter

This is a simple Kalman filter based on c language, but it's easy to use in all programming languages such a micro controllers and cross platform programmings and ...

### Refrence :
https://github.com/denyssene/SimpleKalmanFilter.git


### How To use:

1- init your kalman with kalman function like:
kalman(4,4,0.016);
2- use kalman_update() to filter your data

### sample program:
```
//....
//your functions and variables
//....
int main(){
  float kalman_out;
  float your_data_to_filter=0;
  kalman(4,4,0.016);
  while(true){
    
    your_data_to_filter=read_adc(0);  
    //this is an example function like reading analog value with microcontroller or other function you want ...
    
    kalman_out=kalman_update(your_data_to_filter);
    // now kalman filter result is in kalman_out variable, you can use it :).
  
  }
}
```
