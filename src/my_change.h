#ifndef MY_CHANGE_H_
#define MY_CHANGE_H_
#include "convolutional_layer.h"
#include "utils.h"
#include "batchnorm_layer.h"
#include "im2col.h"
#include "col2im.h"
#include "blas.h"
#include "gemm.h"
#include "network.h"
#include<malloc.h>

//һ��Ҫ�����ͷ�ļ�������������߰�����gemm �� im2col_cpu_custom������������
//������l0_forward_convolutional_layer��������У�Ȼ��my_change.cҲ�������������������ȥ�����ӲŲ������
#include<immintrin.h>
void Print_net(network* net);
void mall_ptr_array(float *, float*);
void l0_forward_convolutional_layer(convolutional_layer l, network_state state);


#endif//MY_CHANGE_H_