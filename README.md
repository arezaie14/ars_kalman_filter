# A Simple Kalman Filter

This is a simple Kalman filter based on c language, but it's easy to use in all programming languages such a micro controllers and cross platform programmings and ...

### Refrence :
https://github.com/denyssene/SimpleKalmanFilter.git


### How To use:

```
1- init your kalman with kalman function like: kalman(4,4,0.016);
2- use kalman_update(your_data_to_filter_in_float) to filter your data
```

### Kalman function parametres:

```
e_mea: Measurement Uncertainty - How much do we expect to our measurement vary

e_est: Estimation Uncertainty - Can be initilized with the same value as e_mea
       since the kalman filter will adjust its value.
       
q:     Process Variance - usually a small number between 0.001 and 1 - how fast your measurement moves. 
       Recommended 0.01. Should be tunned to your needs.
```

### kalman_update function parametres:

```
mea: the data you want to filter
```

### Sample program:
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
    // this is an example function like reading analog value with microcontroller or other function you want ...
    
    kalman_out=kalman_update(your_data_to_filter);
    // now kalman filter result is in kalman_out variable, you can use it :).
  
  }
}
```

if any questions please ask :)
arezaie14@gmail.com
