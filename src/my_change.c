#include "network.h"
#include<malloc.h>
void Print_net(network* net) {

	for (int i = 0; i < net->n-1; i++) {
		layer l = net->layers[i];
		LAYER_TYPE T = l.type;
	}
}

void mall_ptr_array(float * sized, float* mall_ptr) {
	for (int i = 0; i < _msize(mall_ptr)/sizeof(float); i++) {
			sized[i] = mall_ptr[i];
	}
	return;
}