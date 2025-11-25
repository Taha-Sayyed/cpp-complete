#include<iostream>
using namespace std;


int* prepareChaiOrders(int cups){
    int* order_arr_ref=new int[cups];
    for(int i=0;i<cups;i++){
        order_arr_ref[i]=i+1;
    }
    return order_arr_ref;
}

int main(){
    int cups=5;
    int* order_arr=prepareChaiOrders(cups);
    for(int i=0;i<cups;i++){
        cout<<order_arr[i]<<endl;
    }
    delete[] order_arr;
    return 0;
}
