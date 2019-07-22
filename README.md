# ars_kalman_filter
refrence : https://github.com/denyssene/SimpleKalmanFilter.git

This is Kalman filter is in c language for all programming languages such a micro controllers and cross platform programmings and ...

To use:

1- init your kalman with kalman function like:
kalman(4,4,0.016);
2- use kalman_update() to filter your data

sample program:

//....
//your functions and variables
//....
int main(){
  float kalman_out;
  float your_data_to_filter=0;
  kalman(4,4,0.016);
  while(true){
    your_data_to_filter=read_adc(0);   //this is an example function like reading analog value with microcontroller or other function you want ...
    kalman_out=kalman_update(your_data_to_filter); // kalman filter result will be in kalman_out variable.
  }
}
